#include <stdio.h>
int prime(int x){//�P�_�O�_�����
    int i;
    if(x == 2)
        return 1;
    for (i = 2; i < x; i++)
        if(x % i == 0)
            return 0;
    return 1;
}
void primeDiv(int n){
    int i,tmp,times[n],count=0;
    for(i = 2; i <= n; i++){
        tmp = n;
        times[i-1] = 0;
        if(prime(i) && n % i == 0){//�O��ƥB�i�H�㰣
            while(tmp % i == 0){
                times[i-1]++;//���������
                tmp /= i;//���ƭ�
            }
        }
        else{//���O��ƴN�~��
            continue;
        }
    }
    for(i = 1; i < n; i++){//�L�X����
        if(times[i] > 0){
            printf("%d",i+1);
            if(times[i] > 1)
                printf("^%d",times[i]);
            printf(" ");
        }
    }
    printf("\n");
}
int main(){
    int n;
    scanf("%d",&n);
    primeDiv(n);
    return 0;
}
