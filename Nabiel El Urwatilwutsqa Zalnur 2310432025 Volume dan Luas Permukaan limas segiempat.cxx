#include <iostream>
using namespace std ;

int main () {
    float panjang, tinggi, alas, x, n, se, segi, c,volume, luas ; 
    
    
    cout <<"Program Menghitung Volume dan Luas permukaan limas segi empat\nNabiel El Urwatilwutsqa Zalnur \nNIM : 2310432025 \nsift 2 \n\n" ;
    
    cout <<"Panjang sisi limas : " ; cin >> panjang ;
    cout <<"Tinggi limas       : " ; cin >> tinggi ;
    
    volume = ((panjang * panjang) * tinggi ) / 3 ;
    
    x = (panjang/2) ;
    n = ((x*x)+(tinggi*tinggi)) ;
    c = sqrt (n);
    se = (c*panjang)/2 ;
    segi = 4 * se ;
    alas = panjang*panjang ; 
    luas = segi + alas ;
    
    cout << "\nvolume limas = " << volume ;
    cout << "\nluas permukaan limas = " << luas ;
    return 0 ;
    
    
    
}
