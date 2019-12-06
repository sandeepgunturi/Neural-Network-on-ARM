
#include "stm32f4xx.h"
#include <string.h>
#include<stdio.h>
void printMsg(int a,int b,int c,int d)
{
//float a1=*((float*) &a) ;
//float b1=*((float*) &b) ;
//float c1=*((float*) &c) ;
char Msg1[10];
char Msg2[10];
char Msg3[10];
char Msg4[10];
	
char *ptr;
sprintf(Msg1, "%x", a);
sprintf(Msg2, "%x", b);
sprintf(Msg3,"%x",c);
sprintf(Msg4,"%x",d);
	
ptr = Msg1 ;
   while(*ptr != '\0'){
      ITM_SendChar(*ptr);
      ++ptr;
   }
ITM_SendChar(',');
ptr=Msg2 ;
 while(*ptr != '\0'){
      ITM_SendChar(*ptr);
      ++ptr;
   }
ITM_SendChar(',');
ptr=Msg3 ;
 while(*ptr != '\0'){
      ITM_SendChar(*ptr);
      ++ptr;
   }
ITM_SendChar(',');
ptr = Msg4 ;
   while(*ptr != '\0'){
      ITM_SendChar(*ptr);
      ++ptr;
   }
ITM_SendChar('\n');
}
void printMsgnand(int a,int b,int c,int d)
{
//char Msg1[10];
//char Msg2[10];
//char Msg3[10];
//char Msg4[10];
	
/*char *ptr;
sprintf(Msg1, "%x", a);
sprintf(Msg2, "%x", b);
sprintf(Msg3,"%x",c);
sprintf(Msg4,"%x",d);
	
ptr = Msg1 ;
   while(*ptr != '\0'){
      ITM_SendChar(*ptr);
      ++ptr;
   }
*/
ITM_SendChar('N');
ITM_SendChar('A');
ITM_SendChar('N');
ITM_SendChar('D');
ITM_SendChar('\n');
	
ITM_SendChar('X');
ITM_SendChar('1');
ITM_SendChar(',');

ITM_SendChar('X');
ITM_SendChar('2');
ITM_SendChar(',');

ITM_SendChar('X');
ITM_SendChar('3');
ITM_SendChar(',');

ITM_SendChar('Y');	
ITM_SendChar('\n');

}
void printMsgnor(int a,int b,int c,int d)
{
ITM_SendChar('N');
ITM_SendChar('O');
ITM_SendChar('R');
ITM_SendChar('\n');
	
ITM_SendChar('X');
ITM_SendChar('1');
ITM_SendChar(',');

ITM_SendChar('X');
ITM_SendChar('2');
ITM_SendChar(',');

ITM_SendChar('X');
ITM_SendChar('3');
ITM_SendChar(',');

ITM_SendChar('Y');	
ITM_SendChar('\n');
}
void printMsgand(int a,int b,int c,int d)
{
ITM_SendChar('A');
ITM_SendChar('N');
ITM_SendChar('D');
ITM_SendChar('\n');
	
ITM_SendChar('X');
ITM_SendChar('1');
ITM_SendChar(',');

ITM_SendChar('X');
ITM_SendChar('2');
ITM_SendChar(',');

ITM_SendChar('X');
ITM_SendChar('3');
ITM_SendChar(',');

ITM_SendChar('Y');	
ITM_SendChar('\n');
}
void printMsgor(int a,int b,int c,int d)
{
ITM_SendChar('O');
ITM_SendChar('R');
ITM_SendChar('\n');
	
ITM_SendChar('X');
ITM_SendChar('1');
ITM_SendChar(',');

ITM_SendChar('X');
ITM_SendChar('2');
ITM_SendChar(',');

ITM_SendChar('X');
ITM_SendChar('3');
ITM_SendChar(',');

ITM_SendChar('Y');	
ITM_SendChar('\n');
}
void printMsgnot(int a,int b,int c,int d)
{
ITM_SendChar('N');
ITM_SendChar('O');
ITM_SendChar('T');
ITM_SendChar('\n');
	
ITM_SendChar('X');
ITM_SendChar('1');
ITM_SendChar(',');

ITM_SendChar('X');
ITM_SendChar('2');
ITM_SendChar(',');

ITM_SendChar('X');
ITM_SendChar('3');
ITM_SendChar(',');

ITM_SendChar('Y');	
ITM_SendChar('\n');
}



void printMsg2p(const int a, const int b)
{
char Msg[100];
char *ptr;
sprintf(Msg, "%x", a);
ptr = Msg ;
   while(*ptr != '\0')
{
      ITM_SendChar(*ptr);
      ++ptr;
   }
sprintf(Msg, "%x", b);
ptr = Msg ;
   while(*ptr != '\0')
{
      ITM_SendChar(*ptr);
      ++ptr;
   }
}

void printMsg4p(const int a, const int b, const int c, const int d, const int e)
{
char Msg[100];
char *ptr;
// Printing the message
sprintf(Msg,"\nPrinting First parameter a:  ");
ptr = Msg ;
   while(*ptr != '\0')
{
      ITM_SendChar(*ptr);
      ++ptr;
   }
//Printing the first parameter
sprintf(Msg, "%x", a);
ptr = Msg ;
   while(*ptr != '\0')
{
      ITM_SendChar(*ptr);
      ++ptr;
   }
// Printing the message
sprintf(Msg,"\nPrinting Second parameter b: ");
ptr = Msg ;
   while(*ptr != '\0')
{
      ITM_SendChar(*ptr);
      ++ptr;
   }
sprintf(Msg, "%x", b);
ptr = Msg ;
   while(*ptr != '\0')
{
      ITM_SendChar(*ptr);
      ++ptr;
   }
// Printing the message
sprintf(Msg,"\nPrinting Third parameter c: ");
ptr = Msg ;
   while(*ptr != '\0')
{
      ITM_SendChar(*ptr);
      ++ptr;
   }
sprintf(Msg, "%x", c);
ptr = Msg ;
   while(*ptr != '\0')
{
      ITM_SendChar(*ptr);
      ++ptr;
   }
// Printing the message
sprintf(Msg,"\nPrinting Four parameter d: ");
ptr = Msg ;
   while(*ptr != '\0')
{
      ITM_SendChar(*ptr);
      ++ptr;
   }
sprintf(Msg, "%x", d);
ptr = Msg ;
   while(*ptr != '\0')
{
      ITM_SendChar(*ptr);
      ++ptr;
}

// Printing the message
sprintf(Msg,"\nPrinting Fifth parameter e (check this value is correct or not): ");
ptr = Msg ;
   while(*ptr != '\0')
{
      ITM_SendChar(*ptr);
      ++ptr;
   }

 sprintf(Msg, "%x", e);
ptr = Msg ;
   while(*ptr != '\0')
{
      ITM_SendChar(*ptr);
      ++ptr;
   }
}
