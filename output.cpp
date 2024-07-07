
#include<stdio.h>  
int main() 
{
int x=4,y=9; 
int z; 
z=(x++)+(--y) +y; 
printf("value-%d\n",z);
 z=(--x)+x+(y--); 
 printf("value-%dn",z);
 
}
