#include<iostream>
using namespace std;

struct tampil{
double tugas,absen,uts,uas;
};
tampil dta;

double data(){
    cout<<"Nilai Tugas : ";cin>>dta.tugas;
    cout<<"Nilai Absen : ";cin>>dta.absen;
    cout<<"Nilai UTS   : ";cin>>dta.uts;
    cout<<"Nilai UAS   : ";cin>>dta.uas;};

double rumus(float nuts,float nuas,float ntugas,float nabsen){
double total;
    ntugas=dta.tugas*35/100;
       cout<<"\nHasil Tugas : "<<ntugas;
    nabsen=dta.absen*15/100;
        cout<<"\nHasil Absen : "<<nabsen;
    nuts=dta.uts*20/100;
        cout<<"\nHasil UTS   : "<<nuts;
    nuas=dta.uas*30/100;
        cout<<"\nHasil UAS   : "<<nuas;
    total=ntugas+nabsen+nuts+nuas;
        cout<<"\nHasil Total : "<<total<<endl;
    return total;};

void nilai(float total1){
if (total1>=81)
    cout<<"Nilai : A";
else if (total1>=61)
    cout<<"Nilai : B";
else if (total1>=41)
    cout<<"Nilai : C";
else if (total1>=21)
    cout<<"Nilai : D";
else
    cout<<"Nilai : E";};

main(){
double nuts,nuas,ntugas,nabsen,total1;
data();
total1=rumus(nuts,nuas,ntugas,nabsen);
nilai(total1);}
