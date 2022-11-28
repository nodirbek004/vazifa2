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
    puts("");
}

void manfiy(int nums[], int n){
    int sum=0;
    for(int i=0;i<n;i++){
        if(nums[i]<0){
            break;
            sum+=nums[i];
        }


        printf("%d ",n

ums[i]);
    }
    printf("\n%d",sum);
}
int main(){
    int n;
    printf("qatorimi kiriting"); scanf("%d",&n);
    int nums[n];


    rand_num(nums,n);
    output(nums,n);
    manfiy(nums,n);




    return 0;
}