#include <iostream>
using namespace std;
class F
{
public:
    F(int m = 1, int d = 1, int a = 1900, int ho = 1, int mi = 1, int se = 1)
    {
        this->m = m;
        this->a = a;
        this->d = d;
        this->ho = ho;
        this->mi = mi;
        this->se = se;
    }
    F &operator++(int)
    {
        d++;
        return *this;
    }
    F operator--()
    {
        d--;
        return *this;
    }
    F &operator+(int)
    {
        ++d;
        return *this;
    }
    F operator-()
    {
        --d;
        return *this;
    }

private:
    unsigned int m, d, a, ho, mi, se;
    friend int main();
};

enum operacion
{
    Suma,
    Resta
};

int main()
{
    F f;
    operacion eleccion;
    int seleccion;
    cout << "Eliga uno:\n1. Mes\n2. Dias\n3. Año\n4. Hora \n5. Minuto \n6. Segundo" << endl;
    cin >> seleccion;

    switch (seleccion)
    {
    case 1:
    {
        int selec_op;
        cout << "Eliga uno:\n1. Suma\n2. Resta" << endl;
        cin >> selec_op;
        if (selec_op == 1)
        {
            eleccion = Suma;
        }
        else if (selec_op == 2)
        {
            eleccion = Resta;
        }
        else
        {
            cout << "No se puede elegir eso" << endl;
        }

        break;
    }
    case 2:
    {
        int selec_op;
        cout << "Eliga uno:\n1. Suma\n2. Resta" << endl;
        cin >> selec_op;
        if (selec_op == 1)
        {
            eleccion = Suma;
        }
        else if (selec_op == 2)
        {
            eleccion = Resta;
        }
        else
        {
            cout << "No se puede elegir eso" << endl;
        }
        break;
    }
    case 3:
    {
        int selec_op;
        cout << "Eliga uno:\n1. Suma\n2. Resta" << endl;
        cin >> selec_op;
        if (selec_op == 1)
        {
            eleccion = Suma;
        }
        else if (selec_op == 2)
        {
            eleccion = Resta;
        }
        else
        {
            cout << "No se puede elegir eso" << endl;
        }
        break;
    }
    case 4:
    {
        int selec_op;
        cout << "Eliga uno:\n1. Suma\n2. Resta" << endl;
        cin >> selec_op;
        if (selec_op == 1)
        {
            eleccion = Suma;
        }
        else if (selec_op == 2)
        {
            eleccion = Resta;
        }
        else
        {
            cout << "No se puede elegir eso" << endl;
        }
        break;
    }
    case 5:
    {
        int selec_op;
        cout << "Eliga uno:\n1. Suma\n2. Resta" << endl;
        cin >> selec_op;
        if (selec_op == 1)
        {
            eleccion = Suma;
        }
        else if (selec_op == 2)
        {
            eleccion = Resta;
        }
        else
        {
            cout << "No se puede elegir eso" << endl;
        }
        break;
    }
    case 6:
    {
        int selec_op;
        cout << "Eliga uno:\n1. Suma\n2. Resta" << endl;
        cin >> selec_op;
        if (selec_op == 1)
        {
            eleccion = Suma;
        }
        else if (selec_op == 2)
        {
            eleccion = Resta;
        }
        else
        {
            cout << "No se puede elegir eso" << endl;
        }
        break;
    }
    default:
        cout << "No se puede elegir eso" << endl;
        break;
    }
}