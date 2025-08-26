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
    int volume(){
        return height * width * length;
    }   
};
int main(){
    Cube x1;
    int vol=x1.volume();
    cout << "Volume of the cube is: " << vol << endl;
    return 0;
}
/*
Output:-
Volume of the cube is: 60
*/