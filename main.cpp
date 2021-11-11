#include <iostream>
#include ".\Scissors.hpp"
#include ".\Forceps.hpp"
using namespace std;
int main(){
    Scissors s( 22, Vannas, true );

    cout << s.getLen() << endl;
    cout << s.getType() << endl;
    s = ((( s + "bazoo" ) + "zanoo" ) + "cheshm" ) ;
    s = s - "zanoo";
    s.ListCutObjects();

    cout << endl << endl;
    
    Forceps f( 20, Kelly_hemostats, "big" );

    f.setLen( 50 );
    cout << f.getLen() << endl;
    cout << f.getType() << endl;
    f = ((( f + "control_blood_flow" ) + "hold_tissue" ) + "compress_blood_vessels" );
    f = f - "hold_tissue";
    f.ListApplications();
    return 0;
}