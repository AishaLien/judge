#include <stdio.h>
int cipher(int key, int num) {
    int cipher_number = 0;
    while (num != 0){
        printf("%d\n", key);
        key = (key + (num % 10)) % 10;
        cipher_number =  cipher_number * 10 + key;
        num = num / 10;
    }
    return cipher_number;
}

int main()
{
    int key, num;
    scanf("%d",&key);
    scanf("%d",&num); 
    printf("%d\n", cipher(key, num));
}
