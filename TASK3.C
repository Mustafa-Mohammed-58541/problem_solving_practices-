#include<stdio.h>
#include<conio.h>
void drawer (void) ;
void add    (void) ;
void sub    (void) ;
void mult   (void) ;
void exite  (void) ;
void divide (void) ;
int main()
{
 char ch;
 //declare row and col
 int row; int col,flag;
// intialzation of a variable are row -->1 col -->2
row=1;col=1;flag=1;
 //clear the screan after the declaration of the input
 clrscr();
 //print the manue
drawer();
//this will go for ever untile u enter the escabe
do {
ch=getch();
//this th up cusror
if (ch ==72)
{  row --;
   if (row<1)
   {  row=5;

   }

   gotoxy(col,row);
  // clrscr();
  // printf("iam in the subfunction ");
   getch(); // to make him in the get the next chr if so he will be in the same if

}
//we will return to home mean first row
if (ch==71)
{
   clrscr();	//clear the previouse screan
   drawer();	//draw our screan meanu app
   gotoxy(1,1);	//goto first row and col
}
//end to last raw //wih fixed row plus col
if (ch==79)
{   gotoxy(1,5);
    clrscr();
    drawer();

}

//down curser
if (ch ==80)
{  row++;
   if(row>5)
   {
      row=1;
   }
   gotoxy(col,row);
  // clrscr();
 //  printf("i am in th add fun");

   getch(); //to wait for the output

}
//right curor
if (ch ==77)
{  col ++;
   if (col>5)
   { col=1;
   }
   gotoxy(col,row);
   getch();
}
//left cursor
if ( ch==75)
{  col --;
   if( col<1)
   {  col=5;

   }
   gotoxy(col,row);
   getch();

}

//in the enter case we will have 5 mode
if ( ch ==13)
{  clrscr();
   gotoxy(col,row);
 //  printf("i am enter the enter mode");
   if ((row ==1)&& (ch==13))
   { // clrscr();
	add();
       while(flag==1)
	{   ch =getch();
	    if(ch==27)
	      flag=0;
	}
	flag=1;
       drawer();
	while(flag==1)
	{   ch =getch();
	    if(ch==27 | ch==72)
	      flag=0;
	}
	flag=1;
      // getch();
   }
   if((row==3)&& (ch==13))
   {
     mult();

       while(flag==1)
	{   ch =getch();
	    if(ch==27)
	      flag=0;
	}
	flag=1;
       drawer();
	 //to make sure we are in the drawer screan after returning from the multfunction
	 //so we make sure we cant go out from the meanue if we enter escape or up
	while(flag==1)
	{   ch =getch();
	    if(ch==27 | ch==72)
	      flag=0;
	}
	flag=1;

     //  drawer();
     //  getch();
   }
   if ((row==2)&& (ch==13))
   {
	sub();

	while(flag==1)
	{   ch =getch();
	    if(ch==27)
	       flag=0;
	}
	flag=1;
	drawer();

	while(flag==1)
	{   ch =getch();
	    if(ch==27 | ch==72)
	      flag=0;
	}
	flag=1;

       //	drawer();
      //	getch();
   }
   if ((row==4)&& (ch==13))
   {
	divide();

	while(flag==1)
	{   ch =getch();
	    if(ch==27)
	       flag=0;
	}
	flag=1;
	drawer();

	while(flag==1)
	{   ch =getch();
	    if(ch==27| ch==72 )
	      flag=0;
	}
	flag=1;



       //getch();
   }
   if ((row==5)&& (ch==13))
   { // exite();

     break;
   }


}


}while(ch!=27)  ;



//gotoxy(2,5);






//getch();
return 0;
}//main
void drawer ()
{ //char ch; int flag;
//flag=1;
clrscr();
printf("ADD\n");
printf("Subtract\n");
printf("Multiply\n");
printf("Divide\n");
printf("Exit");
/* while(flag==1)
	{   ch =getch();
	    if(ch==27)
	      flag=0;
	}
	flag=1;
 //getch();
*/
}

void add()
{ int x,y;
clrscr();
printf("welcome to the add function ")  ;
printf("enter x value:  ");
scanf("%d",&x);
printf("enter y value:  ");
scanf("%d",&y);
//todo ineed to clear the screen of input
printf("the sum is equal %d",(x+y));
//getch();//to wait to make him see the output
/*
do {
}while(ch!=27)   */
//getch();
}
void mult()
{

 int x,y;
 clrscr();
 printf("we are in the multiply function");
 printf("enter x value:  ");
 scanf("%d",&x);
 printf("enter y value:  ");
 scanf("%d",&y);
//todo i need to clear the screen of input
 printf("the multiply is equal %d",(x*y));

 //getch();
}
void divide()
{
   int x,y;
   clrscr();
   printf("we are in the divide function\n");
   printf("enter x value:  ");

   scanf("%d",&x);
   printf("enter y value:  ");
   scanf("%d",&y);
//todo i need to clear the screen of input
   printf("the divide  is equal %d",(x/y));

}
void exite()
{ //char ch;
 clrscr();
 printf("we are in the exite");
// drawer();
//ch=27;
// break;
 }
void sub()
{


   int x,y;
   clrscr();
   printf("we are in the sub funtion");
   printf("enter x value:  ");

   scanf("%d",&x);
   printf("enter y value:  ");
   scanf("%d",&y);
//todo i need to clear the screen of input
   printf("the divide  is equal %d",(x-y));



}