#include <avr/io.h>
#include <util/delay.h>
#define SET_H_
#define SET_H_
#define ctr_port PORTC
#define dataport PORTD
#define rs 0
#define en 1
#define rw 2


void lcd_cmd(unsigned char cmd);
void lcd_data (unsigned char data);
void lcd_print (char *str);
