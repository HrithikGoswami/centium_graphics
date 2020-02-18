#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
    int gd=DETECT, gm;
    int xc, yc, r, p, x, y;
    initgraph(&gd, &gm, "c:\\turboc3\\bgi");
    printf("Enter the center co-ordinates of the circle:");
    scanf("%d %d", &xc, &yc);
    printf("Enter the radius:");
    scanf("%d", &r);
    x=0;
    y=r;
    p=1-r;
    for(x=0; x<y; x++)
    {
	if(p<0)
	    p=p+(2*x)+1;
	else
	{
	    y=y-1;
	    p=p+(2*(x-y))+2;
	}
	putpixel(xc+x, yc+y, WHITE);
	putpixel(xc-x, yc+y, WHITE);
	putpixel(xc+x, yc-y, WHITE);
	putpixel(xc-x, yc-y, WHITE);
	putpixel(xc+y, yc+x, WHITE);
	putpixel(xc-y, yc+x, WHITE);
	putpixel(xc+y, yc-x, WHITE);
	putpixel(xc-y, yc-x, WHITE);
    }
    getch();
    closegraph();
}