#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*�P�_�O�_�����*/
int isprime(int n){
    int i = n-1;
    while(i > 1){
        if(n%i==0){
            return 0;
        }
        i--;
    }
    if(n==1){
        return 0;
    }
    return 1;
}
/*�����Ƨ�*/
void sort(int data[],int n){
    int j,i,tmp;
    for(i=1;i<n;i++){
        tmp = data[i];
        j = i-1;
        while(j >= 0 && tmp > data[j]){
            data[j+1]=data[j];
            j=j-1;
        }
        data[j+1]=tmp;
    }
    
}
int main(){
    int head,i,j;
    int other[5];
    srand(time(NULL));
    /*�]�w����*/
    head = rand()%55+1;
    while(isprime(head)!=1){
        head = rand()%55+1;
    }
    /*��X��L���ƥB���P��������*/
    for(i=0;i<5;i++){
        other[i] = rand()%55+1;
        while(other[i]==head){//�L�o�P�����ۦP��
            other[i] = rand()%55+1;
        }
        for(j=i-1;j >= 0;j--){
            if(other[i]==other[j]){
                i--;
                break;
            }
        }
    }
    /*�Ƨ�*/
    sort(other,5);
    printf("����: %02d\n",head);
    printf("��L: ");
    for(i=0;i<5;i++){
        printf("%02d ",other[i]);
    }
}