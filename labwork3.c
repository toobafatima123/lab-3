#include <stdio.h>
#include <string.h>
void swap(int *num1,int *num2){
    int a=*num1;
    *num1=*num2;
    *num2=a;
    
}
int main(){
    //exercise 1
    int num1,num2;
    printf("enter num 1:");
    scanf("%d",&num1);
    printf("\nenter num 2:");
    scanf("%d",&num2);
    swap(&num1,&num2);
    printf("number 1:%d \nnumber 2:%d",num1,num2);

    //exercise 2
    printf("\nenter a string:\n");
    char strng[100];
    scanf("%s",strng);
    printf("\nereversed string:\n");
    for (int i=(strlen(strng)-1);i>=0;i--){
        char *ptr=strng;
        printf("%c",*(ptr+i));
    }
    //exercise 3
    printf("\nenter a lenght of array:\n");
    int n;
    scanf("%d", &n);
    printf("\nenter a elements of array:\n");
    int arr[n];
    int *pointr=arr;
    for (int j=0;j<n;j++){
        scanf("\n%d",&pointr[j]);
        
    }
    printf("\n elements of array:\n");
    for (int k=0;k<n;k++){
        printf("\n%d",*(pointr+k));
        
    }
    //exercise 4
    int arry[5]={1,2,3,4,5};
    printf("enter number for search:");
    int num;
    scanf("%d",&num);
    int *p=arry;
    for (int m=0;m<5;m++){
        if (*(p+m)==num){
            printf("element found in array:%d",num);
            break;
        
        }
        
    }
    //exercise 5
    printf("\nenter a elements of matrix 1:\n");
    int mat1[3][3];
    for (int j=0;j<3;j++){
        for (int k=0;k<3;k++){
            printf("enter element of row %d and col %d: ",j,k);
            scanf("\n%d",&mat1[j][k]);
        
    }
    }
    printf("\nenter a elements of matrix 2:\n");
    int mat2[3][3];
    for (int j=0;j<3;j++){
        for (int k=0;k<3;k++){
            printf("enter element of row %d and col %d: ",j,k);
            scanf("\n%d",&mat2[j][k]);
        }
    }
    printf("\nsum of the matrix is:\n");
    int *mtr1=mat1;
    int *mtr2=mat2;
    for (int j=0;j<9;j++){
        printf("%d\n",*(mtr1+j) + *(mtr2+j));
        }
    
    
    return 0;
}