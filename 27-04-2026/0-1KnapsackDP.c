#include<stdio.h>
#include<time.h>
int maximum(int x, int y){
    if(x>y){
        return x;
    }
    else{
        return y;
    }
}
int KnapsackDP(int M,int n,int W[],int P[]){
    int Table[n+1][M+1];
    for(int i=0;i<n;i++){
        Table[i][0]=0;
    }
    for(int j=0;j<=M;j++){
        Table[0][j]=0;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=M;j++){
            if(j<W[i-1]){
                Table[i][j]=Table[i-1][j];
            }
            else{
                Table[i][j] = maximum( Table[i-1][j], P[i-1] + Table[i-1][j - W[i-1]]);
            }
        }
    }
    return Table[n][M];
}

int main(){
    int n;
    printf("Enter the number of objects: ");
    scanf("%d",&n);
    int M;
    printf("Enter the size of the Knapsack: ");
    scanf("%d",&M);
    int W[n], P[n];
    printf("Enter the Weights and their respective Profits: \n");
    for(int i=0;i<n;i++){
        scanf("%d %d",&W[i], &P[i]);
    }
    clock_t start,end;
    start = clock();
    int res=KnapsackDP(M,n,W,P);
    end=clock();
    float time=(double)(end-start)*1000/CLOCKS_PER_SEC;
    printf("The maximum profit obtained is: %d",res);
    printf("\nTime: %.2f", time);
    return 0;
}
