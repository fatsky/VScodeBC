#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
#include"Itype.h"
#include<dos.h>
#include<conio.h>
#include"Imouse.h"

void bgice(void);
void outice(void);
void inice(void);
int main()
{
    IclickStackNode* top = (IclickStackNode*)malloc(sizeof(IclickStackNode));
    int Keystate,MouseExist,MouseButton,MouseX,MouseY;
    int up[16][16],down[16][16],mouse_draw[16][16],mouse_save[16][16];
    int gd=DETECT,gm,i;
    
    IclickEvent ice[3]={{0,0,640,480,bgice},{100,100,500,500,outice},{200,200,300,300,inice}};

    initgraph(&gd,&gm,"c:\\Borlandc\\bgi");
    MouseMath(up,down,mouse_draw);
    MouseSetXY(100,100);
    MouseOn(MouseX,MouseY,mouse_draw,mouse_save);


    top->next=NULL;
    for(i=0;i<3;i++) IclickStackPush(top,ice[i]);
    rectangle(100,100,500,500);
    setcolor(BLUE);
    floodfill(250,250,0);
    rectangle(200,200,300,300);
    setcolor(RED);
    floodfill(250,250,0);
    while(!kbhit())
    {
        if(MouseStatus(&MouseX,&MouseY,mouse_draw,mouse_save)==1)
        {
            MouseOff(&MouseX,&MouseY,mouse_draw,mouse_save);
            MouseGetXY(&MouseX,&MouseY);
            MouseOn(MouseX,MouseY,mouse_draw,mouse_save);
            IclickStackActive(top,MouseX,MouseY);
        }
    }
    return 0;
}
void bgice(void)
{
    outtextxy(100,100,"bg is clicked");
}
void outice(void)
{
    outtextxy(200,200,"outdiv is clicked");
}
void inice(void)
{
    outtextxy(300,300,"indiv is clicked");
}