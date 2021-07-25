void main()
{
    int a = 2;
    int b = 8;
    int temp;

    void swap(int *a, int *b)
    {
        temp = *a;
        *a = *b;
        *b = temp;
    }
    

    swap(&a, &b)


    print("a = %d", &a);
    print("b = %d", &b);

}