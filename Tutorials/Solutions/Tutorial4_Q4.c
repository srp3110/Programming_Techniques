/*Question 4 - Write a function Distance that calculates the
               distance between two points (x1, y1) and 
               (x2, y2). All numbers and return values should 
               be of type double.
*/

#include <stdio.h>
#include <math.h>

double Dist(double x1, double y1, double x2, double y2);

int main(){
    double x1,y1,x2,y2,d;

    printf("Enter x1: ");
    scanf("%lf",&x1);
    printf("Enter y1: ");
    scanf("%lf",&y1);
    printf("Enter x2: ");
    scanf("%lf",&x2);
    printf("Enter y2: ");
    scanf("%lf",&y2);

    d = Dist(x1,y1,x2,y2);

    printf("The distance between the 2 points is %f",d);

    return 0;
}

double Dist(double x1, double y1, double x2, double y2){
    double D;
    D=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    return D;
}