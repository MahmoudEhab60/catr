#include <stdio.h>
int main (){

int x =5 , y=7 , z=10;
int *px = &x , *py = &y , *pz = &z;

printf(" %d  %d %d %d %d %d %d %d %d \n",x, y, z, px, py, pz, *px, *py, *pz); 

printf(" \n Swapping pointers \n");
pz = px; px = py; py = pz;
printf(" \n %d  %d %d %d %d %d %d %d %d",x, y, z, px, py, pz, *px, *py, *pz); 




}