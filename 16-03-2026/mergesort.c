#include<stdio.h>
int main (){
    int n;
    //printf("Enter the value of n: ");
    int a[20], b[20];
    int low, high, mid, i, j,k;
    printf("\nEnter LOW: ");
    scanf("%d", &low);
    printf("\nEnter HIGH: ");
    scanf("%d", &high);
    printf("\nEnter the values of the array 1: \n");
    for(i=low; i<=mid;i++){
        printf("\nEnter the element: ");
        scanf("%d",&a[i]);
    }
    mid=(low+high)/2;

    printf("\nEnter the values of the array 2: \n");
    for(j=mid+1; i<=high;j++){
        printf("\nEnter the element: ");
        scanf("%d",&a[j]);
    }
    for(i=low; i<=mid;i++){
        for(j=mid+1;j<=high;j++){
            if(a[i]<a[j]){
                b[k]=a[i];
                k++;
            }else if(a[i]>a[j]){
                b[k]=a[j];
                k++;
            }
        }
    }
    while(i<=mid){
        b[k]=a[i];
        i++;
        k++;
    }
    while(j<=high){
        b[k]=a[j];
        j++;
        k++;
    }
    for(k=low;k<=high;k++){
        printf("%d ",b[k]);
    }
    return 0;
}
