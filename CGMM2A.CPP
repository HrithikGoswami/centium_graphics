/* This program implements a line using DDA line algorithm */
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
    int gd=DETECT, gm;
    int x1, x2, y1, y2, delx, dely, i=1;
    float x, y, dx, dy, len;
    initgraph(&gd, &gm, "c:\\turboc3\\bgi");
    printf("Enter the values of x1 and x2:");
    scanf("%d %d", &x1, &x2);
    printf("\nEnter the values of y1 and y2:");
    scanf("%d %d", &y1, &y2);
    delx=x2-x1;
    dely=y2-y1;
    if(delx>dely)
	len=delx;
    else
	len=dely;
    dx=delx/len;
    dy=dely/len;
    x=x1+(0.5*dx);
    y=y1+(0.5*dy);
    while(i<=len)
    {
	putpixel(x, y, YELLOW);
	x=x+dx;
	y=y+dy;
	i++;
    }
    getch();
    closegraph();
}
