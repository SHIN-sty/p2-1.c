#include <stdio.h>

#define MAX_SIZE 100

float sum(float [], int);
float input[MAX_SIZE], answer;
int i;
int main(void)
{
    for(i=0; i < MAX_SIZE; i++)
        input[i] = i;
    //input�� �޸𸮻��� �ּ��̰� input�� MAX_SIZE��ŭ element���� �ְ�
    // sum���� input�� ���°� input�� �ּҰ� sum���� �Ѿ��.
    // list��� ������ input�� �ּҰ� ������ MAX_SIZE 100�� n�� ���´�.

    /* for checking call by reference */
    printf("address of input = %p\n", input);
    // sum�� ȣ���߾����� �Ű������� list�� input�� �ּҸ� �޾Ҵ�.
    // list�� ���� input�� �ּҰ� ���Դ�. -> �ּҰ��� �Ѿ�Դ�.

    answer = sum(input, MAX_SIZE);
    printf("The sum is: %f\n", answer);
    printf("���¾�\n");
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
