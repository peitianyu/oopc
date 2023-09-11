#ifndef __OOPC_H__
#define __OOPC_H__

#define CLASS(type)  typedef struct type type; struct type                        
#define CLASS_FUNC(func_name, ...) (*func_name)(void* cthis, ##__VA_ARGS__)

#endif // __OOPC_H__