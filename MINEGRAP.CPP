#include<stdio.h>
#include<conio.h>
#include"graphics.h"
#include<stdlib.h>
#include<dos.h>

void  main(){
	int gd=DETECT,gm;
	int i=3;

	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	for(i=0;i<50;i=i+3)
	{
		setcolor(WHITE);
	       // head
		 circle(50,100,20);
	//eye and eyebrows
		//-->left eye retina
		putpixel(40,100,WHITE);
		//-->left eye shape
		circle(40,100,2);
		//-->left eyebrows
		rectangle(38,96.5,43,96.5);
		//-->right eye retina.
		putpixel(60,100,WHITE);
	       //-->right eyeborws
	       rectangle(58,96.5,63,96.5);
	       //-->right eye shape
	       circle(60,100,2);

	       //-->nose shape
	       circle((40+60)/2,105,2.5);
	       line(50,100,(38.1+58.1)/2,105);
	       line(50,100,(42.1+62.1)/2,105);
	

	       //-->mouth
	       line(43,110,57,110);


	       //-->body
		line(30,160,70,160);
		line(50,120,50,200);
		line(30,250,50,200);
		line(70,250,50,200);
		line(70,160,90,120);
	
	       //-->waing hand
		if(i!= 3 && i != 9 && i!=15 && i!=21 && i!=27 && i!=33 && i!= 39 && i!=47 ){
		//line(90+i,100,100+i,80);
		line(90,120,85,110);
		line(90,120,98,110);
		line(90,120,106,110);
		line(43,110,57,110);

		delay(1);

		}else{
		line(90,120,75,110);
		line(90,120,88,110);
		line(90,120,94,110);
		 // line (45+i,100,65+i,80);
			    delay(100);
		 line(45,113,55,113);
		}
		delay(1000);
		cleardevice();
	 }
exit(0);
getchar();
getch();
closegraph();
}

