/* This program implements a line using Bresenham Line Algorithm */
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
    int gd=DETECT, gm;
    int x, y, x1, x2, y1, y2, delx, dely, p;
    initgraph(&gd, &gm, "c:\\turboc3\\bgi");
    printf("Enter the values of x co-ordinates x1 and x2:");
    scanf("%d %d", &x1, &x2);
    printf("Enter the values of y co-ordinates y1 and y2:");
    scanf("%d %d", &y1, &y2);
    x=x1;
    y=y1;
    delx=x2-x1;
    dely=y2-y1;
    p=(2*dely)-delx;
    while(x<=x2)
    {
	putpixel(x, y, YELLOW);
	x++;
	y++;
	if(p<0)
	    p=p+(2*dely);
	else
	    p=p+(2*(dely-delx));
    }
    getch();
    closegraph();
}
