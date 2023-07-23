//You will attend tuitions for X weeks, and the cost of tuition per week is Y dollars.You need to compute and output your total tuition fees.
#include <stdio.h>
int main() {
    int t,X,Y;
    int i = 1;
    scanf("%d", &t );
    while (i <= t){
        scanf("%d %d", &X,&Y);
        printf("%d \n",X*Y);
        i = i+1;
    }
    return 0;
}