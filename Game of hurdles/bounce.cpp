
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<iostream>

using namespace std;

int partb(int);
int gameover_shoot();
int bounce(int);
int check1(int, int, int, int, int, int);

      int ltx=790,lty=360,brx=800,bry=380;
      int ltx1=640,lty1=360,brx1=650,bry1=380;
      int ltx2=1400,lty2=360,brx2=1410,bry2=380;
      int flag_jump=0,tc=0;

int bounce(int score1)
 {
     int time=0;
    int x=10, y=375,r=5,pg=0;
    char s[20];
    while(1)
    {
        swapbuffers();
        pg=1-pg;
        cleardevice();
        setcolor(GREEN);
        setfillstyle(1,GREEN);
        sprintf(s,"SCORE: %d",score1);
        outtextxy(410,20,s);
        time++;
        if(time==20000)
            return score1;
        setcolor(YELLOW);
        line(0,380,640,380);
        line(0,381,640,381);
        line(0,382,640,382);
        line(0,383,640,383);

       circle(x,y,r);
       setfillstyle(1,YELLOW);
       floodfill(x,y,YELLOW);

        if(GetAsyncKeyState(VK_SPACE))
            {
                flag_jump=1;
            }
            if(flag_jump==1)
            {
                 if(y>340&&tc==0)
                {
                     y=y-30;
                   /* x=x+5;
                    y=y-5;*/

                }

            else
            {
                 tc=1;
               /*  x=x+5;
                 y=y+5;*/

                y=y+30;

            }
         }
         if(y==375)
            {
                tc=0;
                flag_jump=0;
            }

         if(GetAsyncKeyState(VK_RIGHT))
               {
                 x=x+10;
               }

        if(GetAsyncKeyState(VK_LEFT))
                {
                   x=x-10;
                }

        setcolor(RED);
        setfillstyle(1,RED);

        //ltx1=640,lty1=360,brx1=650,bry1=380

        bar(ltx1,lty1,brx1,bry1);
        bar(brx1,bry1-30,brx1+10,bry1);  //obstacle 1:combination of 2 bar

            if(check1(x,y,ltx1,lty1,brx1,bry1))//1.a
            {
                        settextstyle(BOLD_FONT,HORIZ_DIR,WHITE);
                        outtextxy(300,100,"GAME OVER");
                        //delay(2000);
                        return score1;
                // gameover_shoot();
            }

        ltx1=ltx1-10;
        brx1=brx1-10;

         // ltx=790,lty=360,brx=800,bry=380,


            bar(ltx,lty,brx,bry);    //obstacle 2
            bar(ltx+150,lty-5,brx+150,bry);//obstacle 3
            bar(ltx+300,lty-15,brx+300,bry);//obstacle 4
            bar(ltx+450,lty-5,brx+450,bry);//obstacle 5

            ltx=ltx-10;
            brx=brx-10;


             // int ltx2=1400,lty2=360,brx2=1410,bry2=380;

            bar(ltx2,lty2,brx2,bry2);//obstacle 6
            bar(ltx2+150,lty2+5,ltx2+160,bry2);//obstacle 7
            bar(ltx2+300,lty2-5,ltx2+310,bry2);//obstacle 8
            bar(ltx2+450,lty2-10,ltx2+460,bry2);//obstacle 9
            bar(ltx2+600,lty2-5,ltx2+610,bry2);//obstacle10
            bar(ltx2+750,lty2-10,ltx2+760,bry2);//obstacle 11
            bar(ltx2+900,lty2-5,ltx2+910,bry2);
            bar(ltx2+910,bry2-20,ltx2+920,bry2);//obstacle 12 : combination of 2 rectangles
            bar(ltx2+1050,lty2-5,ltx2+1060,bry2);//obstacle 13
            bar(ltx2+1200,lty2-5,ltx2+1210,bry2);//obstacle 14
            bar(ltx2+1350,lty2-10,ltx2+1360,bry2);
            bar(ltx2+1360,lty2-15,ltx2+1370,bry2);//obstacle 15 : combination of 2 rectangles

            ltx2=ltx2-10;
            brx2=brx2-10;

            if(check1(x,y,brx1,bry1-30,brx1+10,bry1))//1.b
            {
                        settextstyle(BOLD_FONT,HORIZ_DIR,WHITE);
                        outtextxy(300,100,"GAME OVER");
                        return score1;
                // gameover_shoot();
            }

           if(check1(x,y,ltx,lty,brx,bry))//2
            {
                        settextstyle(BOLD_FONT,HORIZ_DIR,WHITE);
                        outtextxy(300,100,"GAME OVER");
                        return score1;
                // gameover_shoot();
            }

            if(check1(x,y,ltx+150,lty-5,brx+150,bry))//3
            {
                        settextstyle(BOLD_FONT,HORIZ_DIR,WHITE);
                        outtextxy(300,100,"GAME OVER");
                        return score1;
                // gameover_shoot();
            }

            if(check1(x,y,ltx+300,lty-15,brx+300,bry))//4
            {
                        settextstyle(BOLD_FONT,HORIZ_DIR,WHITE);
                        outtextxy(300,100,"GAME OVER");
                        return score1;
                // gameover_shoot();
            }

            if(check1(x,y,ltx+450,lty-5,brx+450,bry))//5
            {
                        settextstyle(BOLD_FONT,HORIZ_DIR,WHITE);
                        outtextxy(300,100,"GAME OVER");
                        return score1;
                // gameover_shoot();
            }

            if(check1(x,y,ltx2,lty2,brx2,bry2))//6
            {
                        settextstyle(BOLD_FONT,HORIZ_DIR,WHITE);
                        outtextxy(300,100,"GAME OVER");
                        return score1;
                // gameover_shoot();
            }

            if(check1(x,y,ltx2+150,lty2+5,ltx2+160,bry2))//7
            {
                        settextstyle(BOLD_FONT,HORIZ_DIR,WHITE);
                        outtextxy(300,100,"GAME OVER");
                        return score1;
                // gameover_shoot();
            }

            if(check1(x,y,ltx2+300,lty2-5,ltx2+310,bry2))//8
            {
                        settextstyle(BOLD_FONT,HORIZ_DIR,WHITE);
                        outtextxy(300,100,"GAME OVER");
                        return score1;
                // gameover_shoot();
            }

            if(check1(x,y,ltx2+450,lty2-10,ltx2+460,bry2))//9
            {
                        settextstyle(BOLD_FONT,HORIZ_DIR,WHITE);
                        outtextxy(300,100,"GAME OVER");
                        return score1;
                // gameover_shoot();
            }

            if(check1(x,y,ltx2+600,lty2-5,ltx2+610,bry2))//10
            {
                        settextstyle(BOLD_FONT,HORIZ_DIR,WHITE);
                        outtextxy(300,100,"GAME OVER");
                        return score1;
                // gameover_shoot();
            }

            if(check1(x,y,ltx2+750,lty2-10,ltx2+760,bry2))//11
            {
                        settextstyle(BOLD_FONT,HORIZ_DIR,WHITE);
                        outtextxy(300,100,"GAME OVER");
                        return score1;
                // gameover_shoot();
            }

            if(check1(x,y,ltx2+900,lty2-5,ltx2+910,bry2))//12.a
            {
                        settextstyle(BOLD_FONT,HORIZ_DIR,WHITE);
                        outtextxy(300,100,"GAME OVER");
                        return score1;
                // gameover_shoot();
            }

            if(check1(x,y,ltx2+910,bry2-20,ltx2+920,bry2))//12.b
            {
                        settextstyle(BOLD_FONT,HORIZ_DIR,WHITE);
                        outtextxy(300,100,"GAME OVER");
                        return score1;
                // gameover_shoot();
            }

            if(check1(x,y,ltx2+1050,lty2-5,ltx2+1060,bry2))//13
            {
                        settextstyle(BOLD_FONT,HORIZ_DIR,WHITE);
                        outtextxy(300,100,"GAME OVER");
                        return score1;
                // gameover_shoot();
            }

            if(check1(x,y,ltx2+1200,lty2-5,ltx2+1210,bry2))//14
            {
                        settextstyle(BOLD_FONT,HORIZ_DIR,WHITE);
                        outtextxy(300,100,"GAME OVER");
                        return score1;
                // gameover_shoot();
            }

            if(check1(x,y,ltx2+1350,lty2-10,ltx2+1360,bry2))//15.a
            {
                        settextstyle(BOLD_FONT,HORIZ_DIR,WHITE);
                        outtextxy(300,100,"GAME OVER");
                        return score1;
                // gameover_shoot();
            }

           if(check1(x,y,ltx2+1360,lty2-15,ltx2+1370,bry2))//15.b
            {
                        settextstyle(BOLD_FONT,HORIZ_DIR,WHITE);
                        outtextxy(300,100,"GAME OVER");
                        return score1;
                // gameover_shoot();
            }


            if(brx<-2000)
            {
                ltx=790,lty=360,brx=800,bry=380,
                ltx1=640,lty1=360,brx1=650,bry1=380;
               ltx2=1400,lty2=360,brx2=1410,bry2=380;

               setcolor(BLUE);
               setfillstyle(1,BLUE);
               score1 = partb(score1);

            }
            score1+=5;
            delay(100);

    }
    getch();
    return score1 ;
 }

 int partb(int score1)
 {
    outtext("PART B:");
    delay(100);
 setcolor(CYAN);
 setfillstyle(1,CYAN);
        //ltx1=640,lty1=360,brx1=650,bry1=380

        bar(ltx1,lty1,brx1,bry1);
        bar(brx1,bry1-30,brx1+10,bry1);  //obstacle 1:combination of 2 bars

        ltx1=ltx1-45;
        brx1=brx1-45;

         // ltx=790,lty=360,brx=800,bry=380,

            bar(ltx,lty,brx,bry);    //obstacle 2
            bar(ltx+150,lty-5,brx+150,bry);//obstacle 3
            bar(ltx+300,lty-15,brx+300,bry);//obstacle 4
            bar(ltx+450,lty-5,brx+450,bry);//obstacle 5

            ltx=ltx-45;
            brx=brx-45;


             // int ltx2=1400,lty2=360,brx2=1410,bry2=380;

            bar(ltx2,lty2,brx2,bry2);//obstacle 6
            bar(ltx2+150,lty2+5,ltx2+160,bry2);//obstacle 7
            bar(ltx2+300,lty2-5,ltx2+310,bry2);//obstacle 8
            bar(ltx2+450,lty2-10,ltx2+460,bry2);//obstacle 9
            bar(ltx2+600,lty2-5,ltx2+610,bry2);//obstacle10
            bar(ltx2+750,lty2-10,ltx2+760,bry2);//obstacle 11

            bar(ltx2+900,lty2-5,ltx2+910,bry2);
            bar(ltx2+910,bry2-20,ltx2+920,bry2);//obstacle 12 : combination of 2 rectangles

            bar(ltx2+1050,lty2-5,ltx2+1060,bry2);//obstacle 13
            bar(ltx2+1200,lty2-5,ltx2+1210,bry2);//obstacle 14

            bar(ltx2+1350,lty2-10,ltx2+1360,bry2);
            bar(ltx2+1360,lty2-15,ltx2+1370,bry2);//obstacle 15 : combination of 2 rectangles

            ltx2=ltx2-45;
            brx2=brx2-45;

            score1++;
            delay(10);
            return score1;
}


int check1(int x ,int y , int lx1, int ly1 , int rx1, int ry1)
{
    if(ly1<y&&y<ry1)
    {
        if(x>=lx1&&x<=rx1)
            {
                    return 1;
            }
    }
    return 0;
}
