#ifndef __C_OOPC_H__
#define __C_OOPC_H__

#include "core/oopc.h"

CLASS(BASE)
{
    int a;
    int b;

    BASE CLASS_FUNC(constructor, int a, int b);
    void CLASS_FUNC(print);
};

// 这里为BASE的初始化函数, 用于初始化BASE的成员变量与成员函数
BASE base_init(int a, int b);

CLASS(DERIVED)
{
    BASE base;

    int CLASS_FUNC(add, int a, int b);
};

DERIVED derived_init(int a, int b);

#endif // __C_OOPC_H__
