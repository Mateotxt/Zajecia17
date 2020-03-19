#include <iostream>

using namespace std;

class DzikaKlasa
{
    int a;
    double b;
    void fun1(int a){}
    /// dotad jest domyslnie dostep prywatny

protected:
    char m;
    void fun2(bool b){}
    /// dotad jest dostep protected

public:
    int x;
    void fun3(string c){}
    /// dotad jest dostep publiczny

private:
    int d;
    /// dotad jest dostep prywatny

public:
    void fun4(double d){}
    ///dotad jest dostep publiczny
};
