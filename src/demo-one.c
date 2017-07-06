//
// Created by Megatron on 2017/7/6.
//有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？

#include <stdio.h>

int main(){
    int j,p,k,l;
    for(j=1;j<5;j++){
        for(p=1;p<5;p++){
            for(k=1;k<5;k++){
                if(j!=p && p!=k && j!=k){
                    printf("结果:%d-%d-%d\n",j,p,k);
                    l++;
                }
            }
        }
    }

    printf("共计%d组",l);
    return 0;
}

