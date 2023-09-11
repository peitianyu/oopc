#include "c_oopc.h"
#include <stdio.h>

/*
1. 成员函数一般通过static实现后, 传给class
2. 对于向外输出函数并不使用static, 但是需要在头文件中声明
3. 命名方式则是以class+func_name的方式命名(继承的重写函数使用继承class+func_name的方式命名)
*/


static BASE base_constructor(void* cthis, int a, int b)
{
    BASE* this = (BASE*)cthis;
    this->a = a;
    this->b = b;
    return *this;
}

static void base_print(void* cthis)
{
    BASE* this = (BASE*)cthis;
    printf("a = %d, b = %d\n", this->a, this->b);
}

BASE base_init(int a, int b)
{
    BASE base;
    base.constructor = base_constructor;
    base.print = base_print;
    base.constructor(&base, a, b);
    return base;
}

static void derived_print(void* cthis)
{
    BASE* this = (BASE*)cthis;
    printf("a = %d, b = %d\n", this->a, this->b);
}

static int derived_add(void* cthis, int a, int b)
{
    BASE* this = (BASE*)cthis;
    return a + b;
}

DERIVED derived_init(int a, int b)
{
    DERIVED derived;
    derived.base = base_init(a, b);
    derived.base.print = derived_print;

    derived.add = derived_add;
    return derived;
}


