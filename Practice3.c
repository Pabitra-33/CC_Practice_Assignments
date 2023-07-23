//Accepts the number of inputs/test cases as't'the only line of each test case contains 2 integers - declare them as variables A and B
#include <stdio.h>
int main() {
    int t,A,B;
    int P,S;
    int i = 1;
    scanf("%d", &t );
    while (i <= t){
        scanf("%d %d", &A,&B);
        S = A + B;
        P = A * B;
        printf("%d %d \n", S,P );
        i = i+1;
    }
    return 0;
}
