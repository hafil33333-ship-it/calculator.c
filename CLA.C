#inculude <stdio.h>
int main()
{
    char op; flot a, b;
    printf("Enter expression (e.g. 5 + 3): ");
    scanf("%f %c %f", &a, &op, &b);
    switch (op)
    {
       case '+':print("=%.2f\n", a+b); break;
       case '-':print("=%.2f\n", a-b); break;
       case '*':print("=%.2f\n", a*b); break;
       case '/':
	    if (b != 0) print("= %.2f\n", a / b);
	    else        print("Division by zero!\n");
	    break;
       default:print("Inavlid operator\n");
}
retun 0;
}