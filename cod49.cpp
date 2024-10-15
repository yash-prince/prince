#include <iostream>
using namespace std;
/*
Syntax for intialization lidt in constructir:
constructor (argument- list ) : intialization section {
    assignment + other code ;
}
class test {
    int a;
    int b;
    public:
test(int i, int j): a(i), b(j){
    constructor body
}
};
*/
class test
{
    int b;
    int a;

public:
    // test(int i, int j): a(i), b(j){
    // test(int i, int j): a(i), b(i+j){
    // test(int i, int j): a(i), b(a+j){
    // test(int i, int j): b(j),a(i+b)--> RED FLAG this will creste problem because a will be intialise first{
    // test(int i, int j): b(j),a(i+b){
    test(int i, int j) : b(j)
    {
        a = i;
        cout << "constructor executed " << endl;
        cout << "the value of a is: " << a << endl;
        cout << "the value of b is: " << b << endl;
    }
};
int main()
{
    test t(4, 6);
    return 0;
}