#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void file_o(fstream *file){
    file->open("file1.txt", ios::out);
    if(!*file) cout<<"Fail"<<endl;
    else cout<<"Sucsessful"<<endl;
    file->close();
}

void file_w(fstream *file,string sen){
    file->open("file1.txt");
    *file<<sen;
    file->close();
}

void file_r(fstream *file){
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
    file_o(&dosya);
    cout<<"What do you want to write:";
    getline(cin,sen);
    file_w(&dosya,sen);
    file_r(&dosya);
    getchar();
    return 0;
}
