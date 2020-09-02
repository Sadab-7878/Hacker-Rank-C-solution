#include<stdio.h>
int main()
{
    char ch;
    char s[100];
    char s1[200];


    scanf("%c", &ch);
    scanf("%s",s);
    scanf("\n");
    gets(s1);
    printf("%c\n", ch);
    printf("%s\n",s);
    puts(s1);

    return 0;

}
