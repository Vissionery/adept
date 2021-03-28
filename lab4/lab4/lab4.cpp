#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    double re, im,z;
    cout << "Введите \"Комплексное число\" в виде:\n-действительной\n-мнимой\nчастей комплексного числа:\nre = ";
    cin >> re;
    cout << "im = ";
    cin >> im;
    Complex z(re, im);
    cout << "z = " << z;
}
class Complex
{
private:
    double re;
    double im;
public:
    double Re() const;
    double Im() const;
    double R() const;
    double Phi() const;
    class umolch
    {
    public:
        umolch()
        {
            x = y = 0;
            z = 0.0;
        }
        /* Ранее определённые функции опущены */
    private:
        int x;
        int y;
        double z;
    };
    class preobr
    {
    public:
        preobr(int a)
        {
            x = a;
            y = a;
            z = a;
        }
        /* Ранее определённые функции опущены */
    private:
        int x;
        int y;
        double z;
    };
    class inic
    {
    public:
        inic(int a, int b, double c)
        {
            x = a;
            y = b;
            z = c;
        }
        /* Ранее определённые функции опущены */
    private:
        int x;
        int y;
        double z;
    };
    double Re() const
    {
        return this->re;
    }

    double Im() const
    {
        return this->im;
    }
    Complex y(const Complex& z);
    return i + z * sh(1 + z);
    Complex sin(const Complex& z);
    return sin(z);
    Complex cos(const Complex& z);
    return cos(z);
    Complex ch(const Complex& z);
    return ch(z);
    Complex sh(const Complex& z);
    return sh(z);
    Complex exp(const Complex& z);
    return exp(x);
    Complex pow(const Complex& z1, const Complex& z2);
    return pow(z1,z2)
};