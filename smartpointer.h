#ifndef SMARTPOINTER_H
#define SMARTPOINTER_H

#include <QFrame>

template <typename T>
class SmartPointer
{
    T* p;
public:
    SmartPointer(T *ob)
    {
       p = ob;
    }

    ~SmartPointer()
    {
        delete p;
    }
    T* operator->()
    {
        return p;
    }
    T& operator* ()
    {
        return *p;
    }
};

#endif // SMARTPOINTER_H
