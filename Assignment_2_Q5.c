int main() 
{
    long int num;
    int count = 0, rem;

    printf("Enter a number: ");
    scanf("%ld", &num);

    while (num != 0) 
    {
        rem = num % 10;  
        num = num / 10;  
        count++;         
    }

    printf("%d", count);

    return 0;
}
