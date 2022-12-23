#include<iostream>
using namespace std;
main(){
float intermediate,matric,ecat,interper,matricper,ecatper,aggregate;
cout<< "intermarks:";
cin>>intermediate;
interper=(intermediate/1100)*40;
cout<< "matricmarks:";
cin>>matric;
matricper=(matric/1100)*10;
cout<<"ecatmarks:";
cin>>ecat;
ecatper=(ecat/400)*50;
cout<<"aggregate=";
aggregate=ecatper+matricper+interper;
cout<<"youraggregate="<<aggregate;
}