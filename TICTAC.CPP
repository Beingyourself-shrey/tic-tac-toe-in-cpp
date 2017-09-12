#include<iostream.h>
#include<graphics.h>
#include<fstream.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
#include<stdio.h>


class tic{
char a[9][9];
public:
      char *str;
	int l;
tic()
{
	l=1;

a[0][0]='1';
a[0][1]='2';
a[0][2]='3';
a[1][0]='4';
a[1][1]='5';
a[1][2]='6';
a[2][0]='7';
a[2][1]='8';
a[2][2]='9';
}
void print();
int chance();
int checkwin();
int check2();
void screen1();
void  end(int);
void graph()
{
int gd=DETECT,gm,error;
initgraph(&gd,&gm,"c://tc//BGI");
error=graphresult();
if(error!=grOk)
{
printf("\n",grapherrormsg(error));
getch();
 }

}


};
void tic::end(int k)
{
closegraph();
graph();
cleardevice();
setbkcolor(LIGHTBLUE);
outtextxy(287,240,"THANKYOU");

cout<<"\n\n\n\n\n\n\n\t\t\t\t"<<"CONGRATULATION";
if(k==1)
cout<<"\n\n\t\t\t\t"<<str;
else
cout<<"\n\n\t\t\t\tTIE";
outtextxy(287,260,"********");
delay(3000);
closegraph();
}
void tic::screen1()
{
graph();

cleardevice();
setbkcolor(GREEN);
int x,y;
x=getmaxx();
y=getmaxy();
 line(20,0,20,y);
	    line(x-20,0,x-20,y);
line(0,20,x,20);
line(0,y-20,x,y-20);
outtextxy(300,220,"TIC TAC TOE");
delay(2500);
cleardevice();
setbkcolor(BLUE);
 line(20,0,20,y);
	    line(x-20,0,x-20,y);
line(0,20,x,20);
line(0,y-20,x,y-20);
cout<<"\n\n\n";
outtextxy(300,40,"RULES\n\n");
cout<<"\n\n\n\n\n\n\n\n\n\t\t\t->don't be fast\n";
cout<<"\t\t\t->you need to win\n";
cout<<"\t\t\t->try to avoid any other keys";
delay(5000);
graph();
closegraph();

}
int tic::check2()   ////check if your structure is completely 'o'&'x' filled or not
{

	int i,j;
	int flag=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]!='x'&&a[i][j]!='o')
		  {
				return 0;
				flag=1;
		}
	}
}
if(flag==0)
{
return 1;
}
}
int tic::checkwin()  //check if win or not
{



if(a[0][0]==a[0][1]&&a[0][0]==a[0][2]||a[1][0]==a[1][1]&&a[1][0]==a[1][2]||a[2][0]==a[2][1]&&a[2][1]==a[2][2])
return 1;
else if(a[0][0]==a[1][1]&&a[0][0]==a[2][2]||a[0][2]==a[1][1]&&a[0][2]==a[2][0])
return 1;
if(a[0][0]==a[1][0]&&a[0][0]==a[2][0]||a[0][1]==a[1][1]&&a[0][1]==a[2][1]||a[0][2]==a[1][2]&&a[0][2]==a[2][2])
return 1;

else
return 0;

}


int tic::chance()                ////chance
{
	char x;
	int per,choice;

	if(l%2==0)
	{
		x='o';
		per=2;
	}
	else
	{
		x='x';
		per=1;
	}
		cout<<"\t\t\t\tenter choice person"<<per;
	cin>>choice;
	switch(choice)
	{
		case 1:
		if(a[0][0]=='x'||a[0][0]=='o')
		cout<<"sorry already occupy";

		else
	{
			a[0][0]=x;
		l++;
	}
		break;

		 case 2:
if(a[0][1]=='x'||a[0][1]=='o')
cout<<"cant chhoose this";
else
{a[0][1]=x;
l++;}
break;

case 3:
	if(a[0][2]=='x'||a[0][2]=='o')
	cout<<"cant choose";
	else
{	a[0][2]=x;
	l++;
	}
	break;

	case 4:
	if(a[1][0]=='x'||a[1][0]=='o')
	cout<<"cant choose";
	else
	{
	a[1][0]=x;
	l++;
}
	break;
	case 5:
	if(a[1][1]=='x'||a[1][1]=='o')
	cout<<"cant choose";
	else
{
		a[1][1]=x;
		l++;}
	break;

	case 6:
	if(a[1][2]=='x'||a[1][2]=='o')
	cout<<"cant choose";
	else
	{
	a[1][2]=x;
	l++;}

	break;
	case 7:
	if(a[2][0]=='x'||a[2][0]=='o')
	cout<<"cant choose";
	else
	{

	a[2][0]=x;
	l++;
}
	break;

	case 8:
	if(a[2][1]=='x'||a[2][1]=='o')
	cout<<"cant choose";
	else
{
		a[2][1]=x;
		l++;}
	break;
	case 9:
	if(a[2][2]=='x'||a[2][2]=='o')
	cout<<"cant choose";
	else

	{
	a[2][2]=x;
l++;}
	break;
	default:
		cout<<"wrong";
		break;
}
return  per;
}
void tic::print()
//print
{

		   closegraph();
		      graph();


	int i,j,x,y;
	x=getmaxx();
	y=getmaxy();
	cleardevice();
	if(l%2!=0)
	setbkcolor(RED);
	else
	setbkcolor(GREEN);
	    line(20,0,20,y);
	    line(x-20,0,x-20,y);
line(0,20,x,20);
line(0,y-20,x,y-20);

	      line(220,200,420,200);
	      line(220,229,420,229);
		 line(290,160,290,270);
		    line(346,160,346,270);



		 cout<<"\n\n\n\n\n\n\n\n\n\n\n";

	for(i=0;i<3;i++)
	{        cout<<"\t\t\t\t";
		for(j=0;j<3;j++)
		{
			cout<<a[i][j]<<"\t";

		}
			cout<<"\n\n";
			}
			cout<<"\n\n";
	cout<<"\t\t\t\tplayer1(x)and player2(o)\n\n";

}

int main()
{
int rep=1;
while(rep==1)
{

tic person;

person.graph();
person.screen1();
person.print();


int i=0,k=0,l;
while(i!=1)
{
l=person.chance();
person.print();
k=person.checkwin();
if(k==1)
break;
i=person.check2();
}
ofstream game;
game.open("shrey.txt",ios::app);

if(k==1)
{

cout<<"\t\t\t\tperson"<<l<<"win";
cout<<"\n\t\t\t\t"<<l<<"  PLAYER\n\t\t\t\t enter your name";
cin>>person.str;
if(l==1)
game<<"\n1 player win\t"<<person.str;
else
game<<"\n2 nd player win\t"<<person.str;
}
else
{
cout<<"\n\t\t\t\tsorry its tie";
game<<"\ntie";
}
delay(200);

person.end(k);
closegraph();
cout<<"1 for play again or 0";
cin>>rep;
person.str="";

}

}
