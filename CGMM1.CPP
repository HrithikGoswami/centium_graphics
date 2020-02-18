/* This program prints a scenery */
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
void tree(int t,int q)
{
int r=15;
r=15;
setfillstyle(6,BROWN);
rectangle(150+t,390+q,170+t,340+q);
floodfill(151+t,342+q,2);
setfillstyle(11,GREEN);
fillellipse(142+t,347+q,r,r);
fillellipse(160+t,330+q,r,r);
fillellipse(175+t,340+q,r,r);
fillellipse(180+t,350+q,r,r);
}
void main()
{
int gd=DETECT,gm;
int i,j,k,t,q,r;
float x,y;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
setcolor(2);
rectangle(0,0,getmaxx(),getmaxy());
for(i=0;i<getmaxx();i+=120)
{
line(i,250,i+60,170);
line(i+60,170,i+120,250);
}

t=10;
line(0,400,getmaxx(),350);
B:line(50+t,280,50+t,320);
line(50+t,320,60+t,320);
line(60+t,320,70+t,320);
line(70+t,320,80+t,320);
line(130+t,320,80+t,320);
line(70+t,320,70+t,300);
line(60+t,300,60+t,320);
line(70+t,300,60+t,300);
line(80+t,320,80+t,280);
line(130+t,320,130+t,280);
line(80+t,280,130+t,280);
line(50+t,280,80+t,280);
line(50+t,280,65+t,260);
line(65+t,260,80+t,280);
line(65+t,260,110+t,260);
line(130+t,280,110+t,260);
setfillstyle(SOLID_FILL,DARKGRAY);
floodfill(51+t,282,2);
setfillstyle(SOLID_FILL,RED);
floodfill(61+t,302,2);
setfillstyle(SOLID_FILL,YELLOW);
floodfill(81+t,282,2);
setfillstyle(SOLID_FILL,MAGENTA);
floodfill(66+t,270,2);
setfillstyle(4,BROWN);
floodfill(100+t,270,2);
if(t==10)
{
t=320;
goto B;
}

tree(0,-10);
tree(100,-20);
tree(30,-100);
tree(350,-60);
tree(160,-50);
//circle();

setfillstyle(SOLID_FILL,12);
fillellipse(150,80,35,35);

setfillstyle(2,LIGHTBLUE);
floodfill(10,10,2);

setfillstyle(SOLID_FILL,CYAN);
floodfill(1,getmaxy()-1,2);

setfillstyle(SOLID_FILL,LIGHTGREEN);
floodfill(49,270,2);

//x=150;
//y=80;
for(i=36;i<80;i++)
for(j=0;j<=360;j+=10)
{
x=150+i*cos(((float)j*3.14)/180);
y=80+i*sin(((float)j*3.14)/180);
putpixel(x,y,LIGHTRED);
}

getch();
}
