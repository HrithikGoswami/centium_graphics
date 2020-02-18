#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<graphics.h>

void translate();
void scale();
void rotate();
int x1, x2, x3, y1, y2, y3;

void main()
{
    int gd=DETECT, gm;
    int ch;
    initgraph(&gd, &gm, "c:\\turboc3\\bgi");
    printf("OPERATIONS");
    printf("\n1.TRANSLATE\n2.SCALE\n3.ROTATE\n4.EXIT");
    while(1)
    {
	printf("\nEnter your choice:");
	scanf("%d", &ch);
	switch(ch)
	{
	    case 1:
		translate();
		break;
	    case 2:
		scale();
		break;
	    case 3:
		rotate();
		break;
	    case 4:
		exit(0);
		break;
	    default:
		printf("\nWRONG CHOICE");
	}
    }
    getch();
    closegraph();
}

void translate()
{
    int tx, ty;
    printf("Enter the co-ordinates of the triangle:");
    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
    printf("Enter the translation factors:");
    scanf("%d %d", &tx, &ty);
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);
    x1=x1+tx; x2=x2+tx; x3=x3+tx;
    y1=y1+ty; y2=y2+ty; y3=y3+ty;
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);
}

void scale()
{
    int sx, sy;
    printf("Enter the co-ordinates of the triangle:");
    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
    printf("Enter the scaling factors:");
    scanf("%d %d", &sx, &sy);
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);
    x1=x1*sx; x2=x2*sx; x3=x3*sx;
    y1=y1*sy; y2=y2*sy; y3=y3*sy;
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);
}

void rotate()
{
    int x, y;
    float angle;
    printf("Enter the x co-ordinates of the line:");
    scanf("%d %d", &x1, &x2);
    printf("Enter the y co-ordinates of the line:");
    scanf("%d %d", &y1, &y2);
    printf("Enter the angle:");
    scanf("%f", &angle);
    line(x1, y1, x2, y2);
    angle=angle*(3.14/180);
    x=(int)(x1+(x2-x1)*cos(angle)-(y2-y1)*sin(angle));
    y=(int)(y1+(x2-x1)*sin(angle)+(y2-y1)*cos(angle));
    line(x1, y1, x, y);
}
