#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int equalSum(long long a, long long b, int i, int j)
{
    int temp1 = a;
    int temp2 = b;

    for(int c = 0; c < j; c++)
        temp1*=10;
    temp1 += b;
    for(int c = 0; c < i; c++)
        temp2*=10;
    temp2 += a;

    return temp1<temp2?1:-1;
}

int compare(const int *a, const int *b)
{
    long long num1 = *a;
    long long num2 = *b;
    int i = 1;
    int j = 1;
    while(num1/10)
    {
        num1 /= 10;
        i++;
    }
    while(num2/10)
    {
        num2 /= 10;
        j++;
    }
    if(num1<num2)
        return 1;
    else if(num1>num2)
        return -1;
    else
        return equalSum(*a, *b, i, j);

}

// numbers_len은 배열 numbers의 길이입니다.
char* solution(int numbers[], size_t numbers_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(1000000);
    char temp[6];
    qsort(numbers, numbers_len, sizeof(int), compare);
    for(int i = 0; i < numbers_len; i++)
    {
        sprintf(temp, "%d", numbers[i]);
        strcat(answer, temp);
    }
    if(!atoi(answer))
        strcpy(answer, "0");

    return answer;
}
