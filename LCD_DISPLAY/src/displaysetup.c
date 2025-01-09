
#include "display.h"
void lcd_cmd(unsigned char cmd){
    dataport = (cmd>>4);
    ctr_port &= (~(1<<rw));
    ctr_port &= (~(1<<rs));
    ctr_port |=(1<<en);
    _delay_ms(1);
    ctr_port &= (~(1<<en));
    dataport =(cmd & 0x0f);
    ctr_port |=(1<<en);
    _delay_ms(1);
    ctr_port &= (~(1<<en));
    _delay_ms(10);
}
void lcd_data(unsigned char data){
    dataport =(data>>4);
    ctr_port |=(1<<rs);
    ctr_port |=(1<<en);
    _delay_ms(1);
    ctr_port &= (~(1<<en));
    dataport =(data & 0x0f);
    ctr_port |=(1<<en);
    _delay_ms(1);
    ctr_port &= (~(1<<en));
    _delay_ms(15);
}
void lcd_print(char *str){
    while (*str)
    {
        lcd_data(*str++);
    }
    
}