//track.c
//Judge Solution to track
//Author: Antony Stabile

#include <stdio.h>
#include <stdlib.h>

#define PI 3.141592653589793

int main() {
   int n,l,r1,r2,m,z,i; //variables as described in the input
   freopen("track.in","r",stdin); //open the file
   scanf("%d",&n);
   for(i=1; i<=n; i++) {
      scanf("%d %d %d %d %d", &l, &r1, &r2, &m, &z);
      printf("Track #%d: ", i); //case header
      //The length of a half circle is PI*R
      //Since a single lap is two half circles and two straightaways,
      //the formula for the total distance is as follows:
      double mack = 2.0*(PI*r1 + l)*m;
      double zack = 2.0*(PI*r2 + l)*z;
      if(mack > zack)
         printf("Drats!\n");
      else
         printf("I've run %.0lf more meters than Mack!!!\n", zack-mack);
         //printf performs the rounding rule by default
   }
   return 0;
}
