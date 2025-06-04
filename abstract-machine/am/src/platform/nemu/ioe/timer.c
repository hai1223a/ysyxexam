#include <am.h>
#include <nemu.h>

void __am_timer_init() {
  outl(RTC_ADDR, 0);        
  outl(RTC_ADDR + 0x4, 0);
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  uint64_t us_low = (uint64_t)inl(RTC_ADDR);
  uint64_t us_high = (uint64_t)inl(RTC_ADDR + 0x4) << 32;
  uptime->us = us_low | us_high;
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
