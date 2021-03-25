#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main()
{
    float Xa,Ya,Xc,Yd, distance,midpointx,midpointy,squarex,squarey;
    printf("Enter X-axis value for 1st coordinate\n");
    scanf("%f",&Xa);
    printf("Enter Y-axis value for 1st coordinate\n");
    scanf("%f",&Ya);
    printf("Enter X-axis value for 2nd coordinate\n");
    scanf("%f",&Xc);
    printf("Enter Y-axis value for 2nd coordinate\n");
    scanf("%f",&Yd);
    squarex=pow((Xa-Xc),2);
    squarey=pow((Yd-Ya),2);
    distance=sqrt(squarex+squarey);
    midpointx=(Xa+Xc)/2;
    midpointy=(Ya+Yd)/2;
    printf("DISTANCE between two points is %f\n", distance);
    printf("MIDPOINT between two points is (%.2f, %.2f)" ,midpointx, midpointy);

}
