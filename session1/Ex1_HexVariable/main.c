/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ntnam
 *
 * Created on September 27, 2017, 4:36 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(){ 
 unsigned char ch;
printf ("hex <=ff: ");
scanf ("%x", &ch);
printf ("%hhx ^ 0x08 = %02x \n ", ch, ch ^ 0x08);
return 0;
}

