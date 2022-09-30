#include<stdio.h>
main()
{
    char x;
    printf("enter any alphabet");
    scanf("%c",&x);
    if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
    {
        printf("alphabet is vowel");
    }
    else
    {  printf("alphabet is consonant");
    }
    return 0;
}