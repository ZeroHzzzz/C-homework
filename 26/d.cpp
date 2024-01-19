#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    char c[255],ch;
    scanf("%s",c);
    int len=strlen(c);
    char *c_p = c;
    char *c_p_end=c + len - 1;
    while(c_p < c_p_end){
        ch=*c_p;
        *c_p = *c_p_end;
        *c_p_end=ch;
        c_p++; 
	    c_p_end--;
    }
    printf("%s",c);
    return 0;
}