#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<stdio.h>

using namespace std;

int pattern_one(int);
int pattern_two(int);
int pattern_three(int);
void gameover_shoot();
int game_rhero(int);

    int i=50,j=0;
    int g=0;
    int c= 0;
    int t=-1,m,z;
    char s_rh[30];


int game_rhero(int score_rh)
{
    setcolor(YELLOW);
    int a,w;
    int time=0;
    while(1)
    {
           swapbuffers();
           cleardevice();
           score_rh+=10;
           time++;
           if(time==112)
            return score_rh++;
           setcolor(YELLOW);
           sprintf(s_rh,"SCORE: %d",score_rh);
           outtextxy(380,20,s_rh);
           setcolor(GREEN);

           for(w=0;w<20;w++)
           line(0,480-w,640,480-w);

            setcolor(YELLOW);
            setfillstyle(SOLID_FILL,YELLOW);

            if(GetAsyncKeyState(VK_LEFT))
                j=j-30;
            if(GetAsyncKeyState(VK_RIGHT))
                j=j+30;

	int y=10;

            line(2+j,470-y,2+j,450-y);
            line(2+j,450-y,12+j,450-y);
            line(12+j,450-y,22+j,430-y);
            line(22+j,430-y,32+j,430-y);
            line(32+j,430-y,42+j,450-y);
            line(42+j,450-y,52+j,450-y);
            line(52+j,450-y,52+j,470-y);

            circle(35+j,470-y,5);
            circle(20+j,470-y,5);

            line(2+j,470-y,15+j,470-y);
            line(40+j,470-y,52+j,470-y);
            line(25+j,470-y,30+j,470-y);

            floodfill(10+j,450,YELLOW);

            if(i>600)
            {
               i=50;
               t++;
               if(t==8)
                t=-1;
            }

          if(i<600&&i>0&&t==-1&&g==0)
            {
                m=10;
                setcolor(RED);
                pattern_one(score_rh);
            }

            if(i<600&&i>0&&t==0&&g==0)
            {
                m=10;
                setcolor(MAGENTA);
               pattern_two(score_rh);
            }

            if(i<600&&i>0&&t==1&&g==0)
            {
                        m=10;
                setcolor(CYAN);
                pattern_three(score_rh);
            }

            if(i<600&&i>0&&t==2&&g==0)
            {
                        m=15;
                setcolor(RED);
                pattern_one(score_rh);
            }

            if(i<600&&i>0&&t==3&&g==0)
            {
                        m=15;
                setcolor(MAGENTA);
                pattern_two(score_rh);
            }

            if(i<600&&i>0&&t==4&&g==0)
            {
                        m=15;
                setcolor(CYAN);
                pattern_three(score_rh);
            }

            if(i<600&&i>0&&t==5&&g==0)
            {
                        m=20;
                setcolor(RED);
                pattern_one(score_rh);
            }

            if(i<600&&i>0&&t==6&&g==0)
            {
                        m=20;
                setcolor(MAGENTA);
                pattern_two(score_rh);
            }

            if(i<600&&i>0&&t==7&&g==0)
            {
                        m=20;
                setcolor(CYAN);
                pattern_three(score_rh);
            }

            if(g==1)
                return score_rh;

            i=i+m;
            delay(100);
    }
    return score_rh;
}

int pattern_one(int score_rh)
{

            int cx[9]={440,290,590,640,620,630,550,500,300};
            int cy[10]={150,230,30,0,150,70,-50,-80,150};


       setcolor(RED);
       setfillstyle(SOLID_FILL,RED);

       circle(cx[0]-i,cy[0]+i,20);
       floodfill(cx[0]-i,cy[0]+i,RED);

        if((cx[0]-i+20<52+j && cx[0]-i+20>2+j && cy[0]+i>430 && cy[0]+i<470) ||
        (cx[0]-i-20<52+j && cx[0]-i-20>2+j && cy[0]+i>430 && cy[0]+i<470) ||
        (cx[0]-i<52+j && cx[0]-i>2+j && cy[0]+i+20>430 && cy[0]+i+20<470) ||
        (cx[0]-i<52+j && cx[0]-i>2+j && cy[0]+i-20>430 && cy[0]+i-20<470))
                        {
                            g=1;
                            gameover_shoot();
                            //return score_rh;

                        }

      circle(cx[1]-i,cy[1]+i,30);
       floodfill(cx[1]-i,cy[1]+i,RED);

        if((cx[1]-i+30<52+j && cx[1]-i+30>2+j && cy[1]+i>430 && cy[1]+i<470) ||
        (cx[1]-i-30<52+j && cx[1]-i-30>2+j && cy[1]+i>430 && cy[1]+i<470) ||
        (cx[1]-i<52+j && cx[1]-i>2+j && cy[1]+i+30>430 && cy[1]+i+30<470) ||
        (cx[1]-i<52+j && cx[1]-i>2+j && cy[1]+i-30>430 && cy[1]+i-30<470))
                        {
                            g=1;
                            gameover_shoot();
                            //return score_rh;

                        }

        circle(cx[2]-i,cy[2]+i,40);
        floodfill(cx[2]-i,cy[2]+i,RED);


     if((cx[2]-i+40<52+j && cx[2]-i+40>2+j && cy[2]+i>430 && cy[2]+i<470) ||
        (cx[2]-i-40<52+j && cx[2]-i-40>2+j && cy[2]+i>430 && cy[2]+i<470) ||
        (cx[2]-i<52+j && cx[2]-i>2+j && cy[2]+i+40>430 && cy[2]+i+40<470) ||
        (cx[2]-i<52+j && cx[2]-i>2+j && cy[2]+i-40>430 && cy[2]+i-40<470))
                        {
                            g=1;
                            gameover_shoot();
                            //return score_rh;
                        }

    circle(cx[3]-i,cy[3]+2*i,20);
    floodfill(cx[3]-i,cy[3]+2*i,RED);

    if((cx[3]-i+20<52+j && cx[3]-i+20>2+j && cy[3]+2*i>430 && cy[3]+2*i<470) ||
        (cx[3]-i-20<52+j && cx[3]-i-20>2+j && cy[3]+2*i>430 && cy[3]+2*i<470) ||
        (cx[3]-i<52+j && cx[3]-i>2+j && cy[3]+2*i+20>430 && cy[3]+2*i+20<470) ||
        (cx[3]-i<52+j && cx[3]-i>2+j && cy[3]+2*i-20>430 && cy[3]+2*i-20<470))
                        {
                            g=1;
                            gameover_shoot();
                            //return score_rh;

                        }

     circle(cx[4]-i,cy[4]+2*i,30);
      floodfill(cx[4]-i,cy[4]+2*i,RED);


          if((cx[4]-i+30<52+j && cx[4]-i+30>2+j && cy[4]+2*i>430 && cy[4]+2*i<470) ||
        (cx[4]-i-30<52+j && cx[4]-i-30>2+j && cy[4]+2*i>430 && cy[4]+2*i<470) ||
        (cx[4]-i<52+j && cx[4]-i>2+j && cy[4]+2*i+30>430 && cy[4]+2*i+30<470) ||
        (cx[4]-i<52+j && cx[4]-i>2+j && cy[4]+2*i-30>430 && cy[4]+2*i-30<470))
                        {
                            g=1;
                            gameover_shoot();
                            //return score_rh;

                        }

        circle(cx[5]-i,cy[5]+2*i,40);
        floodfill(cx[5]-i,cy[5]+2*i,RED);


        if((cx[5]-i+40<52+j && cx[5]-i+40>2+j && cy[5]+2*i>430 && cy[5]+2*i<470) ||
        (cx[5]-i-40<52+j && cx[5]-i-40>2+j && cy[5]+2*i>430 && cy[5]+2*i<470) ||
        (cx[5]-i<52+j && cx[5]-i>2+j && cy[5]+2*i+40>430 && cy[5]+2*i+40<470) ||
        (cx[5]-i<52+j && cx[5]-i>2+j && cy[5]+2*i-40>430 && cy[5]+2*i-40<470))
                        {
                            g=1;
                            gameover_shoot();
                            //return score_rh;

                        }

      circle(cx[6]-i,cy[6]+i,20);
      floodfill(cx[6]-i,cy[6]+i,RED);

       if((cx[6]-i+20<52+j && cx[6]-i+20>2+j && cy[6]+i>430 && cy[6]+i<470) ||
        (cx[6]-i-20<52+j && cx[6]-i-20>2+j && cy[6]+i>430 && cy[6]+i<470) ||
        (cx[6]-i<52+j && cx[6]-i>2+j && cy[6]+i+20>430 && cy[6]+i+20<470) ||
        (cx[6]-i<52+j && cx[6]-i>2+j && cy[6]+i-20>430 && cy[6]+i-20<470))
                        {
                            g=1;
                            gameover_shoot();
                            //return score_rh;

                        }


     circle(cx[7]-i,cy[7]+i,30);
       floodfill(cx[7]-i,cy[7]+i,RED);


        if((cx[7]-i+30<52+j && cx[7]-i+30>2+j && cy[7]+i>430 && cy[7]+i<470) ||
        (cx[7]-i-30<52+j && cx[7]-i-30>2+j && cy[7]+i>430 && cy[7]+i<470) ||
        (cx[7]-i<52+j && cx[7]-i>2+j && cy[7]+i+30>430 && cy[7]+i+30<470) ||
        (cx[7]-i<52+j && cx[7]-i>2+j && cy[7]+i-30>430 && cy[7]+i-30<470))
                        {
                            g=1;
                            gameover_shoot();
                            //return score_rh;

                        }

        circle(cx[8]-i,cy[8]+i,40);
        floodfill(cx[8]-i,cy[8]+i,RED);

        if((cx[8]-i+40<52+j && cx[8]-i+40>2+j && cy[8]+i>430 && cy[8]+i<470) ||
        (cx[8]-i-40<52+j && cx[8]-i-40>2+j && cy[8]+i>430 && cy[8]+i<470) ||
        (cx[8]-i<52+j && cx[8]-i>2+j && cy[8]+i+40>430 && cy[8]+i+40<470) ||
        (cx[8]-i<52+j && cx[8]-i>2+j && cy[8]+i-40>430 && cy[8]+i-40<470))
                        {
                            g=1;
                            gameover_shoot();
                            //return score_rh;

                        }

        i=i+m;
        delay(100);
}

int pattern_two(int score_rh)
{

        setcolor(MAGENTA);
       setfillstyle(SOLID_FILL,MAGENTA);


        int cx2[11]={340,200,400,100,500,300,240,100,200,340,500};
        int cy2[11]={10,20,30,20,30,10,30,50,10,30,50};

       circle(cx2[0],i+cy2[0],20);
       floodfill(cx2[0],cy2[0]+i,MAGENTA);

        if((cx2[0]+20<52+j && cx2[0]+20>2+j && cy2[0]+i>430 && cy2[0]+i<470) ||
        (cx2[0]-20<52+j && cx2[0]-20>2+j && cy2[0]+i>430 && cy2[0]+i<470) ||
        (cx2[0]<52+j && cx2[0]>2+j && cy2[0]+i+20>430 && cy2[0]+i+20<470) ||
        (cx2[0]<52+j && cx2[0]>2+j && cy2[0]+i-20>430 && cy2[0]+i-20<470))
                        {
                            g=1;
                            gameover_shoot();
                            //return score_rh;

                        }

        circle(cx2[1],cy2[1]+i,30);
        floodfill(cx2[1],cy2[1]+i,MAGENTA);

        if((cx2[1]+30<52+j && cx2[1]+30>2+j && cy2[1]+i>430 && cy2[1]+i<470) ||
        (cx2[1]-30<52+j && cx2[1]-30>2+j && cy2[1]+i>430 && cy2[1]+i<470) ||
        (cx2[1]<52+j && cx2[1]>2+j && cy2[1]+i+30>430 && cy2[1]+i+30<470) ||
        (cx2[1]<52+j && cx2[1]>2+j && cy2[1]+i-30>430 && cy2[1]+i-30<470))
                        {
                            g=1;
                            gameover_shoot();
                            //return score_rh;
                        }

        circle(cx2[2],cy2[2]+i,40);
        floodfill(cx2[2],cy2[2]+i,MAGENTA);

        if((cx2[2]+40<52+j && cx2[2]+40>2+j && cy2[2]+i>430 && cy2[2]+i<470) ||
        (cx2[2]-40<52+j && cx2[2]-40>2+j && cy2[2]+i>430 && cy2[2]+i<470) ||
        (cx2[2]<52+j && cx2[2]>2+j && cy2[2]+i+40>430 && cy2[2]+i+40<470) ||
        (cx2[2]<52+j && cx2[2]>2+j && cy2[2]+i-40>430 && cy2[2]+i-40<470))
                        {
                            g=1;
                            gameover_shoot();
                            //return score_rh;

                        }

       circle(cx2[3],cy2[3]+i,30);
       floodfill(cx2[3],cy2[3]+i,MAGENTA);

        if((cx2[3]+30<52+j && cx2[3]+30>2+j && cy2[3]+i>430 && cy2[3]+i<470) ||
        (cx2[3]-30<52+j && cx2[3]-30>2+j && cy2[3]+i>430 && cy2[3]+i<470) ||
        (cx2[3]<52+j && cx2[3]>2+j && cy2[3]+i+30>430 && cy2[3]+i+30<470) ||
        (cx2[3]<52+j && cx2[3]>2+j && cy2[3]+i-30>430 && cy2[3]+i-30<470))
                        {
                            g=1;
                            gameover_shoot();
                            //return score_rh;

                        }

      circle(cx2[4],cy2[4]+i,40);
      floodfill(cx2[4],cy2[4]+i,MAGENTA);

        if((cx2[4]+40<52+j && cx2[4]+40>2+j && cy2[4]+i>430 && cy2[4]+i<470) ||
        (cx2[4]-40<52+j && cx2[4]-40>2+j && cy2[4]+i>430 && cy2[4]+i<470) ||
        (cx2[4]<52+j && cx2[4]>2+j && cy2[4]+i+40>430 && cy2[4]+i+40<470) ||
        (cx2[4]<52 +j && cx2[4]>2+j && cy2[4]+i-40>430 && cy2[4]+i-40<470))
                        {
                            g=1;
                            gameover_shoot();
                            //return score_rh;

                        }

        circle(cx2[5],cy2[5]+2*i,20);
        floodfill(cx2[5],cy2[5]+2*i,MAGENTA);

        if((cx2[5]+20<52+j && cx2[5]+20>2+j && cy2[5]+2*i>430 && cy2[5]+2*i<470) ||
        (cx2[5]-20<52+j && cx2[5]-20>2+j && cy2[5]+2*i>430 && cy2[5]+2*i<470) ||
        (cx2[5]<52+j && cx2[5]>2+j && cy2[5]+2*i+20>430 && cy2[5]+2*i+20<470) ||
        (cx2[5]<52+j && cx2[5]>2+j && cy2[5]+2*i-20>430 && cy2[5]+2*i-20<470))
                        {
                            g=1;
                            gameover_shoot();
                            //return score_rh;

                        }

        circle(cx2[6],cy2[6]+2*i,30);
        floodfill(cx2[6],cy2[6]+2*i,MAGENTA);

         if((cx2[6]+30<52+j && cx2[6]+30>2+j && cy2[6]+2*i>430 && cy2[6]+2*i<470) ||
        (cx2[6]-30<52+j && cx2[6]-30>2+j && cy2[6]+2*i>430 && cy2[6]+2*i<470) ||
        (cx2[6]<52+j && cx2[6]>2+j && cy2[6]+2*i+30>430 && cy2[6]+2*i+30<470) ||
        (cx2[6]<52+j && cx2[6]>2+j && cy2[6]+2*i-30>430 && cy2[6]+2*i-30<470))
                        {
                            g=1;
                            gameover_shoot();
                            //return score_rh;
                        }



       circle(cx2[8],cy2[8]+3*i,20);
       floodfill(cx2[8],cy2[8]+3*i,MAGENTA);

        if((cx2[8]+20<52+j && cx2[8]+20>2+j && cy2[8]+3*i>430 && cy2[8]+3*i<470) ||
        (cx2[8]-20<52+j && cx2[8]-20>2+j && cy2[8]+3*i>430 && cy2[8]+3*i<470) ||
        (cx2[8]<52+j && cx2[8]>2+j && cy2[8]+3*i+20>430 && cy2[8]+3*i+20<470) ||
        (cx2[8]<52+j && cx2[8]>2+j && cy2[8]+3*i-20>430 && cy2[8]+3*i-20<470))
                        {
                            g=1;
                            gameover_shoot();
                            return score_rh;

                        }


      circle(cx2[9],cy2[9]+3*i,30);
      floodfill(cx2[9],cy2[9]+3*i,MAGENTA);

        if((cx2[9]+30<52+j && cx2[9]+30>2+j && cy2[9]+3*i>430 && cy2[9]+3*i<470) ||
        (cx2[9]-30<52+j && cx2[9]-30>2+j && cy2[9]+3*i>430 && cy2[9]+3*i<470) ||
        (cx2[9]<52+j && cx2[9]>2+j && cy2[9]+3*i+30>430 && cy2[9]+3*i+30<470) ||
        (cx2[9]<52+j && cx2[9]>2+j && cy2[9]+3*i-30>430 && cy2[9]+3*i-30<470))
                        {
                            g=1;
                            gameover_shoot();
                            //return score_rh;

                        }

       circle(cx2[10],cy2[10]+3*i,40);
       floodfill(cx2[10],cy2[10]+3*i,MAGENTA);

        if((cx2[10]+40<52+j && cx2[10]+40>2+j && cy2[10]+3*i>430 && cy2[10]+3*i<470) ||
        (cx2[10]-40<52+j && cx2[10]-40>2+j && cy2[10]+3*i>430 && cy2[10]+3*i<470) ||
        (cx2[10]<52+j && cx2[10]>2+j && cy2[10]+3*i+40>430 && cy2[10]+3*i+40<470) ||
        (cx2[10]<52+j && cx2[10]>2+j && cy2[10]+3*i-40>430 && cy2[10]+3*i-40<470))
                    {
                        g=1;
                        gameover_shoot();
                        //return score_rh;
                    }


        i=i+m;
        delay(100);
}

int pattern_three(int score_rh)
{

        setcolor(CYAN);
       setfillstyle(SOLID_FILL,CYAN);

        int cx3[9]={0,100,50,100,20,30,10,60,260};
        int cy3[9]={150,230,30,0,150,200,50,80,150};

        circle(cx3[0]+i,cy3[0]+i,20);
        floodfill(cx3[0]+i,cy3[0]+i,CYAN);

                if((cx3[0]+i+20<52+j && cx3[0]+i+20>2+j && cy3[0]+i>430 && cy3[0]+i<470) ||
        (cx3[0]+i-20<52+j && cx3[0]+i-20>2+j && cy3[0]+i>430 && cy3[0]+i<470) ||
        (cx3[0]+i<52+j && cx3[0]+i>2+j && cy3[0]+i+20>430 && cy3[0]+i+20<470) ||
        (cx3[0]+i<52+j && cx3[0]+i>2+j && cy3[0]+i-20>430 && cy3[0]+i-20<470))
                        {
                            g=1;
                            gameover_shoot();
                            //return score_rh;

                        }


      circle(i-cx3[1],cy3[1]+i,30);
        floodfill(i-cx3[1],cy3[1]+i,CYAN);

         if((i-cx3[1]+30<52+j && i-cx3[1]+30>2+j && cy3[1]+i>430 && cy3[1]+i<470) ||
        (i-cx3[1]-30<52+j && i-cx3[1]-30>2+j && cy3[1]+i>430 && cy3[1]+i<470) ||
        (i-cx3[1]<52+j && i-cx3[1]>2+j && cy3[1]+i+30>430 && cy3[1]+i+30<470) ||
        (i-cx3[1]<52+j && i-cx3[1]>2+j && cy3[1]+i-30>430 && cy3[1]+i-30<470))
                        {
                            g=1;
                            gameover_shoot();
                            //return score_rh;

                        }

       circle(i-cx3[2],cy3[2]+i,40);
        floodfill(i-cx3[2],cy3[2]+i,CYAN);

        if((i-cx3[2]+40<52+j && i-cx3[2]+40>2+j && cy3[2]+i>430 && cy3[2]+i<470) ||
        (i-cx3[2]-40<52+j && i-cx3[2]-40>2+j && cy3[2]+i>430 && cy3[2]+i<470) ||
        (i-cx3[2]<52+j && i-cx3[2]>2+j && cy3[2]+i+40>430 && cy3[2]+i+40<470) ||
        (i-cx3[2]<52+j && i-cx3[2]>2+j && cy3[2]+i-40>430 && cy3[2]+i-40<470))
                        {
                            g=1;
                            gameover_shoot();
                            //return score_rh;

                        }





      circle(i-cx3[4],cy3[4]+2*i,30);
        floodfill(i-cx3[4],cy3[4]+2*i,CYAN);

        if((i-cx3[4]+30<52+j && i-cx3[4]+30>2+j && cy3[4]+2*i>430 && cy3[4]+2*i<470) ||
        (i-cx3[4]-30<52+j && i-cx3[4]-30>2+j && cy3[4]+2*i>430 && cy3[4]+2*i<470) ||
        (i-cx3[4]<52+j && i-cx3[4]>2+j && cy3[4]+2*i+30>430 && cy3[4]+2*i+30<470) ||
        (i-cx3[4]<52+j && i-cx3[4]>2+j && cy3[4]+2*i-30>430 && cy3[4]+2*i-30<470))
                        {
                            g=1;
                            gameover_shoot();
                            //return score_rh;
                        }

      circle(i+cx3[5],cy3[5]+2*i,40);
        floodfill(i+cx3[5],cy3[5]+2*i,CYAN);

        if((i+cx3[5]+40<52+j && i+cx3[5]+40>2+j && cy3[5]+2*i>430 && cy3[5]+2*i<470) ||
        (i+cx3[5]-40<52+j && i+cx3[5]-40>2+j && cy3[5]+2*i>430 && cy3[5]+2*i<470) ||
        (i+cx3[5]<52+j && i+cx3[5]>2+j && cy3[5]+2*i+40>430 && cy3[5]+2*i+40<470) ||
        (i+cx3[5]<52+j && i+cx3[5]>2+j && cy3[5]+2*i-40>430 && cy3[5]+2*i-40<470))
                        {
                            g=1;
                            gameover_shoot();
                            return score_rh;

                        }

       circle(i-cx3[6],i-cy3[6],20);
        floodfill(i-cx3[6],i-cy3[6],CYAN);

        if((i-cx3[6]+20<52+j && i-cx3[6]+20>2+j && i-cy3[6]>430 && i-cy3[6]<470) ||
        (i-cx3[6]-20<52+j && i-cx3[6]-20>2+j && i-cy3[6]>430 && i-cy3[6]<470) ||
        (i-cx3[6]<52+j && i-cx3[6]>2+j && i-cy3[6]+20>430 && i-cy3[6]+20<470) ||
        (i-cx3[6]<52+j && i-cx3[6]>2+j && i-cy3[6]-20>430 && i-cy3[6]-20<470))
                        {
                            g=1;
                            gameover_shoot();
                            //return score_rh;

                        }

      circle(i-cx3[7],i-cy3[7],30);
        floodfill(i-cx3[7],i-cy3[7],CYAN);

        if((i-cx3[7]+30<52+j && i-cx3[7]+30>2+j && i-cy3[7]>430 && i-cy3[7]<470) ||
        (i-cx3[7]-30<52+j && i-cx3[7]-30>2+j && i-cy3[7]>430 && i-cy3[7]<470) ||
        (i-cx3[7]<52+j && i-cx3[7]>2+j && i-cy3[7]+30>430 && i-cy3[7]+30<470) ||
        (i-cx3[7]<52+j && i-cx3[7]>2+j && i-cy3[7]-30>430 && i-cy3[7]-30<470))
                        {
                            g=1;
                            gameover_shoot();
                            //return score_rh;

                        }

     circle(i-cx3[8],cy3[8]+i,40);
        floodfill(i-cx3[8],cy3[8]+i,CYAN);

     if((i-cx3[8]+40<52+j && i-cx3[8]+40>2+j && i+cy3[8]>430 && i+cy3[8]<470) ||
        (i-cx3[8]-40<52+j && i-cx3[8]-40>2+j && i+cy3[8]>430 && i+cy3[8]<470) ||
        (i-cx3[8]<52+j && i-cx3[8]>2+j && i+cy3[8]+40>430 && i+cy3[8]+40<470) ||
        (i-cx3[8]<52+j && i-cx3[8]>2+j && i+cy3[8]-40>430 && i+cy3[8]-40<470))
                        {
                            g=1;
                            gameover_shoot();
                            //return score_rh;

                        }
        i=i+m;
        delay(100);
}

