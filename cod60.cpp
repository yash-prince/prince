#include<iostream>
#include<fstream>
using namespace std;
/*
The useful classes for writing with files in c++ are:
1. fstreambase
2. ifstream --> derived from fstreambase
3. ofstream --> derived from fstreambase
*/
// in order work with files in c++ , you will have to open it, primarily , there are 2 ways to open a file:
/*
1. using the costructor
2. using the member function open() of the class
*/
int main(){
    string st = "harry bhai";
    string st2;
    // opning files using cnstructor and writing it
    ofstream out("sample60.txt");// write operation
    out<<st;
    // opning files using cnstructor and reading it
    ifstream in("sample60b.txt");// write operation
    // in>>st2;
    // we will use a getline function to read a full line
    getline(in,st2);
    cout<<st2;
    return 0;
}