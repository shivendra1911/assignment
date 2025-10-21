#include <stdio.h>
int reverseDigits(int n)
{
    int sum;

    sum = 0;
    while (n != 0)
    {
        sum = (sum * 10) + (n % 10);
        n = n / 10;
    }
    return sum;
}
int isArmstrong(int num)
{
    int a, n, sum;
    n = num;
    sum = 0;
    while (num != 0)
    {
        a = num % 10;
        sum = sum + (a * a * a);
        num = num / 10;
    }
    if (n == sum)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isAdams(int num)
{
    if ((num * num) == reverseDigits((reverseDigits(num) * reverseDigits(num))))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isPrime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int isPrimePalindrome(int num)
{
    if (isPrime(num) && (num == reverseDigits(num)))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int choice, num;
    do
    {
        printf("\n===== MENU =====\n");
        printf("1. Check Armstrong Number\n");
        printf("2. Check Adams Number\n");
        printf("3. Check Prime Palindrome Number\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice == 4)
        {
            printf("Exiting program. Goodbye!\n");
            break;
        }
        printf("Enter a number: ");
        scanf("%d", &num);
        switch (choice)
        {
        case 1:
            if (isArmstrong(num))
                printf("%d is an Armstrong number.\n", num);
            else
                printf("%d is NOT an Armstrong number.\n", num);
            break;
        case 2:
            if (isAdams(num))
                printf("%d is an Adams number.\n", num);
            else
                printf("%d is NOT an Adams number.\n", num);
            break;
        case 3:
            if (isPrimePalindrome(num))
                printf("%d is a Prime Palindrome number.\n", num);
            else
                printf("%d is NOT a Prime Palindrome number.\n", num);
            break;
        default:
            printf("Invalid choice! Please select between 1–4.\n");
        }
    } while (choice != 4);
    return 0;
}