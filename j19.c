#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void rand_num(int nums[], int n){
    for(int i=0;i<n;i++){
        nums[i]=-11+rand()%20;
    }
}
void output(int nums[], int n){
    for(int i=0;i<n;i++){
            printf("%d ",nums[i]);
    }
}
void top(int nums[], int n){
    int j=0,t=0,m=0,k=0;
    for(int i=0;i<n;i++){
        if(nums[i]>0){
            k++;
        }
        else if(nums[i]<0){
            m++;
        }
         if(nums[i]%2==0){
            j++;
        }
        else if(nums[i]%2==1){
            t++;
        }
    }
    printf("musbat %d ta \n manfiy %d ta\n toq %d ta\n juft %d ta ",k,m,t,j);
}

int main(){
    srand(time(NULL));
    int n;
    printf("son kiriting "); scanf("%d",&n);
    int nums[n];
    rand_num(nums,n);
    output(nums,n);
    top(nums,n);





    return 0;
}