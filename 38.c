
#include <stdio.h>
int main()
{
    int i = 65;
    int k = 130;
    printf(" value of i,k%d%d ", i, k);

    i = i ^ k;
    k = i ^ k;
    i = i ^ k;
    printf("value of  after swap i,k%d%d", i, k);
}
