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
* graphics.h
* By:
*  Niall Frederick Weedon (nweedon)
*  Tim Stanley (Spike71m)
****************************************************/

extern unsigned int InitGraphics(unsigned int, unsigned int, unsigned int);
extern void UpdateGraphics(void);
extern void SwapBuffers(void);
extern void RenderPartImage(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned, unsigned int, unsigned int, unsigned int*);
extern void RenderImage(unsigned int, unsigned, unsigned int, unsigned int, unsigned int*);
extern void RenderFont(char *, unsigned int, unsigned int);