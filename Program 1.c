#include<stdio.h>
#include<limits.h>

int main(void)
{
    int anInteger;
    unsigned aUnsignedInteger;
    short int aShortInteger;
    unsigned short int aUnsignedShortInteger;
    long int aLongInteger;
    unsigned long int aUnsignedLongInteger;
    long long int aLongLongInteger;
    unsigned long long int aUnsignedLongLongInteger;

    printf("size of integer:  %llu bytes\n", sizeof(anInteger));
    printf("size of unsigned integer:  %llu bytes\n",sizeof(aUnsignedInteger));
    printf("size of short integer:  %llu bytes\n",sizeof(aShortInteger));
    printf("size of unsigned short integer:  %llu bytes\n",sizeof(aUnsignedShortInteger));
    printf("size of long integer:  %llu bytes\n",sizeof(aLongInteger));
    printf("size of unsigned long integer:  %llu bytes\n",sizeof(aUnsignedLongInteger));
    printf("size of long long integer:  %llu bytes\n",sizeof(aLongLongInteger));
    printf("size of unsigned long long integer:  %llu bytes\n",sizeof(aUnsignedLongLongInteger));

    return 0;
}
