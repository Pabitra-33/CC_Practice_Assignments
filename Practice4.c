//Write a program in the IDE which does the following accepts the count of test casest is in the 1st line the only line of each test case consists of an integer N.You need to generate the following output - Change the sign of N.

#include <stdio.h>

int main() {
    int t;
    int N;
    int i = 1;
    //accept the count of test cases given in the 1st line
    scanf("%d\n", &t );
    //run a loop to accept 't' inputs
    while ( i <= t) {
        //accept 1 integer on the 1st line of each test case
        scanf("%d", &N);
        //output the negative integer - i.e. (-N)
        printf("%d\n", (-N) );
        i = i+1;
    }
    return 0;
}
