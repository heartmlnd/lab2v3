#include <iostream>
#include <cmath>

#define _USE_MATH_DEFINES

using namespace std;

int main()
{
    int first,second; // хранить число итераций каждого выражения

    double sum = 0, e, sl;
    int k = 1, znak = 1;
    cout<<"E="; cin>>e;
    int n = 0;
    // высчитываем первый PI
    do
    {
        sl = 4.0 / k;
        sum += sl*znak;
        k += 2;
        znak *= -1;
        ++n;
    } while (sl >= e);
    first = n;

    cout << "---------------------------------" <<endl;
    cout << "The calculation is over. Results:" <<endl;
    cout << "The first expression:" << endl;
    cout << " The resulting sum of all terms: " << sum << " | " << "The required amount with the specified accuracy: " << M_PI <<endl;
    cout << " Number of iteration: " << n << endl;

    sum = 3;
    sl = 0;
    k = 0;
    int a = 2;
    int b = 3;
    int c = 4;
    znak = 1;
    n = 0;
    // высчитываем второй PI
    do
    {
        sl = (4.0) / k;
        sum += sl*znak;
        k = a*b*c;
        znak *= -1;
        ++n;
        a += 2;
        b += 2;
        c += 2;
    } while (sl >= e);
    second = n;

    cout << endl;
    cout << "The second expression:" <<endl;
    cout << " The resulting sum of all terms: "<< sum << " | " << "The required amount with the specified accuracy: " << M_PI <<endl;
    cout << " Number of iterations: " << n <<endl;
    cout << endl;

    if (first < second){
        cout << "Conclusion: the first expression is better in terms of convergence rate.";
    } else {
        cout << "Conclusion: the second expression is better, in terms of convergence rate.";
    }

    return 0;
}