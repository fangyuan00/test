int inc(int);
int foo(int a) {
    int b = inc(a);
    if (b > 1)          // 修改点 ②
        return b + 1;   // 修改点 ③
    return 0;
}
