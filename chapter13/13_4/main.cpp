#include "benevelent.h"

int main()
{
    Port port1;
    Port port2("Graham","ruby",20);
    Port port3(port2);
    port1 = port2;
    port1 += 10;
    port3 -= 6;
    // shows
    cout << "port1 :\n";
    port1.Show();
    cout << "port2: \n" << port2 << endl;
    cout << "port3: \n" << port3 << endl;

    VintagePort vp1;
    VintagePort vp2("Gould Campbell",45,"sweetie",1994);
    VintagePort vp3(vp2);
    vp1 = vp2;
    vp1 += 19;
    
    cout << "vp1:\n";
    vp1.Show();
    cout << "vp2:\n";
    vp2.Show();
    cout << "vp3:\n" << vp3 << endl;

    return 0;
}