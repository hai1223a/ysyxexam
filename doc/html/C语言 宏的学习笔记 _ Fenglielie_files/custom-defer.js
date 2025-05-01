// 获取指定父元素
const parentElement = document.querySelector("#ghbdages");

// 在指定的父元素下查找所有的 img 元素
const imagesInParent = parentElement.querySelectorAll('img');

// 定义要替换的图片 URL 列表
const imageSources = [
  '/image/foot/Frame-Hexo-blue.svg',
  '/image/foot/Theme-Butterfly-6513df.svg',
  '/image/foot/Source-Github-d021d6.svg',
  '/image/foot/Copyright-BY--NC--SA4.svg'
];

// 遍历父元素下的所有 img 元素并逐个替换
imagesInParent.forEach((img, index) => {
  const newImg = document.createElement('img');
  newImg.src = imageSources[index]; // 使用指定的图片 URL
  newImg.alt = img.alt;

  img.parentNode.replaceChild(newImg, img);
});
