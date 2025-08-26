/*
Name:-Rachit Deshpande
PRN:-24070123035
Batch:-A2
*/
#include <iostream>
using namespace std;
class Cube{
    public:
    int height=5;
    int width=3;
    int length=4;
};
int main(){
    Cube x1;
    int vol=x1.height*x1.width*x1.length;
    cout << "Volume of the cube is: " << vol << endl;
    return 0;
}
/*
Output:-
Volume of the cube is: 60
*/