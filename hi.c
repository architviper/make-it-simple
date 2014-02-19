#include<stdio.h>
void main()
{
  char name[20];
  printf("Hi user!\nWhat's your name?");
  gets(name);
  printf("Welcome %s",name);
}
