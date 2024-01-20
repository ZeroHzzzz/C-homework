#include<cstdio>
using namespace std;
int flag = 0;
int x=0;
unsigned int reverse( unsigned int number ){
   if(number%10!=0||x!=0) {printf("%d",number%10);x++;}
   number=number/10; 
   if(number<9) return number;
   reverse(number);
}

int main()
{
    unsigned int n;
 
    scanf("%u", &n);
    printf("%u\n", reverse(n));
    return 0;
}
