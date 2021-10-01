// Question: TO TELL WHETHER THE NUMBER IS ANGSTROM OR NOT USING FUNCTIONS  

//Function to calculate power:
int power(int x, int y)
{
    int result = 1;
    while (y > 0) 
    {
        result *= x;
        y --;
    }
    return result;
}

//Function for checking Armstrong Number
int isArmstrong(int num)
{
    int n = 0, x = num;
    while (x) {
        n++;
        x = x / 10;
    }
    int temp = num, sum = 0;
    while (temp) {
        int r = temp % 10;
        sum += power(r, n);
        temp = temp / 10;
    }

    if (sum == num)
        return 1;
    else
        return 0;
}

//Driver Code
int main()
{
    int num = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isArmstrong(num) == 1)
        printf(" %d is an Armstrong number.\n", num);
    else
        printf(" %d is not an Armstrong number.\n", num);
    return 0;
}
