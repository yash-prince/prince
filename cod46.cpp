/*SPECIAL SYNTAX 
. C++ supports an special synntax for passing arguments to multiple base classes
. the constructor of the derived class recieves all the arguments at once and then will pass the calls to the respective  base classes
. the bodyis called after all the constructors are finished executing . 

   Derived consturctor (arg 1,arg 2,arg 3,.....): base 1-costructor (arg 1,arg 2), base 2-constructor(arg3,arg4){
    ......
   }
*/
/* SPECIAL CASE OF VIRTUAL BASE CLASS 
. the constructor for virtual base are invoked brfore an non virtual base class 
. if there are multiple base classes,they are invoked int he order declared.
. Any non-virtual base class are then constructed before the derivrd class constr   uctor is executed
*/
#include<iostream>
using namespace std;

int main(){

    return 0;
}