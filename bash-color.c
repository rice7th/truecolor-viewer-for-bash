#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#define PRINT printf("\033[48;2;%d;%d;%dm%8d %8d %8d\r", col_red, col_green, col_blue, col_red, col_green, col_blue);


int msleep(unsigned int tms) {
  return usleep(tms * 1000);
}


int main(int argc, char **argv) {
int control;
if (argc == 1) {
control = 50;
}
else {
control = atoi(argv[1]);
}
int col_red = 0;
int col_green = 0;
int col_blue = 0;
/*
r g b
0 0 0
255 0 0
255 255 0
0 255 0 d
0 255 255
0 0 255
255 0255
*/
// INCREMENT COLOR RED
for (int i = 0; i < 255; i++) {
    col_red++;
    PRINT
    fflush(stdout);
    msleep(control);
}
// INCREMENT COLOR GREEN
for (int j = 0; j < 255; j++) {
    col_green++;
    PRINT
    fflush(stdout);
    msleep(control);
}
// DECREMENT COLOR RED
for (int k = 0; k < 255; k++) {
    col_red--;
    PRINT
    fflush(stdout);
    msleep(control);
}
// INCREMENT COLOR BLUE
for (int l = 0; l < 255; l++) {
    col_blue++;
    PRINT
    fflush(stdout);
    msleep(control);
}
// DECREMENT COLOR GREEN
for (int m = 0; m < 255; m++) {
    col_green--;
    PRINT
    fflush(stdout);
    msleep(control);
}
// INCREMENT COLOR RED
for (int n = 0; n < 255; n++) {
    col_red++;
    PRINT
    fflush(stdout);
    msleep(control);
}
// DECREMENT COLOR BLUE
for (int o = 0; o < 255; o++) {
    col_blue--;
    PRINT
    fflush(stdout);
    msleep(control);
}

printf("\033[0m");
return 0;
}