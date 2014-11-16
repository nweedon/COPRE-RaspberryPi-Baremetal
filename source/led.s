/*
The MIT License (MIT)

Copyright (c) 2014 Niall Frederick Weedon, Timothy Stanley

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/

/****************************************************
* led.s
* By:
*  Niall Frederick Weedon (nweedon)
*  Tim Stanley (Spike71m)
****************************************************/
.section .led
/*
* Turn the OK LED on
*/
.globl OkLedOn
OkLedOn:
	push { r4 - r5 }
	ldr r5,=0x20200000
	/* 
	* Set the 16th bit of r1. The 16th bit is
	* for the 16th pin (the ACT/OK LED)
	*/
	mov r4,#1
	lsl r4,#16

	/* 
	* Low: 40-48
	* High: 28-36
	* Set GPIO 16 to low, causing the LED to turn on.
	*/
	str r4,[r5,#40]
	pop { r4 - r5 }
	bx lr

/*
* Turn the OK LED off
*/
.globl OkLedOff
OkLedOff:
	push { r4 }
	ldr r5,=0x20200000
	mov r4,#1
	lsl r4,#16
	str r4,[r5, #28]
	pop { r4 }
	bx lr
