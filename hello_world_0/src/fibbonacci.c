/*
 * Clayton Ramstedt and Marshall Garey
 *
 * Prints a fibbonacci sequence via UART
 */

#include <stdio.h>
#include "platform.h"

int main(){
	xil_printf("Starting Fibbonacci\n");
	int secondVal = 0;
	int firstVal = 1;
	int temp = 0;
	xil_printf("%d\n",temp);
	xil_printf("%d\n",firstVal);
	while(firstVal <= 100){
		temp = firstVal + secondVal;
		secondVal = firstVal;
		firstVal = temp;
		xil_printf("%d\n",temp);
	}
}

