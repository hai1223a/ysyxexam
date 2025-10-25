## CUDA平台

CUDA平台不是单单指软件或者硬件，而是建立在Nvidia GPU上的一整套平台，并扩展出多语言支持。CUDA C 是标准ANSI C语言的扩展，扩展出一些语法和关键字来编写设备端代码，而且CUDA库本身提供了大量API来操作设备完成计算。

对于API也有两种不同的层次，一种相对交高层，一种相对底层。

- CUDA驱动API
- CUDA运行时API

驱动API是低级的API，使用相对困难，运行时API是高级API使用简单，其实现基于驱动API。这两种API是互斥的，也就是你只能用一个，两者之间的函数不可以混合调用，只能用其中的一个库。

## CUDA程序

一个CUDA应用通常可以分解为两部分，CUDA nvcc编译器会自动分离你代码里面的不同部分。

- CPU 主机端代码（host）
- GPU 设备端代码（device），也就是核函数

一个CUDA程序的流程为：

1. 分配GPU内存
2. 拷贝内存到设备
3. 调用CUDA内核函数来执行计算
4. 把计算完成数据拷贝回主机端
5. 内存销毁

### 内存管理

| **标准C函数** | **CUDA** **C 函数** | **说明** |
| :------------ | :------------------ | :------- |
| malloc        | cudaMalloc          | 内存分配 |
| memcpy        | cudaMemcpy          | 内存复制 |
| memset        | cudaMemset          | 内存设置 |
| free          | cudaFree            | 释放内存 |

```C++
cudaError_t cudaMalloc<float>(float **devPtr, size_t size)
//分配设备端的内存空间，_d表示device，_h表示host
//devPtr：指向被分配的device内存
//size：要求分配的内存字节数
cudaError_t cudaMemcpy(void *dst, const void *src, size_t count, cudaMemcpyKind kind)
//
cudaError_t cudaMemset(void *devPtr, int value, size_t count)
//
cudaError_t cudaFree(void *devPtr)
//
// 以上四种成功执行，返回cudaSuccess，否则返回其他信息，可以使用下面函数打印
char *cudaGetErrorString(cudaError_t error)
```

其中总共有四种过程（*cudaMemcpyKind kind* ）

- cudaMemcpyHostToHost
- cudaMemcpyHostToDevice
- cudaMemcpyDeviceToHost
- cudaMemcpyDeviceToDevice

以上四个函数对应的内存层次如下

![img](https://wcneuf9vhkxw.feishu.cn/space/api/box/stream/download/asynccode/?code=M2UyOTA1ZTIxMWZiYWJjNDE0M2Y1ZjEyOTQwNDcxZDBfOE12TjY2NmRNTHhhQlFZUHdoMVhUTGhNakQ1aHAwckJfVG9rZW46WGZYNGJSSDZNb0Z6MUV4MW1DOWNQbDdJbkpiXzE3NjEwMjUwNjk6MTc2MTAyODY2OV9WNA)

### 线程管理

一个核函数（kernel）对应一个Grid，一个Grid包含多个Block，每个Block包含了多个Thread，层次如下图所示：

![img](https://wcneuf9vhkxw.feishu.cn/space/api/box/stream/download/asynccode/?code=NmI3ZjdlYTA0NTBlMjA4MjY1OTQ0MmMxODk3ZmNiZWNfdXB1aEZPdDFMOWxsUThvMlkwcEplWmQ1ZFdMbEg1bXlfVG9rZW46R21yR2JicHByb253c3l4SFZtNmN6Rkg0bmNlXzE3NjEwMjUwNjk6MTc2MTAyODY2OV9WNA)

一个Block中的Thread可以**同步** ，**共享内存** ；不同Block之间不能相互影响。

每个Thread需要有一个自己的编号，这依赖两个基于`uint3` 定义的内置结构体，以表示其位置：

- `blockIdx`（Block在Grid中的位置索引）
- `threadIdx`（Thread在Block中的位置索引）

这些结构体都含有对应的`.x` `.y` `.z` 成员

还有两个基于`dim3` 定义的内置结构体表示对应位置索引的范围

- `gridDim` （表示了一个Grid中三个方向上的Block的数量）
- `blockDim` （表示了一个Block中三个方向上的Thread的数量）

```C++
// 一维Grid和一维Block
int threadId = blockIdx.x * blockDim.x + threadIdx.x;
// 一维Grid和二维Block
int threadId = blockIdx.x * blockDim.x * blockDim.y + threadIdx.y * blockDim.x + 
               threadIdx.x;
// 一维Grid和二维Block第二种计算方式
int x = (blockIdx.x * blockDim.x) + threadIdx.x;
int y = threadIdx.y;
int threadId = y * (gridDim.x * blockDim.x) + x; 
// 二维Grid和一维Block
int blockId = blockIdx.y * gridDim.x + blockIdx.x;  
int threadId = blockId * blockDim.x + threadIdx.x;
// 二维Grid和一维Block第二种计算方式
int x = (blockIdx.x * blockDim.x) + threadIdx.x;
int y = blockIdx.y;
int threadId = y * (gridDim.x * blockDim.x) + x;
// 二维Grid和二维Block
int blockId = blockIdx.x + blockIdx.y * gridDim.x;  
int threadId = blockId * (blockDim.x * blockDim.y) + (threadIdx.y * blockDim.x) + 
               threadIdx.x;
// 二维Grid和二维Block第二种计算方式
int x = (blockIdx.x * blockDim.x) + threadIdx.x;
int y = (blockIdx.y * blockDim.y) + threadIdx.y;
int threadId = y * (gridDim.x * blockDim.x) + x;
// 三维Grid和三维Block
int x = (blockIdx.x * blockDim.x) + threadIdx.x;
int y = (blockIdx.y * blockDim.y) + threadIdx.y;
int z = (blockIdx.z * blockDim.z) + threadIdx.z;
int threadId = z * ((gridDim.x * blockDim.x) * (gridDim.y * blockDim.y)) + 
               y * (gridDim.x * blockDim.x) + x;
```

![img](https://wcneuf9vhkxw.feishu.cn/space/api/box/stream/download/asynccode/?code=N2U2MDYxYjIyYzZiZTFlMzNhOGI0MWEyNWM5NDMyM2JfSzNwM2dFVWNURjQxVVJ1YkppRmtFb0VoZzB3c3NSVmhfVG9rZW46TnBvQmIybndSb0JGOHl4VzdjT2NyRExsblRiXzE3NjEwMjUwNjk6MTc2MTAyODY2OV9WNA)

![img](https://wcneuf9vhkxw.feishu.cn/space/api/box/stream/download/asynccode/?code=ZWJmNGZmZmExNjMyOTgwNDI0M2ZhZjJjZDc1MThlZjJfMGxEa2NhSUNLVHMxNjY0aVVvWDl0VnVBbjlHaXR5bzVfVG9rZW46UEFNWmJLZUNXb1ZITXR4aU4yUmNtZGF2bk9mXzE3NjEwMjUwNjk6MTc2MTAyODY2OV9WNA)

![img](https://wcneuf9vhkxw.feishu.cn/space/api/box/stream/download/asynccode/?code=OTViNWNiNzJmYWY2Y2FjOWI5NWZmMzlmZGY2MWFhZWNfeFpsdzZEYlp0WGhvNGNlc2RGUWF3QUZLT3BuTnBKVTFfVG9rZW46RXhSQ2I0MXZyb1dwUGh4UFNQOGM1QXBUbmhkXzE3NjEwMjUwNjk6MTc2MTAyODY2OV9WNA)

![img](https://wcneuf9vhkxw.feishu.cn/space/api/box/stream/download/asynccode/?code=NDZkOTVkZGQzYWZhODc1MDkzNDEyMWQ0MjVmNGI0YTlfZVpibkpSYkNEY2VobnFSSkhoemlRUkVVckY2c3JiR1pfVG9rZW46WFZIeWJSWDQ0b3dDRXF4QUVjd2NzZlozbkR2XzE3NjEwMjUwNjk6MTc2MTAyODY2OV9WNA)

**dim3和uint3他们存在区别**   

### 核函数

核函数（kernel）即运行在device上的代码，核函数编写存在以下限制：

- 只能访问设备内存
- 必须有void返回类型
- 不支持可变数量的参数
- 不支持静态变量
- 显示异步行为

核函数声明的模板如下（定义也类似）

```C++
__global__ void kernel_name(argument list);
```

`__global__` 类似的限定符有如下

| **限定符** | **执行**   | **调用**       | **备注**                 |
| :--------- | :--------- | :------------- | :----------------------- |
| __global__ | 设备端执行 | 可以从主机调用 | 必须有一个void的返回类型 |
| __device__ | 设备端执行 | 设备端调用     |                          |
| __host__   | 主机端执行 | 主机调用       | 可以省略                 |

通过以下的方式调用核函数

```C++
kernel_name<<<grid,block>>>(argument list);
// 都是一维的，3个Block，每个Block有32个Thread
kernel_name<<<3,32>>>(argument list);
// 都是二维的，2x2个Block，4x8个Thread
dim3 grid(2,2);
dim3 block(4, 8);
kernel_name<<<grid,block>>>(argument list);
```

可以使用dim3类型的Grid维度和Block维度配置内核，也可以使用int类型的变量，或者常量直接初始化。

当host启动核函数后，控制权将回到host，想让host等待device有两种方式：

- 显式的

| **CUDA C 函数**       | **说明**               |
| :-------------------- | :--------------------- |
| cudaDeviceSynchronize | host等待device完成运算 |

- 隐藏的

设备端不执行完，主机没办法进行，比如内存拷贝函数

## CUDA练习

### 练习一：向量加法

```C++
#include <iostream>
#include <cuda_runtime.h>
#include <vector>
#include <random>
#include <chrono>

// CUDA错误检查宏
#define checkCudaErrors(val) check((val), #val, __FILE__, __LINE__)
void check(cudaError_t err, const char* const func, const char* const file, const int line) {
    if (err != cudaSuccess) {
        std::cerr << "CUDA error at " << file << ":" << line << std::endl;
        std::cerr << cudaGetErrorString(err) << " " << func << std::endl;
        exit(1);
    }
}

// TODO: 核函数：向量加法
__global__ void vectorAdd(const float* a, const float* b, float* c, int n) {
    
}

// CPU版本的向量加法，用于验证结果
void vectorAddCPU(const std::vector<float>& a, const std::vector<float>& b, 
                  std::vector<float>& c, int n) {
    for (int i = 0; i < n; i++) {
        c[i] = a[i] + b[i];
    }
}

// 生成随机数据
void generateRandomData(std::vector<float>& data) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<float> dis(0.0f, 100.0f);
    
    for (auto& val : data) {
        val = dis(gen);
    }
}

// 验证结果是否正确
bool verifyResults(const std::vector<float>& cpu_result, 
                   const std::vector<float>& gpu_result, 
                   float epsilon = 1e-5f) {
    if (cpu_result.size() != gpu_result.size()) {
        return false;
    }
    
    for (size_t i = 0; i < cpu_result.size(); i++) {
        if (fabs(cpu_result[i] - gpu_result[i]) > epsilon) {
            std::cout << "Mismatch at index " << i << ": CPU=" << cpu_result[i] 
                      << ", GPU=" << gpu_result[i] << std::endl;
            return false;
        }
    }
    return true;
}

int main() {
    const int N = 1000000;  // 向量大小
    const size_t bytes = N * sizeof(float);
    
    std::cout << "向量大小: " << N << std::endl;
    std::cout << "数据大小: " << bytes / 1024 / 1024 << " MB" << std::endl;
    
    // 1. 分配主机内存
    std::vector<float> h_a(N), h_b(N), h_c(N), h_cpu(N);
    
    // 2. 生成随机数据
    generateRandomData(h_a);
    generateRandomData(h_b);
    
    // TODO: 分配设备内存
    
    // TODO: 拷贝数据到设备
    
    // TODO: 设置网格和块维度
    
    std::cout << "网格大小: " << 0 << " 个块" << std::endl;
    std::cout << "块大小: " << 0 << " 个线程" << std::endl;
    
    auto start = std::chrono::high_resolution_clock::now();
    
    // TODO: 执行核函数
    
    // TODO: 等待核函数执行完成
    
    auto end = std::chrono::high_resolution_clock::now();
    auto gpu_duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
    
    // TODO: 拷贝结果回主机
    
    // 8. CPU版本计算（用于验证）
    start = std::chrono::high_resolution_clock::now();
    vectorAddCPU(h_a, h_b, h_cpu, N);
    end = std::chrono::high_resolution_clock::now();
    auto cpu_duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
    
    // 9. 验证结果
    std::cout << "\n结果验证:" << std::endl;
    if (verifyResults(h_cpu, h_c)) {
        std::cout << "✓ 结果正确！GPU和CPU计算结果一致" << std::endl;
    } else {
        std::cout << "✗ 结果错误！GPU和CPU计算结果不一致" << std::endl;
    }
    
    // 10. 性能比较
    std::cout << "\n性能比较:" << std::endl;
    std::cout << "CPU执行时间: " << cpu_duration.count() << " 微秒" << std::endl;
    std::cout << "GPU执行时间: " << gpu_duration.count() << " 微秒" << std::endl;
    std::cout << "加速比: " << (float)cpu_duration.count() / gpu_duration.count() << " 倍" << std::endl;
    
    // TODO: 释放设备内存
    
    std::cout << "\n程序执行完成！" << std::endl;
    
    return 0;
}
```

编译执行命令

```C++
nvcc -o vector_add vector_add.cu -std=c++14
./vector_add
```

答案

```C++
#include <iostream>
#include <cuda_runtime.h>
#include <vector>
#include <random>
#include <chrono>

// CUDA错误检查宏
#define checkCudaErrors(val) check((val), #val, __FILE__, __LINE__)
void check(cudaError_t err, const char* const func, const char* const file, const int line) {
    if (err != cudaSuccess) {
        std::cerr << "CUDA error at " << file << ":" << line << std::endl;
        std::cerr << cudaGetErrorString(err) << " " << func << std::endl;
        exit(1);
    }
}

// TODO: 核函数：向量加法
__global__ void vectorAdd(const float* a, const float* b, float* c, int n) {
    int threadId = blockIdx.x * blockDim.x + threadIdx.x;
    if(threadId < n) {
        c[threadId] = a[threadId] + b[threadId];
    }
}

// CPU版本的向量加法，用于验证结果
void vectorAddCPU(const std::vector<float>& a, const std::vector<float>& b, 
                  std::vector<float>& c, int n) {
    for (int i = 0; i < n; i++) {
        c[i] = a[i] + b[i];
    }
}

// 生成随机数据
void generateRandomData(std::vector<float>& data) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<float> dis(0.0f, 100.0f);
    
    for (auto& val : data) {
        val = dis(gen);
    }
}

// 验证结果是否正确
bool verifyResults(const std::vector<float>& cpu_result, 
                   const std::vector<float>& gpu_result, 
                   float epsilon = 1e-5f) {
    if (cpu_result.size() != gpu_result.size()) {
        return false;
    }
    
    for (size_t i = 0; i < cpu_result.size(); i++) {
        if (fabs(cpu_result[i] - gpu_result[i]) > epsilon) {
            std::cout << "Mismatch at index " << i << ": CPU=" << cpu_result[i] 
                      << ", GPU=" << gpu_result[i] << std::endl;
            return false;
        }
    }
    return true;
}

int main() {
    const int N = 10000000;  // 向量大小
    const size_t bytes = N * sizeof(float);
    
    std::cout << "向量大小: " << N << std::endl;
    std::cout << "数据大小: " << bytes / 1024 / 1024 << " MB" << std::endl;
    
    // 1. 分配主机内存
    std::vector<float> h_a(N), h_b(N), h_c(N), h_cpu(N);
    
    // 2. 生成随机数据
    generateRandomData(h_a);
    generateRandomData(h_b);
    
    // TODO: 分配设备内存
    float *d_a, *d_b, *d_c;
    checkCudaErrors(cudaMalloc(&d_a, bytes));
    checkCudaErrors(cudaMalloc(&d_b, bytes));
    checkCudaErrors(cudaMalloc(&d_c, bytes));

    // TODO: 拷贝数据到设备
    checkCudaErrors(cudaMemcpy(d_a, h_a.data(), bytes, cudaMemcpyHostToDevice));
    checkCudaErrors(cudaMemcpy(d_b, h_b.data(), bytes, cudaMemcpyHostToDevice));
    // TODO: 设置网格和块维度
    int blocksize = 256;
    int gridsize = (N + blocksize - 1) / blocksize;
    std::cout << "网格大小: " << blocksize << " 个块" << std::endl;
    std::cout << "块大小: " << gridsize << " 个线程" << std::endl;
    
    auto start = std::chrono::high_resolution_clock::now();
    
    // TODO: 执行核函数
    vectorAdd<<<gridsize,blocksize>>>(d_a, d_b, d_c, N);

    // TODO: 等待核函数执行完成
    checkCudaErrors(cudaDeviceSynchronize());
    auto end = std::chrono::high_resolution_clock::now();
    auto gpu_duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
    
    // TODO: 拷贝结果回主机
    checkCudaErrors(cudaMemcpy(h_c.data(), d_c, bytes, cudaMemcpyDeviceToHost));
    // 8. CPU版本计算（用于验证）
    start = std::chrono::high_resolution_clock::now();
    vectorAddCPU(h_a, h_b, h_cpu, N);
    end = std::chrono::high_resolution_clock::now();
    auto cpu_duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
    
    // 9. 验证结果
    std::cout << "\n结果验证:" << std::endl;
    if (verifyResults(h_cpu, h_c)) {
        std::cout << "✓ 结果正确！GPU和CPU计算结果一致" << std::endl;
    } else {
        std::cout << "✗ 结果错误！GPU和CPU计算结果不一致" << std::endl;
    }
    
    // 10. 性能比较
    std::cout << "\n性能比较:" << std::endl;
    std::cout << "CPU执行时间: " << cpu_duration.count() << " 微秒" << std::endl;
    std::cout << "GPU执行时间: " << gpu_duration.count() << " 微秒" << std::endl;
    std::cout << "加速比: " << (float)cpu_duration.count() / gpu_duration.count() << " 倍" << std::endl;
    
    // TODO: 释放设备内存
    checkCudaErrors(cudaFree(d_a));
    checkCudaErrors(cudaFree(d_b));
    checkCudaErrors(cudaFree(d_c));
    std::cout << "\n程序执行完成！" << std::endl;
    
    return 0;
}
```

### 练习二：矩阵卷积

```C++
#include <iostream>
#include <vector>
#include <random>
#include <chrono>
#include <cuda_runtime.h>
#include <algorithm>
#include <cmath>

// CUDA错误检查宏
#define CUDA_CHECK(call) \
do { \
    cudaError_t error = call; \
    if (error != cudaSuccess) { \
        std::cerr << "CUDA error at " << __FILE__ << ":" << __LINE__ << ": " \
                  << cudaGetErrorString(error) << std::endl; \
        exit(EXIT_FAILURE); \
    } \
} while(0)

// TODO: 核函数：2D矩阵卷积
__global__ void convolution2D(const float* input, float* output, 
                            int inputWidth, int inputHeight,
                            const float* kernel, int kernelSize) {
}

// CPU版本的卷积，用于验证结果
void convolution2D_CPU(const float* input, float* output, 
                      int inputWidth, int inputHeight,
                      const float* kernel, int kernelSize) {
    int outputWidth = inputWidth - kernelSize + 1;
    int outputHeight = inputHeight - kernelSize + 1;
    
    for (int y = 0; y < outputHeight; y++) {
        for (int x = 0; x < outputWidth; x++) {
            float sum = 0.0f;
            
            for (int ky = 0; ky < kernelSize; ky++) {
                for (int kx = 0; kx < kernelSize; kx++) {
                    int inputX = x + kx;
                    int inputY = y + ky;
                    float inputVal = input[inputY * inputWidth + inputX];
                    float kernelVal = kernel[ky * kernelSize + kx];
                    sum += inputVal * kernelVal;
                }
            }
            
            output[y * outputWidth + x] = sum;
        }
    }
}

// 验证GPU和CPU结果是否一致
bool verifyResults(const float* gpu_result, const float* cpu_result, 
                  int width, int height, float epsilon = 1e-4f) {
    int size = width * height;
    
    for (int i = 0; i < size; i++) {
        if (fabs(gpu_result[i] - cpu_result[i]) > epsilon) {
            std::cout << "差异在索引 " << i << ": GPU=" << gpu_result[i] 
                      << ", CPU=" << cpu_result[i] 
                      << ", 差异=" << fabs(gpu_result[i] - cpu_result[i]) << std::endl;
            return false;
        }
    }
    return true;
}

// 计算数组的最大绝对误差
float calculateMaxError(const float* a, const float* b, int size) {
    float maxError = 0.0f;
    for (int i = 0; i < size; i++) {
        float error = fabs(a[i] - b[i]);
        if (error > maxError) {
            maxError = error;
        }
    }
    return maxError;
}

// 打印性能统计信息
void printPerformanceStats(float gpu_time_ms, float cpu_time_ms, int outputSize) {
    float speedup = cpu_time_ms / gpu_time_ms;
    float dataSizeGB = (outputSize * sizeof(float)) / (1024.0f * 1024.0f * 1024.0f);
    float gpu_throughput = dataSizeGB / (gpu_time_ms / 1000.0f);
    float cpu_throughput = dataSizeGB / (cpu_time_ms / 1000.0f);
    
    std::cout << "CPU执行时间: " << cpu_time_ms << " ms" << std::endl;
    std::cout << "GPU执行时间: " << gpu_time_ms << " ms" << std::endl;
    std::cout << "加速比: " << speedup << "x" << std::endl;
    std::cout << "CPU吞吐量: " << cpu_throughput << " GB/s" << std::endl;
    std::cout << "GPU吞吐量: " << gpu_throughput << " GB/s" << std::endl;
}

int main() {
    // 输入图像尺寸
    const int inputWidth = 1024;
    const int inputHeight = 1024;
    
    // 卷积核尺寸 (3x3 高斯模糊)
    const int kernelSize = 3;
    const float h_kernel[9] = {
        1/16.0f, 2/16.0f, 1/16.0f,
        2/16.0f, 4/16.0f, 2/16.0f,
        1/16.0f, 2/16.0f, 1/16.0f
    };
    
    // 输出图像尺寸
    const int outputWidth = inputWidth - kernelSize + 1;
    const int outputHeight = inputHeight - kernelSize + 1;
    const int outputSize = outputWidth * outputHeight;
    
    std::cout << "=== 矩阵卷积性能测试 ===" << std::endl;
    std::cout << "输入尺寸: " << inputWidth << "x" << inputHeight << std::endl;
    std::cout << "卷积核尺寸: " << kernelSize << "x" << kernelSize << std::endl;
    std::cout << "输出尺寸: " << outputWidth << "x" << outputHeight << std::endl;
    std::cout << "总像素数: " << outputSize << std::endl;
    
    // 主机内存分配
    std::vector<float> h_input(inputWidth * inputHeight);
    std::vector<float> h_output_gpu(outputSize);
    std::vector<float> h_output_cpu(outputSize);
    
    // 生成测试数据 (简单梯度图像)
    for (int y = 0; y < inputHeight; y++) {
        for (int x = 0; x < inputWidth; x++) {
            h_input[y * inputWidth + x] = static_cast<float>((x + y) % 256);
        }
    }
    
    // CPU计算并计时
    std::cout << "\n=== CPU计算 ===" << std::endl;
    auto cpu_start = std::chrono::high_resolution_clock::now();
    
    convolution2D_CPU(h_input.data(), h_output_cpu.data(), 
                     inputWidth, inputHeight, h_kernel, kernelSize);
    
    auto cpu_end = std::chrono::high_resolution_clock::now();
    auto cpu_duration = std::chrono::duration_cast<std::chrono::microseconds>(cpu_end - cpu_start);
    float cpu_time_ms = cpu_duration.count() / 1000.0f;
    std::cout << "CPU计算完成，耗时: " << cpu_time_ms << " ms" << std::endl;
    
    // GPU部分开始 ==========================================
    std::cout << "\n=== GPU计算 ===" << std::endl;
    
    // TODO: 分配设备内存
    // *d_input, *d_output, *d_kernel;
    // TODO: 拷贝输入数据和卷积核到设备
    // TODO: 计算网格和块维度
    std::cout << "网格维度: (" << 0 << ", " << 0 << ")" << std::endl;
    std::cout << "块维度: (" << 0 << ", " << 0 << ")" << std::endl;
    
    // 使用CPU计时方式测量GPU时间
    auto gpu_start = std::chrono::high_resolution_clock::now();
    
    // TODO: 执行核函数
    
    // TODO: 等待GPU完成
    
    auto gpu_end = std::chrono::high_resolution_clock::now();
    auto gpu_duration = std::chrono::duration_cast<std::chrono::microseconds>(gpu_end - gpu_start);
    float gpu_time_ms = gpu_duration.count() / 1000.0f;
    std::cout << "GPU计算完成，耗时: " << gpu_time_ms << " ms" << std::endl;
    
    // TODO: 拷贝结果回主机
    
    // TODO: 释放设备内存
    
    // GPU部分结束 ==========================================
    
    // 结果验证
    std::cout << "\n=== 结果验证 ===" << std::endl;
    
    bool isCorrect = verifyResults(h_output_gpu.data(), h_output_cpu.data(), 
                                 outputWidth, outputHeight, 1e-4f);
    
    if (isCorrect) {
        std::cout << "✓ 验证通过：GPU和CPU结果一致" << std::endl;
    } else {
        std::cout << "✗ 验证失败：GPU和CPU结果不一致" << std::endl;
        
        // 计算并显示最大误差
        float maxError = calculateMaxError(h_output_gpu.data(), h_output_cpu.data(), outputSize);
        std::cout << "最大绝对误差: " << maxError << std::endl;
    }
    
    // 性能统计
    std::cout << "\n=== 性能统计 ===" << std::endl;
    printPerformanceStats(gpu_time_ms, cpu_time_ms, outputSize);
    
    // 打印结果样例
    std::cout << "\n=== 结果样例 ===" << std::endl;
    std::cout << "前5个像素点的结果对比:" << std::endl;
    for (int i = 0; i < std::min(5, outputSize); i++) {
        printf("像素[%d]: CPU=%.4f, GPU=%.4f\n", 
               i, h_output_cpu[i], h_output_gpu[i]);
    }
    
    std::cout << "\n程序执行完成！" << std::endl;
    
    return 0;
}
```

编译执行命令

```C++
nvcc -o matrix_conv matrix_conv.cu -std=c++14 -O2
./matrix_conv
```

答案

```C++
#include <iostream>
#include <vector>
#include <random>
#include <chrono>
#include <cuda_runtime.h>
#include <algorithm>
#include <cmath>

// CUDA错误检查宏
#define CUDA_CHECK(call) \
do { \
    cudaError_t error = call; \
    if (error != cudaSuccess) { \
        std::cerr << "CUDA error at " << __FILE__ << ":" << __LINE__ << ": " \
                  << cudaGetErrorString(error) << std::endl; \
        exit(EXIT_FAILURE); \
    } \
} while(0)

// TODO: 核函数：2D矩阵卷积
__global__ void convolution2D(const float* input, float* output, 
                            int inputWidth, int inputHeight,
                            const float* kernel, int kernelSize) {
    int x = blockDim.x * blockIdx.x + threadIdx.x;
    int y = blockDim.y * blockIdx.y + threadIdx.y;
    int outputWidth = inputWidth - kernelSize + 1;
    int outputHeight = inputHeight - kernelSize + 1;

        // 边界检查
    if (x >= outputWidth || y >= outputHeight) {
        return;
    }
    float sum = 0.0f;
    for (int ky = 0; ky < kernelSize; ky++) {
        for (int kx = 0; kx < kernelSize; kx++) {
            int inputX = x + kx;
            int inputY = y + ky;
            float inputVal = input[inputY * inputWidth + inputX];
            float kernelVal = kernel[ky * kernelSize + kx];
            sum += inputVal * kernelVal;
        }
    }
    output[y * outputWidth + x] = sum;
}

// CPU版本的卷积，用于验证结果
void convolution2D_CPU(const float* input, float* output, 
                      int inputWidth, int inputHeight,
                      const float* kernel, int kernelSize) {
    int outputWidth = inputWidth - kernelSize + 1;
    int outputHeight = inputHeight - kernelSize + 1;
    
    for (int y = 0; y < outputHeight; y++) {
        for (int x = 0; x < outputWidth; x++) {
            float sum = 0.0f;
            
            for (int ky = 0; ky < kernelSize; ky++) {
                for (int kx = 0; kx < kernelSize; kx++) {
                    int inputX = x + kx;
                    int inputY = y + ky;
                    float inputVal = input[inputY * inputWidth + inputX];
                    float kernelVal = kernel[ky * kernelSize + kx];
                    sum += inputVal * kernelVal;
                }
            }
            
            output[y * outputWidth + x] = sum;
        }
    }
}

// 验证GPU和CPU结果是否一致
bool verifyResults(const float* gpu_result, const float* cpu_result, 
                  int width, int height, float epsilon = 1e-4f) {
    int size = width * height;
    
    for (int i = 0; i < size; i++) {
        if (fabs(gpu_result[i] - cpu_result[i]) > epsilon) {
            std::cout << "差异在索引 " << i << ": GPU=" << gpu_result[i] 
                      << ", CPU=" << cpu_result[i] 
                      << ", 差异=" << fabs(gpu_result[i] - cpu_result[i]) << std::endl;
            return false;
        }
    }
    return true;
}

// 计算数组的最大绝对误差
float calculateMaxError(const float* a, const float* b, int size) {
    float maxError = 0.0f;
    for (int i = 0; i < size; i++) {
        float error = fabs(a[i] - b[i]);
        if (error > maxError) {
            maxError = error;
        }
    }
    return maxError;
}

// 打印性能统计信息
void printPerformanceStats(float gpu_time_ms, float cpu_time_ms, int outputSize) {
    float speedup = cpu_time_ms / gpu_time_ms;
    float dataSizeGB = (outputSize * sizeof(float)) / (1024.0f * 1024.0f * 1024.0f);
    float gpu_throughput = dataSizeGB / (gpu_time_ms / 1000.0f);
    float cpu_throughput = dataSizeGB / (cpu_time_ms / 1000.0f);
    
    std::cout << "CPU执行时间: " << cpu_time_ms << " ms" << std::endl;
    std::cout << "GPU执行时间: " << gpu_time_ms << " ms" << std::endl;
    std::cout << "加速比: " << speedup << "x" << std::endl;
    std::cout << "CPU吞吐量: " << cpu_throughput << " GB/s" << std::endl;
    std::cout << "GPU吞吐量: " << gpu_throughput << " GB/s" << std::endl;
}

int main() {
    // 输入图像尺寸
    const int inputWidth = 1024;
    const int inputHeight = 1024;
    
    // 卷积核尺寸 (3x3 高斯模糊)
    const int kernelSize = 3;
    const float h_kernel[9] = {
        1/16.0f, 2/16.0f, 1/16.0f,
        2/16.0f, 4/16.0f, 2/16.0f,
        1/16.0f, 2/16.0f, 1/16.0f
    };
    
    // 输出图像尺寸
    const int outputWidth = inputWidth - kernelSize + 1;
    const int outputHeight = inputHeight - kernelSize + 1;
    const int outputSize = outputWidth * outputHeight;
    
    std::cout << "=== 矩阵卷积性能测试 ===" << std::endl;
    std::cout << "输入尺寸: " << inputWidth << "x" << inputHeight << std::endl;
    std::cout << "卷积核尺寸: " << kernelSize << "x" << kernelSize << std::endl;
    std::cout << "输出尺寸: " << outputWidth << "x" << outputHeight << std::endl;
    std::cout << "总像素数: " << outputSize << std::endl;
    
    // 主机内存分配
    std::vector<float> h_input(inputWidth * inputHeight);
    std::vector<float> h_output_gpu(outputSize);
    std::vector<float> h_output_cpu(outputSize);
    
    // 生成测试数据 (简单梯度图像)
    for (int y = 0; y < inputHeight; y++) {
        for (int x = 0; x < inputWidth; x++) {
            h_input[y * inputWidth + x] = static_cast<float>((x + y) % 256);
        }
    }
    
    // CPU计算并计时
    std::cout << "\n=== CPU计算 ===" << std::endl;
    auto cpu_start = std::chrono::high_resolution_clock::now();
    
    convolution2D_CPU(h_input.data(), h_output_cpu.data(), 
                     inputWidth, inputHeight, h_kernel, kernelSize);
    
    auto cpu_end = std::chrono::high_resolution_clock::now();
    auto cpu_duration = std::chrono::duration_cast<std::chrono::microseconds>(cpu_end - cpu_start);
    float cpu_time_ms = cpu_duration.count() / 1000.0f;
    std::cout << "CPU计算完成，耗时: " << cpu_time_ms << " ms" << std::endl;
    
    // GPU部分开始 ==========================================
    std::cout << "\n=== GPU计算 ===" << std::endl;
    
    // TODO: 分配设备内存
    // *d_input, *d_output, *d_kernel;
    float *d_input, *d_output, *d_kernel;
    CUDA_CHECK(cudaMalloc(&d_input, inputWidth*inputHeight*sizeof(float)));
    CUDA_CHECK(cudaMalloc(&d_output, outputSize*sizeof(float)));
    CUDA_CHECK(cudaMalloc(&d_kernel, 9*sizeof(float)));

    // TODO: 拷贝输入数据和卷积核到设备
    CUDA_CHECK(cudaMemcpy(d_input, h_input.data(), inputWidth*inputHeight*sizeof(float), cudaMemcpyHostToDevice));
    CUDA_CHECK(cudaMemcpy(d_kernel, h_kernel, 9*sizeof(float), cudaMemcpyHostToDevice));
    // TODO: 计算网格和块维度
    dim3 block(16,16);
    dim3 grid((outputWidth + block.x - 1) / block.x, 
                 (outputHeight + block.y - 1) / block.y);
    std::cout << "网格维度: (" << grid.x << ", " << grid.y << ")" << std::endl;
    std::cout << "块维度: (" << block.x << ", " << block.x << ")" << std::endl;
    
    // 使用CPU计时方式测量GPU时间
    auto gpu_start = std::chrono::high_resolution_clock::now();
    
    // TODO: 执行核函数
    convolution2D<<<grid, block>>>(d_input, d_output, inputWidth, inputHeight, d_kernel, kernelSize);
    // TODO: 等待GPU完成
    CUDA_CHECK(cudaDeviceSynchronize());
    auto gpu_end = std::chrono::high_resolution_clock::now();
    auto gpu_duration = std::chrono::duration_cast<std::chrono::microseconds>(gpu_end - gpu_start);
    float gpu_time_ms = gpu_duration.count() / 1000.0f;
    std::cout << "GPU计算完成，耗时: " << gpu_time_ms << " ms" << std::endl;
    
    // TODO: 拷贝结果回主机
    CUDA_CHECK(cudaMemcpy(h_output_gpu.data(), d_output, outputSize*sizeof(float), cudaMemcpyDeviceToHost));
    // TODO: 释放设备内存
    CUDA_CHECK(cudaFree(d_input));
    CUDA_CHECK(cudaFree(d_output));
    CUDA_CHECK(cudaFree(d_kernel));
    // GPU部分结束 ==========================================
    
    // 结果验证
    std::cout << "\n=== 结果验证 ===" << std::endl;
    
    bool isCorrect = verifyResults(h_output_gpu.data(), h_output_cpu.data(), 
                                 outputWidth, outputHeight, 1e-4f);
    
    if (isCorrect) {
        std::cout << "✓ 验证通过：GPU和CPU结果一致" << std::endl;
    } else {
        std::cout << "✗ 验证失败：GPU和CPU结果不一致" << std::endl;
        
        // 计算并显示最大误差
        float maxError = calculateMaxError(h_output_gpu.data(), h_output_cpu.data(), outputSize);
        std::cout << "最大绝对误差: " << maxError << std::endl;
    }
    
    // 性能统计
    std::cout << "\n=== 性能统计 ===" << std::endl;
    printPerformanceStats(gpu_time_ms, cpu_time_ms, outputSize);
    
    // 打印结果样例
    std::cout << "\n=== 结果样例 ===" << std::endl;
    std::cout << "前5个像素点的结果对比:" << std::endl;
    for (int i = 0; i < std::min(5, outputSize); i++) {
        printf("像素[%d]: CPU=%.4f, GPU=%.4f\n", 
               i, h_output_cpu[i], h_output_gpu[i]);
    }
    
    std::cout << "\n程序执行完成！" << std::endl;
    
    return 0;
}
```

在这道题中，第一次出现了线程未使用的情况，因为需要调用线程数大于等于需要处理点数，所以要注意甄别边界情况。

### 练习三：LeNet5的卷积层

```C++
#include <iostream>
#include <vector>
#include <random>
#include <chrono>
#include <cuda_runtime.h>
#include <algorithm>
#include <cmath>
#include <iomanip>

// CUDA错误检查宏
#define CUDA_CHECK(call) \
do { \
    cudaError_t error = call; \
    if (error != cudaSuccess) { \
        std::cerr << "CUDA error at " << __FILE__ << ":" << __LINE__ << ": " \
                  << cudaGetErrorString(error) << std::endl; \
        exit(EXIT_FAILURE); \
    } \
} while(0)

// TODO: 核函数：多卷积核2D卷积
__global__ void multiKernelConv2D(const float* input, float* output, 
                                int inputWidth, int inputHeight, int inputChannels,
                                const float* kernels, int kernelSize, int numKernels,
                                int outputWidth, int outputHeight, int outputChannels) {

}

// CPU版本的CNN卷积层
void multiKernelConv2D_CPU(const float* input, float* output, 
                          int inputWidth, int inputHeight, int inputChannels,
                          const float* kernels, int kernelSize, int numKernels) {
    int outputWidth = inputWidth - kernelSize + 1;
    int outputHeight = inputHeight - kernelSize + 1;
    
    for (int k = 0; k < numKernels; k++) {
        for (int y = 0; y < outputHeight; y++) {
            for (int x = 0; x < outputWidth; x++) {
                float sum = 0.0f;
                
                // 对每个输入通道进行卷积
                for (int c = 0; c < inputChannels; c++) {
                    for (int ky = 0; ky < kernelSize; ky++) {
                        for (int kx = 0; kx < kernelSize; kx++) {
                            int inputX = x + kx;
                            int inputY = y + ky;
                            int inputIdx = c * inputHeight * inputWidth + inputY * inputWidth + inputX;
                            int kernelIdx = k * inputChannels * kernelSize * kernelSize + 
                                          c * kernelSize * kernelSize + 
                                          ky * kernelSize + kx;
                            
                            sum += input[inputIdx] * kernels[kernelIdx];
                        }
                    }
                }
                
                int outputIdx = k * outputHeight * outputWidth + y * outputWidth + x;
                output[outputIdx] = sum;
            }
        }
    }
}

// 初始化卷积核（类似LeNet-5的卷积核）
void initializeKernels(float* kernels, int numKernels, int channels, int kernelSize) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::normal_distribution<float> dis(0.0f, 0.1f);
    
    for (int i = 0; i < numKernels * channels * kernelSize * kernelSize; i++) {
        kernels[i] = dis(gen);
    }
}

// 验证结果
bool verifyResults(const float* gpu_result, const float* cpu_result, int totalSize, float epsilon = 1e-4f) {
    for (int i = 0; i < totalSize; i++) {
        if (fabs(gpu_result[i] - cpu_result[i]) > epsilon) {
            std::cout << "差异在索引 " << i << ": GPU=" << gpu_result[i] 
                      << ", CPU=" << cpu_result[i] 
                      << ", 差异=" << fabs(gpu_result[i] - cpu_result[i]) << std::endl;
            return false;
        }
    }
    return true;
}

// 计算最大误差
float calculateMaxError(const float* a, const float* b, int size) {
    float maxError = 0.0f;
    for (int i = 0; i < size; i++) {
        float error = fabs(a[i] - b[i]);
        if (error > maxError) {
            maxError = error;
        }
    }
    return maxError;
}

// 打印性能统计信息
void printPerformanceStats(float gpu_time_ms, float cpu_time_ms, int outputSize) {
    float speedup = cpu_time_ms / gpu_time_ms;
    float dataSizeGB = (outputSize * sizeof(float)) / (1024.0f * 1024.0f * 1024.0f);
    float gpu_throughput = dataSizeGB / (gpu_time_ms / 1000.0f);
    float cpu_throughput = dataSizeGB / (cpu_time_ms / 1000.0f);
    
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "CPU执行时间: " << cpu_time_ms << " ms" << std::endl;
    std::cout << "GPU执行时间: " << gpu_time_ms << " ms" << std::endl;
    std::cout << "加速比: " << speedup << "x" << std::endl;
    std::cout << "CPU吞吐量: " << cpu_throughput << " GB/s" << std::endl;
    std::cout << "GPU吞吐量: " << gpu_throughput << " GB/s" << std::endl;
}

// 打印卷积层信息
void printLayerInfo(int inputW, int inputH, int inputC, int kernelSize, int numKernels) {
    int outputW = inputW - kernelSize + 1;
    int outputH = inputH - kernelSize + 1;
    
    std::cout << "=== CNN卷积层配置 ===" << std::endl;
    std::cout << "输入: " << inputW << "×" << inputH << "×" << inputC << std::endl;
    std::cout << "卷积核: " << numKernels << "个 " << kernelSize << "×" << kernelSize << "×" << inputC << std::endl;
    std::cout << "输出: " << outputW << "×" << outputH << "×" << numKernels << std::endl;
    
    int totalParams = numKernels * inputC * kernelSize * kernelSize;
    int totalOperations = numKernels * outputW * outputH * inputC * kernelSize * kernelSize * 2;
    std::cout << "参数量: " << totalParams << std::endl;
    std::cout << "计算量: " << totalOperations / 1e6 << " MFLOPs" << std::endl;
}

int main() {
    // CNN卷积层参数（类似LeNet-5第一层）
    const int inputWidth = 28;    // MNIST图像宽度
    const int inputHeight = 28;   // MNIST图像高度  
    const int inputChannels = 1;  // 灰度图，单通道
    const int kernelSize = 3;     // 3x3卷积核
    const int numKernels = 6;     // 6个卷积核
    
    const int outputWidth = inputWidth - kernelSize + 1;
    const int outputHeight = inputHeight - kernelSize + 1;
    const int outputChannels = numKernels;
    
    const int inputSize = inputWidth * inputHeight * inputChannels;
    const int outputSize = outputWidth * outputHeight * numKernels;
    const int kernelSizeTotal = numKernels * inputChannels * kernelSize * kernelSize;
    
    // 打印层信息
    printLayerInfo(inputWidth, inputHeight, inputChannels, kernelSize, numKernels);
    
    // 分配主机内存
    std::vector<float> h_input(inputSize);
    std::vector<float> h_kernels(kernelSizeTotal);
    std::vector<float> h_output_gpu(outputSize);
    std::vector<float> h_output_cpu(outputSize);
    
    // 初始化输入数据（模拟MNIST数字图像）
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<float> dis(0.0f, 1.0f);
    
    for (int i = 0; i < inputSize; i++) {
        h_input[i] = dis(gen);
    }
    
    // 初始化卷积核
    initializeKernels(h_kernels.data(), numKernels, inputChannels, kernelSize);
    
    // CPU计算
    std::cout << "\n=== CPU计算 ===" << std::endl;
    auto cpu_start = std::chrono::high_resolution_clock::now();
    
    multiKernelConv2D_CPU(h_input.data(), h_output_cpu.data(),
                         inputWidth, inputHeight, inputChannels,
                         h_kernels.data(), kernelSize, numKernels);
    
    auto cpu_end = std::chrono::high_resolution_clock::now();
    auto cpu_duration = std::chrono::duration_cast<std::chrono::microseconds>(cpu_end - cpu_start);
    float cpu_time_ms = cpu_duration.count() / 1000.0f;
    std::cout << "CPU计算完成，耗时: " << cpu_time_ms << " ms" << std::endl;
    
    // GPU部分开始 ==========================================
    std::cout << "\n=== GPU计算 ===" << std::endl;
    
    // TODO: 分配设备内存
    
    // TODO: 拷贝数据到设备
    
    // TODO: 设置网格和块维度（三维网格）
    
    // std::cout << "网格维度: (" << gridDim.x << ", " << gridDim.y << ", " << gridDim.z << ")" << std::endl;
    // std::cout << "块维度: (" << blockDim.x << ", " << blockDim.y << ", " << blockDim.z << ")" << std::endl;
    // std::cout << "总线程数: " << gridDim.x * gridDim.y * gridDim.z * blockDim.x * blockDim.y * blockDim.z << std::endl;
    
    // TODO: 执行核函数
    auto gpu_start = std::chrono::high_resolution_clock::now();
    
    auto gpu_end = std::chrono::high_resolution_clock::now();
    auto gpu_duration = std::chrono::duration_cast<std::chrono::microseconds>(gpu_end - gpu_start);
    float gpu_time_ms = gpu_duration.count() / 1000.0f;
    std::cout << "GPU计算完成，耗时: " << gpu_time_ms << " ms" << std::endl;
    
    // TODO: 拷贝结果回主机
    
    // TODO: 释放设备内存
    
    // GPU部分结束 ==========================================
    
    // 结果验证
    std::cout << "\n=== 结果验证 ===" << std::endl;
    bool isCorrect = verifyResults(h_output_gpu.data(), h_output_cpu.data(), outputSize, 1e-4f);
    
    if (isCorrect) {
        std::cout << "✓ 验证通过：GPU和CPU结果一致" << std::endl;
    } else {
        std::cout << "✗ 验证失败：GPU和CPU结果不一致" << std::endl;
        float maxError = calculateMaxError(h_output_gpu.data(), h_output_cpu.data(), outputSize);
        std::cout << "最大绝对误差: " << maxError << std::endl;
    }
    
    // 性能统计
    std::cout << "\n=== 性能统计 ===" << std::endl;
    printPerformanceStats(gpu_time_ms, cpu_time_ms, outputSize);
    
    // 显示部分输出特征图
    std::cout << "\n=== 输出特征图样例 ===" << std::endl;
    for (int k = 0; k < std::min(2, numKernels); k++) {
        std::cout << "卷积核 " << k << " 的输出特征图前5个值:" << std::endl;
        for (int i = 0; i < std::min(5, outputWidth * outputHeight); i++) {
            int idx = k * outputWidth * outputHeight + i;
            printf("  [%d] GPU: %8.4f, CPU: %8.4f\n", i, h_output_gpu[idx], h_output_cpu[idx]);
        }
        std::cout << std::endl;
    }
    
    std::cout << "程序执行完成！" << std::endl;
    
    // 查询设备限制
    cudaDeviceProp prop;
    cudaGetDeviceProperties(&prop, 0);

    int max_threads_per_block = prop.maxThreadsPerBlock;  // 通常1024
    int max_block_dims[3] = {prop.maxThreadsDim[0], prop.maxThreadsDim[1], prop.maxThreadsDim[2]};
    int max_grid_dims[3] = {prop.maxGridSize[0], prop.maxGridSize[1], prop.maxGridSize[2]};
    std::cout << "\n=== 设备限制信息 ===" << std::endl;
    std::cout << "每块最大线程数: " << max_threads_per_block << std::endl;
    std::cout << "块维度最大值: (" << max_block_dims[0] << ", " 
              << max_block_dims[1] << ", " << max_block_dims[2] << ")" << std::endl;
    std::cout << "网格维度最大值: (" << max_grid_dims[0] << ", " 
              << max_grid_dims[1] << ", " << max_grid_dims[2] << ")" << std::endl;
    return 0;
}
```

编译执行命令

```C++
nvcc -o cnn_conv cnn_conv.cu -std=c++14 -O2
./cnn_conv 
```

答案

```C++
#include <iostream>
#include <vector>
#include <random>
#include <chrono>
#include <cuda_runtime.h>
#include <algorithm>
#include <cmath>
#include <iomanip>

// CUDA错误检查宏
#define CUDA_CHECK(call) \
do { \
    cudaError_t error = call; \
    if (error != cudaSuccess) { \
        std::cerr << "CUDA error at " << __FILE__ << ":" << __LINE__ << ": " \
                  << cudaGetErrorString(error) << std::endl; \
        exit(EXIT_FAILURE); \
    } \
} while(0)

// TODO: 核函数：多卷积核2D卷积
__global__ void multiKernelConv2D(const float* input, float* output, 
                                int inputWidth, int inputHeight, int inputChannels,
                                const float* kernels, int kernelSize, int numKernels,
                                int outputWidth, int outputHeight, int outputChannels) {
    // 计算输出坐标和卷积核索引
    int x = blockIdx.x * blockDim.x + threadIdx.x;
    int y = blockIdx.y * blockDim.y + threadIdx.y;
    int k = blockIdx.z * blockDim.z + threadIdx.z;
    
    // 边界检查
    if (x >= outputWidth || y >= outputHeight || k >= numKernels) {
        return;
    }
    
    float sum = 0.0f;
    
    // 多通道卷积计算
    for (int c = 0; c < inputChannels; c++) {
        for (int ky = 0; ky < kernelSize; ky++) {
            for (int kx = 0; kx < kernelSize; kx++) {
                int inputX = x + kx;
                int inputY = y + ky;
                
                // 计算输入索引 [c, y, x]
                int inputIdx = c * inputHeight * inputWidth + inputY * inputWidth + inputX;
                // 计算卷积核索引 [k, c, ky, kx]
                int kernelIdx = k * inputChannels * kernelSize * kernelSize + 
                              c * kernelSize * kernelSize + 
                              ky * kernelSize + kx;
                
                sum += input[inputIdx] * kernels[kernelIdx];
            }
        }
    }
    
    // 计算输出索引 [k, y, x]
    int outputIdx = k * outputHeight * outputWidth + y * outputWidth + x;
    output[outputIdx] = sum;
}

// CPU版本的CNN卷积层
void multiKernelConv2D_CPU(const float* input, float* output, 
                          int inputWidth, int inputHeight, int inputChannels,
                          const float* kernels, int kernelSize, int numKernels) {
    int outputWidth = inputWidth - kernelSize + 1;
    int outputHeight = inputHeight - kernelSize + 1;
    
    for (int k = 0; k < numKernels; k++) {
        for (int y = 0; y < outputHeight; y++) {
            for (int x = 0; x < outputWidth; x++) {
                float sum = 0.0f;
                
                // 对每个输入通道进行卷积
                for (int c = 0; c < inputChannels; c++) {
                    for (int ky = 0; ky < kernelSize; ky++) {
                        for (int kx = 0; kx < kernelSize; kx++) {
                            int inputX = x + kx;
                            int inputY = y + ky;
                            int inputIdx = c * inputHeight * inputWidth + inputY * inputWidth + inputX;
                            int kernelIdx = k * inputChannels * kernelSize * kernelSize + 
                                          c * kernelSize * kernelSize + 
                                          ky * kernelSize + kx;
                            
                            sum += input[inputIdx] * kernels[kernelIdx];
                        }
                    }
                }
                
                int outputIdx = k * outputHeight * outputWidth + y * outputWidth + x;
                output[outputIdx] = sum;
            }
        }
    }
}

// 初始化卷积核（类似LeNet-5的卷积核）
void initializeKernels(float* kernels, int numKernels, int channels, int kernelSize) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::normal_distribution<float> dis(0.0f, 0.1f);
    
    for (int i = 0; i < numKernels * channels * kernelSize * kernelSize; i++) {
        kernels[i] = dis(gen);
    }
}

// 验证结果
bool verifyResults(const float* gpu_result, const float* cpu_result, int totalSize, float epsilon = 1e-4f) {
    for (int i = 0; i < totalSize; i++) {
        if (fabs(gpu_result[i] - cpu_result[i]) > epsilon) {
            std::cout << "差异在索引 " << i << ": GPU=" << gpu_result[i] 
                      << ", CPU=" << cpu_result[i] 
                      << ", 差异=" << fabs(gpu_result[i] - cpu_result[i]) << std::endl;
            return false;
        }
    }
    return true;
}

// 计算最大误差
float calculateMaxError(const float* a, const float* b, int size) {
    float maxError = 0.0f;
    for (int i = 0; i < size; i++) {
        float error = fabs(a[i] - b[i]);
        if (error > maxError) {
            maxError = error;
        }
    }
    return maxError;
}

// 打印性能统计信息
void printPerformanceStats(float gpu_time_ms, float cpu_time_ms, int outputSize) {
    float speedup = cpu_time_ms / gpu_time_ms;
    float dataSizeGB = (outputSize * sizeof(float)) / (1024.0f * 1024.0f * 1024.0f);
    float gpu_throughput = dataSizeGB / (gpu_time_ms / 1000.0f);
    float cpu_throughput = dataSizeGB / (cpu_time_ms / 1000.0f);
    
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "CPU执行时间: " << cpu_time_ms << " ms" << std::endl;
    std::cout << "GPU执行时间: " << gpu_time_ms << " ms" << std::endl;
    std::cout << "加速比: " << speedup << "x" << std::endl;
    std::cout << "CPU吞吐量: " << cpu_throughput << " GB/s" << std::endl;
    std::cout << "GPU吞吐量: " << gpu_throughput << " GB/s" << std::endl;
}

// 打印卷积层信息
void printLayerInfo(int inputW, int inputH, int inputC, int kernelSize, int numKernels) {
    int outputW = inputW - kernelSize + 1;
    int outputH = inputH - kernelSize + 1;
    
    std::cout << "=== CNN卷积层配置 ===" << std::endl;
    std::cout << "输入: " << inputW << "×" << inputH << "×" << inputC << std::endl;
    std::cout << "卷积核: " << numKernels << "个 " << kernelSize << "×" << kernelSize << "×" << inputC << std::endl;
    std::cout << "输出: " << outputW << "×" << outputH << "×" << numKernels << std::endl;
    
    int totalParams = numKernels * inputC * kernelSize * kernelSize;
    int totalOperations = numKernels * outputW * outputH * inputC * kernelSize * kernelSize * 2;
    std::cout << "参数量: " << totalParams << std::endl;
    std::cout << "计算量: " << totalOperations / 1e6 << " MFLOPs" << std::endl;
}

int main() {
    // CNN卷积层参数（类似LeNet-5第一层）
    const int inputWidth = 28;    // MNIST图像宽度
    const int inputHeight = 28;   // MNIST图像高度  
    const int inputChannels = 1;  // 灰度图，单通道
    const int kernelSize = 3;     // 3x3卷积核
    const int numKernels = 6;     // 6个卷积核
    
    const int outputWidth = inputWidth - kernelSize + 1;
    const int outputHeight = inputHeight - kernelSize + 1;
    const int outputChannels = numKernels;
    
    const int inputSize = inputWidth * inputHeight * inputChannels;
    const int outputSize = outputWidth * outputHeight * numKernels;
    const int kernelSizeTotal = numKernels * inputChannels * kernelSize * kernelSize;
    
    // 打印层信息
    printLayerInfo(inputWidth, inputHeight, inputChannels, kernelSize, numKernels);
    
    // 分配主机内存
    std::vector<float> h_input(inputSize);
    std::vector<float> h_kernels(kernelSizeTotal);
    std::vector<float> h_output_gpu(outputSize);
    std::vector<float> h_output_cpu(outputSize);
    
    // 初始化输入数据（模拟MNIST数字图像）
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<float> dis(0.0f, 1.0f);
    
    for (int i = 0; i < inputSize; i++) {
        h_input[i] = dis(gen);
    }
    
    // 初始化卷积核
    initializeKernels(h_kernels.data(), numKernels, inputChannels, kernelSize);
    
    // CPU计算
    std::cout << "\n=== CPU计算 ===" << std::endl;
    auto cpu_start = std::chrono::high_resolution_clock::now();
    
    multiKernelConv2D_CPU(h_input.data(), h_output_cpu.data(),
                         inputWidth, inputHeight, inputChannels,
                         h_kernels.data(), kernelSize, numKernels);
    
    auto cpu_end = std::chrono::high_resolution_clock::now();
    auto cpu_duration = std::chrono::duration_cast<std::chrono::microseconds>(cpu_end - cpu_start);
    float cpu_time_ms = cpu_duration.count() / 1000.0f;
    std::cout << "CPU计算完成，耗时: " << cpu_time_ms << " ms" << std::endl;
    
    // GPU部分开始 ==========================================
    std::cout << "\n=== GPU计算 ===" << std::endl;
    
    // TODO: 分配设备内存
    float *d_input, *d_kernels, *d_output;
    CUDA_CHECK(cudaMalloc(&d_input, inputSize * sizeof(float)));
    CUDA_CHECK(cudaMalloc(&d_kernels, kernelSizeTotal * sizeof(float)));
    CUDA_CHECK(cudaMalloc(&d_output, outputSize * sizeof(float)));
    // TODO: 拷贝数据到设备
    CUDA_CHECK(cudaMemcpy(d_input, h_input.data(), inputSize * sizeof(float), cudaMemcpyHostToDevice));
    CUDA_CHECK(cudaMemcpy(d_kernels, h_kernels.data(), kernelSizeTotal * sizeof(float), cudaMemcpyHostToDevice));
    // TODO: 设置网格和块维度（三维网格）
    dim3 blockDim(4,4,2);
    dim3 gridDim(
        (outputWidth + blockDim.x - 1) / blockDim.x,
        (outputHeight + blockDim.y - 1) / blockDim.y,
        (numKernels + blockDim.z - 1) / blockDim.z
    );
    std::cout << "网格维度: (" << gridDim.x << ", " << gridDim.y << ", " << gridDim.z << ")" << std::endl;
    std::cout << "块维度: (" << blockDim.x << ", " << blockDim.y << ", " << blockDim.z << ")" << std::endl;
    std::cout << "总线程数: " << gridDim.x * gridDim.y * gridDim.z * blockDim.x * blockDim.y * blockDim.z << std::endl;
    
    // TODO: 执行核函数
    auto gpu_start = std::chrono::high_resolution_clock::now();
    multiKernelConv2D<<<gridDim, blockDim>>>(d_input, d_output,
                                            inputWidth, inputHeight, inputChannels,
                                            d_kernels, kernelSize, numKernels,
                                            outputWidth, outputHeight, outputChannels);
    CUDA_CHECK(cudaDeviceSynchronize());
    auto gpu_end = std::chrono::high_resolution_clock::now();
    auto gpu_duration = std::chrono::duration_cast<std::chrono::microseconds>(gpu_end - gpu_start);
    float gpu_time_ms = gpu_duration.count() / 1000.0f;
    std::cout << "GPU计算完成，耗时: " << gpu_time_ms << " ms" << std::endl;
    
    // TODO: 拷贝结果回主机
    CUDA_CHECK(cudaMemcpy(h_output_gpu.data(), d_output, outputSize * sizeof(float), cudaMemcpyDeviceToHost));
    // TODO: 释放设备内存
    CUDA_CHECK(cudaFree(d_input));
    CUDA_CHECK(cudaFree(d_kernels));
    CUDA_CHECK(cudaFree(d_output));
    // GPU部分结束 ==========================================
    
    // 结果验证
    std::cout << "\n=== 结果验证 ===" << std::endl;
    bool isCorrect = verifyResults(h_output_gpu.data(), h_output_cpu.data(), outputSize, 1e-4f);
    
    if (isCorrect) {
        std::cout << "✓ 验证通过：GPU和CPU结果一致" << std::endl;
    } else {
        std::cout << "✗ 验证失败：GPU和CPU结果不一致" << std::endl;
        float maxError = calculateMaxError(h_output_gpu.data(), h_output_cpu.data(), outputSize);
        std::cout << "最大绝对误差: " << maxError << std::endl;
    }
    
    // 性能统计
    std::cout << "\n=== 性能统计 ===" << std::endl;
    printPerformanceStats(gpu_time_ms, cpu_time_ms, outputSize);
    
    // 显示部分输出特征图
    std::cout << "\n=== 输出特征图样例 ===" << std::endl;
    for (int k = 0; k < std::min(2, numKernels); k++) {
        std::cout << "卷积核 " << k << " 的输出特征图前5个值:" << std::endl;
        for (int i = 0; i < std::min(5, outputWidth * outputHeight); i++) {
            int idx = k * outputWidth * outputHeight + i;
            printf("  [%d] GPU: %8.4f, CPU: %8.4f\n", i, h_output_gpu[idx], h_output_cpu[idx]);
        }
        std::cout << std::endl;
    }
    
    std::cout << "程序执行完成！" << std::endl;
    
    // 查询设备限制
    cudaDeviceProp prop;
    cudaGetDeviceProperties(&prop, 0);

    int max_threads_per_block = prop.maxThreadsPerBlock;  // 通常1024
    int max_block_dims[3] = {prop.maxThreadsDim[0], prop.maxThreadsDim[1], prop.maxThreadsDim[2]};
    int max_grid_dims[3] = {prop.maxGridSize[0], prop.maxGridSize[1], prop.maxGridSize[2]};
    std::cout << "\n=== 设备限制信息 ===" << std::endl;
    std::cout << "每块最大线程数: " << max_threads_per_block << std::endl;
    std::cout << "块维度最大值: (" << max_block_dims[0] << ", " 
              << max_block_dims[1] << ", " << max_block_dims[2] << ")" << std::endl;
    std::cout << "网格维度最大值: (" << max_grid_dims[0] << ", " 
              << max_grid_dims[1] << ", " << max_grid_dims[2] << ")" << std::endl;
    return 0;
}
```
