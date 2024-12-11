#ifndef MATHLIB_H_
#define MATHLIB_H_

#include <string> 
template <typename Type>
Type sum(Type a, Type b) 
{
    return a + b;
}

template <typename Type>
Type sub(Type a, Type b) 
{
    return a - b;
}

template <typename Type>
Type multiply(Type a, Type b) 
{
    return a * b;
}

template <typename Type>
std::string div(Type a, Type b) 
{
    if (b == 0) 
    {
        return "Can't divide by Zero.";
    }
    return std::to_string(a / b); // Convert the result of the division to string
}

// Specialization for int type to return a float result
template <>
std::string div<int>(int a, int b) 
{
    if (b == 0) 
    {
        return "Can't divide by Zero.";
    }
    return std::to_string(static_cast<float>(a) / static_cast<float>(b)); // Return float result as a string
}

#endif
