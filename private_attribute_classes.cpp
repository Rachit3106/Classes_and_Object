/*
Name:-Rachit Deshpande
PRN:-24070123035
Batch:-A2
*/
#include <iostream>
using namespace std;
class Cube{
    private:
    int height,width,length;
    public:
    Cube(int h, int w, int l) : height(h), width(w), length(l) {}
    int volume(){
        return height * width * length;
    }   
};
int main(){
    int h,w,l;
    cout << "Enter height, width and length of the cube: ";
    cin >> h >> w >> l;
    Cube x1(h,w,l);
    int vol=x1.volume();
    cout << "Volume of the cube is: " << vol << endl;
    return 0;
}
/*
Output:-
Enter height, width and length of the cube: 5 7 8
Volume of the cube is: 280
*/