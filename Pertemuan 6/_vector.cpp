#include<iostream>
#include<vector>
using namespace std; 
int main(){
    //deklarasi vektor
    vector<string> nama = {"Andi", "Budi", "Santi", "Wanto", "Denis"}; 

    //menentukan panjang vektor
    for(int i=0; i<nama.size(); i++){ 
        cout<<nama[i]<<endl; 
    } 
    cout<<"===================="<<endl;

   //menambahkan data ke dalam vektor yang ada
    nama.push_back("Udin"); 
    for(int i =0; i<nama.size(); i++){ 
        cout<<nama[i]<<endl; 
    } 

    cout<<"===================="<<endl;

    //menghapus data vektor yang terakhir
    nama.pop_back(); 
    for(int i =0; i<nama.size(); i++){ 
        cout<<nama[i]<<endl; 
    } 
    cout<<"===================="<<endl;
    //menghapus data vektor yang pertama
    nama.erase(nama.begin()); 
    for(int i =0; i<nama.size(); i++){ 
        cout<<nama[i]<<endl; 
    } 

    cout<<"===================="<<endl;
    nama.erase(nama.begin() + 2);
    for(int i =0; i<nama.size(); i++){ 
        cout<<nama[i]<<endl; 
    } 
    //looping
    for(string n : nama){
        cout<< n <<endl; 
    }
    return 0;
}