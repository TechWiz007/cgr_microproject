#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>
#include <stdlib.h>

void main() {
    int gd = DETECT, gm;
    int i, x, y;
    initgraph(&gd, &gm, "C:/TURBOC3/BGI");

    setbkcolor(BLUE);	// Set background color to blue

    while (!kbhit()) {	// Color 500 random pixels to white
    for(i=0; i<=500; i++) {
	x=rand()%getmaxx();
	y=rand()%getmaxy();
	putpixel(x,y,15);
    }
    delay(500);
    cleardevice();
    }

getch();
closegraph();
}
