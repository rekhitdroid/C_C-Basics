#include<stdio.h>
#include<conio.h>
void main(int argc,char *argv[]){
 clrscr();
 if(argc==2){
  printf("the Argument supplied is %s \n",argv[1]);
 }else if(argc>2){
  printf("Too many arguments supplied \n");
 }else{
  printf("one Argument accepted \n");
 }

getch();

}