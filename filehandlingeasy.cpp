#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void dosya_ac(fstream *file){
    file->open("file1.txt", ios::out);
    if(!*file) cout<<"Fail"<<endl;
    else cout<<"Sucsessful"<<endl;
    file->close();
}

void dosya_yaz(fstream *file,string sen){
    file->open("file1.txt");
    *file<<sen;
    file->close();
}

void dosya_oku(fstream *file){
    file->open("file1.txt",ios::in);
    if(!*file) cout<<"No File"<<endl;
    else{
        string line;
        while(!file->eof()){
            getline(*file,line);
        }
        cout<<line;
        file->close();
    }
}

int main(){

    fstream dosya;
    string sen;
    dosya_ac(&dosya);
    cout<<"What do you want to write:";
    getline(cin,sen);
    dosya_yaz(&dosya,sen);
    dosya_oku(&dosya);
    getchar();
    return 0;
}
