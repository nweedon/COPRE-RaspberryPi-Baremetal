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
* types.h
* By:
*  Niall Frederick Weedon (nweedon)
*  Tim Stanley (Spike71m)
****************************************************/

#pragma once

#define NULL 0

extern void PutUInt32(unsigned int, unsigned int);
extern unsigned int GetUInt32(unsigned int);

typedef unsigned int u32;
typedef void (*keyBinding)(void);

typedef struct framebuffer_init_t {
	u32 width;
	u32 height;
	u32 virtWidth;
	u32 virtHeight;
	u32 pitch;
	u32 bitDepth;
	u32 xOffset;
	u32 yOffset;
	u32 ptr;
	u32 size;
} framebuffer_init_t;