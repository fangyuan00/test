int inc(int);
int foo(int a) {
    int b = inc(a);
    if (b > 0)
        return b;
    return 0;
}
