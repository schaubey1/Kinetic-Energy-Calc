#include <iostream>
#include <math.h>
using namespace std;

double kineticEnergy (int m, int v);
int main ()
{
    double ke=0;
    int m=0;
    int v=0;
    cout<<"Please enter mass";
    cin >> m;
    cout<<"Please enter velocity";
    cin>>v;
    ke = kineticEnergy (m,v);
    cout <<"Kinetic Energy of this object is"<<ke<<endl;
    return 0;
}

double kineticEnergy (int m, int v)
{
    return (0.5 * m) *(pow(v,2));

}
