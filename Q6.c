// #include <stdio.h>
// #include <stdlib.h>

// void concate(char *s1, char *s2)
// {
//     int i=0;
//     while(*(s1 +i) != '\0')
//     {
//         printf("%c", *(s1 +i));
//         i++;
//     }
//     int j=0;
//     while(*(s2+j) != '\0')
//     {
//         printf("%c", *(s2 +j));
//         j++;
//     }
// }

// int main()
// {
//     int len1, len2;

//     printf("Enter length of string1: ");
//     scanf("%d", &len1);

//     char *s1 = malloc((len1+1)*sizeof(char));

//     printf("Enter string1: ");
//     gets(s1);

//     printf("Enter length of string2: ");
//     scanf("%d", &len2);

//     char *s2 = malloc((len2+1)*sizeof(char));
    
//     printf("Enter string2: ");
//     gets(s2);


//     concate(s1, s2);
//     return 0;
// }

#include <stdio.h>

void concate(char s1[], char s2[])
{
    int i=0;
    while(*(s1 +i) != '\0')
    {
        printf("%c", *(s1 +i));
        i++;
    }
    int j=0;
    while(*(s2+j) != '\0')
    {
        printf("%c", *(s2 +j));
        j++;
    }
}

int main()
{
    int len1, len2;

    printf("Enter length of string1: ");
    scanf("%d", &len1);

    char s1[len1 +1];

    printf("Enter string1: ");
    fflush(stdin);
    gets(s1);

    printf("Enter length of string2: ");
    scanf("%d", &len2);

    char s2[len2 +1];
    
    printf("Enter string2: ");
    fflush(stdin);
    gets(s2);


    concate(s1, s2);
    return 0;
}
