#include <stdio.h>
#include <math.h>

float calculateCharges(float H);

int main(){
    float hr1,hr2,hr3,charge1,charge2,charge3;
    int count;

    for(count=0; count <3; count++){
        printf("Enter hours: ");
        scanf("%f",&hr1);
        charge1 = calculateCharges(hr1);

        printf("Enter hours: ");
        scanf("%f",&hr2);
        charge2 = calculateCharges(hr2);

        printf("Enter hours: ");
        scanf("%f",&hr3);
        charge3 = calculateCharges(hr3);

        printf("Cars\tHours\tCharge\n");
        printf("1\t%.1f\t%.2f\n",hr1,charge1);
        printf("2\t%.1f\t%.2f\n",hr2,charge2);
        printf("3\t%.1f\t%.2f\n",hr3,charge3);
        printf("TOTAL\t%.1f\t%.2f\n",hr1+hr2+hr3,charge1+charge2+charge3);

        return 0;
    }
}

float calculateCharges(float H){
    float C;
    if(H<=3){
        C=2.0;
    }
    else{
        C=2+ceil(H-3)*0.5;
    }
    if(C>10){
        C=10;
    }
    return C;
}