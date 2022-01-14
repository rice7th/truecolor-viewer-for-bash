#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<time.h>
#define PRINT printf("\033[48;2;%d;%d;%dm%8d%8d%8d\r",r,g,b,r,g,b)
int msl(unsigned int tms){return usleep(tms*1000);}int main(int argc,char**argv){int c;if(argc==1) c=50; else c=atoi(argv[1]);int r=0;int g=0;int b=0;for(int i=0;i<255;i++){r++;PRINT;fflush(stdout);msl(c);}for(int j=0;j<255;j++){g++;PRINT;fflush(stdout);msl(c);}for(int k=0;k<255;k++){r--;PRINT;fflush(stdout);msl(c);}for(int l=0;l<255;l++){b++;PRINT;fflush(stdout);msl(c);}for(int m=0;m<255;m++){g--;PRINT;fflush(stdout);msl(c);}for(int n=0;n<255;n++){r++;PRINT;fflush(stdout);msl(c);}for(int o=0;o<255;o++){b--;PRINT;fflush(stdout);msl(c);}printf("\033[0m");return 0;}
