#include <stdio.h>


void main(void){
   printf("answer:%d", get_1_or_2());

}
int get_1_or_2(void){
    int answer = 0;
    while(answer<1||answer >2)
    {
        printf("Enter 1 for Yes, 2 for No");
        scanf("%d", &answer);
    }
    return answer;
}
