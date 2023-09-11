#include <stdio.h>

#include "c_oopc.h"

void main()
{
    BASE base = base_init(3, 4);
    base.print(&base);

    DERIVED derived = derived_init(5, 6);
    derived.base.print(&derived);

    printf("derived.add(1, 2) = %d\n", derived.add(&derived, 1, 2));
}