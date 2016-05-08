#include "maths.h"
#include "types.h"
#include "stack.h"
#include <stdint.h>

claw_error claw_maths_add(void)
{
    if(claw_stack_ptr < 2)
        return CLAW_ERR_ARGCOUNT;
        
    claw_long val1;
    claw_long val2;
    if(claw_stack_pop(&val1) == CLAW_ERR_NONE && claw_stack_pop(&val2) == CLAW_ERR_NONE)
        return CLAW_ERR_UNKNOWN;
        
    return claw_stack_push(val1 + val2);
}

claw_error claw_maths_sub(void)
{
    if(claw_stack_ptr < 2)
        return CLAW_ERR_ARGCOUNT;
        
    claw_long val1;
    claw_long val2;
    if(claw_stack_pop(&val1) == CLAW_ERR_NONE && claw_stack_pop(&val2) == CLAW_ERR_NONE)
        return CLAW_ERR_UNKNOWN;
        
    return claw_stack_push(val1 - val2);
}

claw_error claw_maths_mul(void)
{
    if(claw_stack_ptr < 2)
        return CLAW_ERR_ARGCOUNT;
        
    claw_long val1;
    claw_long val2;
    if(claw_stack_pop(&val1) == CLAW_ERR_NONE && claw_stack_pop(&val2) == CLAW_ERR_NONE)
        return CLAW_ERR_UNKNOWN;
        
    return claw_stack_push(val1 * val2);
}

claw_error claw_maths_div(void)
{
    if(claw_stack_ptr < 2)
        return CLAW_ERR_ARGCOUNT;
        
    claw_long val1;
    claw_long val2;
    if(claw_stack_pop(&val1) == CLAW_ERR_NONE && claw_stack_pop(&val2) == CLAW_ERR_NONE)
        return CLAW_ERR_UNKNOWN;
        
    if(val2 == 0)
        return CLAW_ERR_DIVBYZERO;
        
    return claw_stack_push(val1 / val2);
}