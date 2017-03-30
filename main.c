/* 
 * File:   main.c
 * Author: FZwerver
 *
 * Created on 30 maart 2017, 13:13
 */
#include <p18F4680.h>
#include <stdio.h>
#include <stdlib.h>
#include <delays.h>
#include "config.h"



/*
 * 
 */
void main() {
    OSCCON = 0b01110000;   //8MHz

    
    TRISAbits.TRISA0 = 0;  //TRISA0 output
    
    while (1) {
        LATAbits.LATA0 = 1;
        Delay10KTCYx(100);
        LATAbits.LATA0 = 0;
        Delay10KTCYx(100);
    }

}

