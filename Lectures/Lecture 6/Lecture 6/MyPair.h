#pragma once
template <class PairType>
class mypair {
    PairType a;
    PairType b;
public:
    mypair(PairType _a, PairType _b)
    {
        a = _a;
        b = _b;
    }
    PairType getmax();
};

template <class PairType> // have to put this before each method
PairType mypair<PairType>::getmax()
{
    PairType returnVal;
    if (a > b)
    {
        returnVal = a;
    }
    else
    {
        returnVal = b;
    }
    return returnVal;
}

