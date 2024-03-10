#include <iostream>
using namespace std ;
int main () {
    
    float nkal, skal, npm, spm, nandat, sandat, nkim, skim, nbim, sbim, nfis, sfis, na, sa, nbi, sbi, ip, n ;
    
    cout <<"Program Menghitung IP semester 1 📃 \nNabiel El Urwatilwutsqa Zalnur \nNIM : 2310432025 \nsift 2 \n\n" ;
    
    
    cout <<"Untuk menghitung ip, isilah bobot nilai mata kuliah sesuai dengan indeks berikut,\nserta masukkan jumlah sks per matakuliah\nA  = 4.00\nA- = 3.75\nB+ = 3.50\nB  = 3.00\nB- = 2.75\nC+ = 2.50\nC  = 2.00\nD  = 1.00\nE  = 0.00\n" ;
    
    cout << "\nbobot nilai kalkulus I : " ; cin >> nkal ; 
    cout << "jumlah sks kalkulus : " ; cin >> skal ; 
    cout << "bobot nilai pengantar matematika : " ; cin >> npm ;
    cout << "jumlah sks pengantar matematika : " ; cin >> spm ;
    cout << "bobot nilai analisis data : " ; cin >> nandat ;
    cout << "jumlah sks analisis data : " ; cin >> sandat ; 
    cout << "bobot nilai bahasa inggris matematika : " ; cin >> nbim ;
    cout << "jumlah sks bahasa inggris matematika : " ; cin >> sbim ; 
    cout << "bobot nilai kimia dasar : " ; cin >> nkim ; 
    cout << "jumlah sks kimia dasar : " ; cin >> skim ;
    cout << "bobot nilai fisika dasar : " ; cin >> nfis ;
    cout << "jumlah sks fisika : " ; cin >> sfis ;
    cout << "bobot nilai Agama : " ; cin >> na ;
    cout << "jumlah sks Agama : " ; cin >> sa ;
    cout << "bobot nilai bahasa indonesia : " ; cin >> nbi ;
    cout << "jumlah sks bahasa indonesia : " ; cin >>sbi ;
     
    ip = ((nkal * skal) + (npm * spm) + (nandat * sandat) + (nbim * sbim ) + (nkim * skim ) + (nfis * sfis) + (na * sa) + (nbi * sbi)) / (skal + spm + sandat + sbim + skim + sfis + sa + sbi) ;
    
    cout << "\nip semester 1 adalah  " << ip ;
    return 0 ;
  
     
     
     
        
         
         
    
    
}