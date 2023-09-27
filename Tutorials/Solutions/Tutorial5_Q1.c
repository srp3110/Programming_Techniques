#include <stdio.h>

int main(){
    int mark[10],n;

    for(n=0;n<10;n++){
        printf("Enter marks: ");
        scanf("%d",&mark[n]);
    }
    printf("Student\tMarks\n");

    for(n=0;n<10;n++){
        printf("%d\t%d\n",n+1,mark[n]);
    }
    return 0;
}