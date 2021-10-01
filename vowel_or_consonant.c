//Question: Write a program to find whether a character is consonant or vowel using switch statement.
int main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);

    switch(ch)
    {
        case 'a': 
        case 'e': 
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U': 
            printf("Vowel");
            break;

        default: printf("Consonant");
    }

    return 0;
}
