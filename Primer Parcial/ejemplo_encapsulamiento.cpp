#include <iostream>

using namespace std;

class persona
{
public:
    string Nombre;
};

int main()
{
    persona unapersona;

    unapersona.Nombre = "Jhonatan";
    cout<< unapersona.Nombre;
 return 0;
}
