# p2-1.c
homework#3
#include <stdio.h>

#define MAX_SIZE 100

float sum(float [], int);
float input[MAX_SIZE], answer;
int i;
int main(void)
{
    for(i=0; i < MAX_SIZE; i++)
        input[i] = i;
    //input은 메모리상의 주소이고 input은 MAX_SIZE만큼 element들이 있고
    // sum에서 input을 보냈고 input의 주소가 sum으로 넘어간다.
    // list라는 변수에 input의 주소가 들어오고 MAX_SIZE 100이 n에 들어온다.

    /* for checking call by reference */
    printf("address of input = %p\n", input);
    // sum을 호출했었을때 매개변수인 list가 input의 주소를 받았다.
    // list의 값이 input의 주소가 나왔다. -> 주소값만 넘어왔다.

    answer = sum(input, MAX_SIZE);
    printf("The sum is: %f\n", answer);
    printf("신태양\n");
    printf("2017038096\n");
}

float sum(float list[], int n)
{
    
    printf("value of list = %p\n", list);
    printf("address of list = %p\n\n", &list);
    
    
    

    int i;
    float tempsum = 0;
    for(i = 0; i < n; i++)
        tempsum += list[i];
    return tempsum;
}
