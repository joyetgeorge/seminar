void main()
{
    int a = 2;
    int b = 8;

    int temp = a;
    a = b;
    b = temp;


    print("a = %d", &a);
    print("b = %d", &b);

}
