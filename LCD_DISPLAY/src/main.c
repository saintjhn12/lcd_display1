#include "display.h"
int main(){
DDRC = 0xFF;
DDRD = 0XFF;
_delay_ms(20);
lcd_cmd(0x02);
lcd_cmd(0x28);
lcd_cmd(0x0f);
lcd_cmd(0x01);
_delay_ms(2);
lcd_cmd(0x06);
while (1)
{
  lcd_cmd(0x08);
  lcd_print("welcome to");
  _delay_ms(10);
  lcd_cmd(0x0C);
  lcd_print("SAIN + JHN LIMTED");
  _delay_ms(10);
  lcd_cmd(0x01);
  _delay_ms(2);
}






}