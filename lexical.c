#include<stdio.h>
#include<fstream.h>
#include<string.h> 
void main()
{
  char c
  FILE *fp;
 fp=fopen("input.txt",'r')
while(c=getc(fp))!=EOF)
{
  printf("%c",c);
}
fp=fclose("input.txt");
}
