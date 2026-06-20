#include <Arduino.h>
#include <U8g2lib.h>
#include <SPI.h>

U8G2_LS011B7DH03_160X68_F_4W_HW_SPI u8g2(U8G2_R0, A0, U8X8_PIN_NONE, U8X8_PIN_NONE);

void setup(void){
  u8g2.begin();
}
 void loop(void){
  u8g2.clearBuffer();
  u8g2.setFont(u8g2_font_ncenB08_tr);
  u8g2.drawStr(0,10,"Hello World!");
  u8g2.sendBuffer();
  delay(1000);
}