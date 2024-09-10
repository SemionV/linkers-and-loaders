#pragma once

template<class TNumber>
class GenericService
{
public:
    TNumber add(TNumber a, TNumber b)
    {
        return a + b + b + b;
    }
};