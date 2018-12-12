# Mutable Variables

The mutable storage class specifier in C++ (or use of mutable keyword in C++)
auto, register, static and extern are the storage class specifiers in C. typedef is also considered as a storage class specifier in C. C++ also supports all these storage class specifiers. In addition to this C++, adds one important storage class specifier whose name is mutable.

GeeksForGeeks.org

-----
## Sample1.cpp
Wrong Code:
```C++
    const Sample sample(10,10);
    cout<<"X:\t"<<sample.x<<endl;
    sample.y += 10;
    cout<<"X:\t"<<sample.x<<endl;
```