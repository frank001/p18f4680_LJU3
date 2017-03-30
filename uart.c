#include <p18F4680.h>
#include <usart.h>


void initUART() {
    // = 0;
    TRISCbits.TRISC6 = 0;   //output - TX
    TRISCbits.TRISC7 = 1;   //input - RX
    OpenUSART (USART_TX_INT_OFF &
             USART_RX_INT_OFF &
             USART_ASYNCH_MODE &
             USART_EIGHT_BIT &
             USART_CONT_RX &
             USART_BRGH_HIGH, 103); 
    /*
    while (1) {
        putcUSART('1');
        c = 0;
        c = getcUSART();
        Nop();
    } 
    */ 
    
}
