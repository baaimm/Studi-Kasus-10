#include<iostream>
using namespace std;

class pointer{
    public:
    void input();
    void proses();
    void output();

    int n,i;
    string *name;
    string *num;
    string nama[25];
    string nim[25];

};

void pointer::input(){
    cout << "masukan banyak orang : ";
    cin >> n;
    // inputan untuk nama orang dan nim;
    for (int i=0;i<n;i++){
        cout << "masukan nama ke - " << i+1 << " : ";
        cin >> nama[i];

        cout << "masukan nim ke - " << i+1 << " : ";
        cin >> nim[i];
        cout << endl;
    }
}

void pointer::proses(){
name = new string[i];
num = new string[i];
for(int i=0;i<n;i++){
    *name = nama[i];
    *num = nim[i];
    name+=1;
    num+=1;
}
}

void pointer::output(){
    name -= n;
    num -= n;
for(int i=0;i<n;i++){

        cout << "nama : " << *name << endl;
        name+=1;
        cout << "nim  : " << *num << endl;   
        num+=1;
}
    cout << endl;
}
int main(){
 pointer x;
 x.input();
 x.proses();
 x.output();
 return 0;
}