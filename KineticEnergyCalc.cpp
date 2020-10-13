#include <iostream>
#include <math.h>
using namespace std;

double kineticEnergy (int m, int v);
int main ()
{
    double ke=0;
    int m=0;
    int v=0;
    cout<<"Please enter mass (KG)";
    cin >> m;
    cout<<"Please enter velocity(meters/sec)";
    cin>>v;
    ke = kineticEnergy (m,v);
    cout <<"Kinetic Energy of this object is "<<ke<<" in joules."<<endl;
    return 0;
}

double kineticEnergy (int m, int v)
{
    return (0.5 * m) *(pow(v,2));

}
