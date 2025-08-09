#define UART_BASE 0x10000000
#define UART_TX   2
void _start() {
  *(volatile char *)(UART_BASE + UART_TX) = 'A';
  *(volatile char *)(UART_BASE + UART_TX) = '\n';
  asm volatile("ebreak" : :);
}