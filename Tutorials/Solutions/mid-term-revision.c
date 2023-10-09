//past year (Question 2)

//(a)

// #include <stdio.h>

// int main(){

//     int num;

//     printf("Enter an integer: ");
//     scanf("%d",&num);

//     int rem = num%2;

//     switch (rem){
//         case 0:
//         printf("Even");
//         break;

//         case 1:
//         printf("Odd");
//         break;
//     }
//     return 0;
// }

// ----------------------------------------------------------------------------------------

// (b)

// #include <stdio.h>

// int main(){
//     int num,arr[5],count;
//     int n=0;

//     for(count=0;count<5;count++){
//         printf("Enter integer: ");
//         scanf("%d",&num);
    
//         if(num>500){
//             arr[n] = num;
//             n++;
//         }
//     }
//     for(count=0;count<n;count++){
//         printf("%d\n",arr[n]);
//     }
//     return 0;
// }

// ----------------------------------------------------------------------------------------

// (c)

// #include <stdio.h>

// int main(){
//     int H,count;

//     printf("Enter height: ");
//     scanf("%d",&H);

//     while (count < H){
//         printf("*\n");
//         count++;
//     }
// }

// ----------------------------------------------------------------------------------------

// Questi0on 2 (a)

// #include <stdio.h>

// int main(){
//     int arr1[5],arr2[5];
//     int x,n1,n2,m;
//     n2=0;

//     while (x<5){
//         printf("Enter an integer: ");
//         scanf("%d",&arr1);

//         for(n1=0;n1<5;n1++){
//             if(arr1[n1]>10){
//                 arr2[n2]=arr1[n1];
//                 n2++;
//             }
//         } 
//         x++;
//     }
//     for(x=0;x<=n2;x++){
//         printf("%d\n",arr2[n2]);
//     }


//     return 0;
// }

// ----------------------------------------------------------------------------------------

//  (c)

#include <stdio.h>

int main(){
    int H,row,col;

    printf("Enter height: ");
    scanf("%d",&H);

    for(row=0;row<H;row++){     
        if(row==0 || row==H-1){         //1st and Last row
            for(col=0;col<H;col++){
                printf("*");
            }
        }
    }
}