#ifndef WS2812_H_
#define WS2812_H_
//____________________________________________WS2812_H_MY_LIB_____________________________
#include <stdint.h>
//__________CONFIG_BEGIN__________

#define MY_H_TIMER htim2   //вибраний таймер
#define LED_AMOUNT 6 //кількість використовуваних діодів
#define MY_TIM_CHANNEL  TIM_CHANNEL_2 // вибраний канал
#define BRIGHTNESS 1  //яскравість від 0 до 255

//__________CONFIG_END__________//

//__________MACROS__________//

#define IsBitSet(reg, bit) ((reg & (1<<bit)) != 0) // попертає true або false
//Працює в залежності від отриманого uint8 числа і  біту який перевіряється



//____________________Static_Variables_________________________//

#define HI 65 // '---_'  // високий рівень
#define LOW 26  // '-___'  // низький рівень 26-27
#define BIT_AMOUNT 24  // кількість бітів в одному LED
#define DELAY 42 // затримка 50 мкс  must have !
#define DMA_BUF_SIZE  (DELAY + (LED_AMOUNT * BIT_AMOUNT))  // затримка для обнулення +  кількість світлодіодів * 24 біти для кожного = довжина масиву
#define COLORS 4
#define COLOR_SECTOR 255 / COLORS  //sector  for color
#define DIODE_SECTOR COLOR_SECTOR / LED_AMOUNT
#define TOTAL_DIVISION 220 / (COLORS * LED_AMOUNT)

//___________________________FUNCTIONS_DACLARATIONS_____________________//

void ws2812_init();
void ws2812_START ();
void ws2812_STOP ();
void ws2812_OFF();
void ws2812_CLR();
void ws2812_running_diod(uint8_t Color_R, uint8_t Color_G, uint8_t Color_B, uint16_t Delay);
uint8_t ws2812_color_increase(uint8_t Color_R, uint8_t Color_G, uint8_t Color_B, unsigned short SW_ON_LED_AMOUNT);
uint8_t ws2812_pixel_rgb_write(uint8_t Rpixel , uint8_t Gpixel, uint8_t Bpixel, uint16_t posX);
uint8_t ws2812_INDICATOR(const uint8_t data_0_255);
#endif /* WS2812_H_ */



























