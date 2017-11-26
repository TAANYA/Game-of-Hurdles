#include<iostream>
#include<stdio.h>
#include<graphics.h>
#include<windows.h>
#include<math.h>
#include "shoot.h"
#include "game_rr.h"
#include "bounce.h"
#include "game_rhero.h"

using namespace std;
void buildmaxheap(int [],int n);
void max_heapify(int [] , int ,int );
int scr_heap[5]={0,0,0,0,0};
int main()
{
       int ch,gdriver=DETECT,gmode;
        initgraph(&gdriver, &gmode, "");
        int pg=0,i=0,m=5,n=5,k=0,l=-5,p=0,j=0,z;
        char a[10];

        POINT cursposition;
        int mx,my;
        int s = 0;
        PlaySound("Game_of_Thrones.wav", NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);
        while(1)
        {
            /*swapbuffers();
            pg=1-pg;*/
            cleardevice();
            settextstyle(1,HORIZ_DIR,4);
            setcolor(WHITE);
            outtextxy(70,80,"GAME OF HURDLES");

            j=j+m;
             setcolor(CYAN);

            line(2+j,70,2+j,50);
            line(2+j,50,12+j,50);
            line(12+j,50,22+j,30);
            line(22+j,30,32+j,30);
            line(32+j,30,42+j,50);
            line(42+j,50,52+j,50);
            line(52+j,50,52+j,70);

            circle(35+j,70,5);
            circle(20+j,70,5);

            line(2+j,70,15+j,70);
            line(40+j,70,52+j,70);
            line(25+j,70,30+j,70);

            setcolor(RED);
            for(z=0;z<20;z++)circle(600,30+k,20-z);
            k=k+n;
            if(k>440)
                {
                    l=5;
                    n=-5;
                }
            else if(k==25)
                {
                    l=-5;
                    n=5;
                }
            drawchar(560-i,440,560-i,450,560-i,430,4,1);
            i=i+m;
            if(i==560)
                m=-5 ;
            else if(i==0)
                m=5;
                setcolor(CYAN);
            setfillstyle(4,CYAN);
            for(z=0;z<10;z++)bar(20+z,460-z+p,50+z,510-z+p);
            p=p+l;
            //line(70,120,560,120);
            setcolor(YELLOW);
            rectangle(70,150,550,400);
            settextstyle(4,HORIZ_DIR,1);
            outtextxy(220,180,"NEW GAME");
            outtextxy(220,220,"LEVEL  1");
            outtextxy(220,260,"LEVEL  2");
            outtextxy(220,300,"LEVEL  3");
            outtextxy(220,340,"LEVEL  4");

            GetCursorPos(&cursposition);
            mx=cursposition.x;
            my=cursposition.y;

            if(GetAsyncKeyState(VK_LBUTTON)&&mx>180&&mx<400&&my>180&&my<220)
            {
                break;
            }

            else if(GetAsyncKeyState(VK_LBUTTON)&&mx>180&&mx<400&&my>220&&my<260)
            {
                s=game_rr(s);
                gameover_shoot();
                return 0;
            }

            else if(GetAsyncKeyState(VK_LBUTTON)&&mx>180&&mx<400&&my>260&&my<300)
             {
                 blank();
                s=shoot();
                gameover_shoot();
                return 0;
            }
           else if(GetAsyncKeyState(VK_LBUTTON)&&mx>180&&mx<400&&my>300&&my<340)
             {
                s=bounce(s);
                gameover_shoot();
                return 0;
            }


            else if(GetAsyncKeyState(VK_LBUTTON)&&mx>180&&mx<400&&my>340&&my<380)
             {
                s=game_rhero(s);
                gameover_shoot();
                return 0;
            }
            delay(100);
        }
        int t=10;
        char count_down[2];
        cleardevice();
        for(i=3;i>0;i--)
        {
            setcolor(WHITE);
            sprintf(a,"%d",i);
            settextstyle(4,HORIZ_DIR,10);
            outtextxy(250,180,a);
            delay(1000);
        }
        scr_heap[0]=0;
        blank();
        s=shoot();
        scr_heap[1]=s;
        s=game_rr(s);
        scr_heap[2]=s-scr_heap[1];
        s=game_rhero(s);
        scr_heap[3]=s-scr_heap[2]-scr_heap[1];
        s=bounce(s);
        scr_heap[4]=s-scr_heap[3]-scr_heap[2]-scr_heap[1];


        for(i=0;i<5;i++)
            cout<< "score of level - "<< i <<" => "<<scr_heap[i]<<endl<<endl;
        buildmaxheap(scr_heap,5);
        cout<<endl<<endl<<"SCORES:"<<endl<<endl;
        cout<<"     "<<scr_heap[0]<<endl<<endl;
        cout<<"   "<<scr_heap[1]<<"  "<<scr_heap[2]<<endl<<endl;
        cout<<" "<<scr_heap[3]<<"  "<<scr_heap[4]<<endl<<endl;

        gameover_shoot();

    return 0;
}

void buildmaxheap(int a[],int n)
{
    int i;
    for(i=n/2-1;i>=0;i--)
    {
        max_heapify(a,i,n);
    }
}
void max_heapify(int a[] , int i,int n)
{
    int t,lc,rc,larg;
    lc=2*i;
    rc=2*i+1;
    if(lc>n||rc>n)
        return;
    if(a[i]<a[lc]&&i<n)
        larg=lc;
    else
        larg=i;
    if(a[larg]<a[rc]&&rc<n)
        larg=rc;
    if(larg!=i)
    {
        t=a[i];
        a[i]=a[larg];
        a[larg]=t;
        max_heapify(a,larg,n);
    }
    return ;

}
