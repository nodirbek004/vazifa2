#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void rand_num(int nums[], int n){
    for(int i=0;i<n;i++){
        nums[i]=3+rand()%10;
    }
}
void toldir(int nums[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",nums[i]);
    }
}
void hisob(int nums[], int n){
    int sum=1,a,b;
    for(int i=0;i<n;i++){
        if(nums[i]%2!=0){
            printf("\n%d ",i);
            a=i;
            break;
        }
}

    for(int j=n-1;j>=0;j--){
        if(nums[j]%2==0){ 
            printf("\n%d   ",j);
            b=j;
            break;
        } 
    }
    for(int k=a+1;k<b;k++){
        printf("%d ",nums[k]);
        sum*=nums[k];
    }
    printf("%d",sum);
    }
int main(){ 
    srand(time(NULL));
    int n;
    printf("son k iriting"); scanf("%d",&n);
    int nums[n]; 
    rand_num(nums,n);
    toldir(nums,n);
    hisob(nums,n);




    return 0;
}