#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{  int gm,gd=DETECT;
  int midx,midy,i=0;
   initgraph(&gd,&gm,"c:\\turboc3\\BGI");
  // midx=getmaxx()/2;
  // midy=getmaxy()/2;

  setbkcolor(8);
  for(i=0;i<580;i++)
  {
  settextstyle(6,HORIZ_DIR,3);
  outtextxy(100,220,"MADE BY :->JAYANT");
       setcolor(3);
   line(0,200,1000,200);   //moutains lines

   line(0,200,100,50);
   line(100,50,200,200);

   line(0,200,150,70);
   line(150,70,300,200);
   setcolor(14);
   // sun
    circle(250,70,20);
		setcolor(3);
   line(200,200,300,50);
   line(300,50,400,200);

   line(300,200,400,90);
   line(400,90,500,200);

   line(400,200,500,70);
   line(500,70,600,200);

   line(500,200,600,100);
   line(600,100,700,200);
   // car design...
		   setcolor(15);
   line(10+i,350,210+i,350);
   line(50+i,350,71+i,319);
   line(70+i,320,140+i,320);
   line(140+i,320,160+i,350);
   line(85+i,320,85+i,350);
   line(125+i,320,125+i,350);
   line(10+i,350,10+i,380);
   line(210+i,350,210+i,380);
   line(10+i,380,50+i,380);
   //car wheels..
   setcolor(4);
   circle(60+i,380,15);
   line(80+i,380,130+i,380);
   circle(145+i,380,15);
   line(210+i,380,160+i,380);

   // wheels trim...
    setcolor(3);
   pieslice(65+i,380,359+i,360,15);
   pieslice(65+i,380,179+i,180,15);
   pieslice(65+i,380,89+i,90,15);
   pieslice(65+i,380,269+i,270,15);
   pieslice(145+i,380,359+i,360,15);
   pieslice(145+i,380,179+i,180,15);
   pieslice(145+i,380,89+i,90,15);
   pieslice(145+i,380,269+i,270,15);


   //traffic light...
   setcolor(15);
   line(550,220,620,220);
   line(550,320,620,320);
   line(550,320,550,220);
   line(620,320,620,220);
   line(580,380,580,320);
   line(590,380,590,320);
   line(580,380,590,380);
   setcolor(12);
   circle(585,240,12);
   setcolor(14);
   circle(585,270,12);
   setcolor(10);
   circle(585,300,12);
   //roads
   setcolor(15);
   line(0,420,1000,420);
   line(0,360,10,360);
   line(210,360,580,360);
   line(590,360,1000,360);
   line(20,395,90,395);
   line(120,395,190,395);
   line(220,395,290,395);
   line(320,395,390,395);
   line(420,395,490,395);
   line(520,395,590,395);
   line(620,395,690,395);
   if(i==0)
   {
	getch();
	setcolor(15);
	outtextxy(10,220,"press any key to start");
	}
      delay(20);
      cleardevice();
      }

      outtextxy(250,400,"MADE BY :-> JAYANT");
   getch();
   closegraph();

   return 0;

}