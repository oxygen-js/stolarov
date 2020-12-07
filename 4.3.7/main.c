int f()
{
    int z = 2;
    static int b = 3;
    return 2;
}

int main()
{
    int x, y;
    int *p, *q, *b;

    x = 25;
    y = 26;
    p = &x;
    q = &y;

    b = p;

    *b = *q;

}