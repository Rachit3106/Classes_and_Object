/*
Name:-Rachit Deshpande
PRN:-24070123035
Batch:-A2
*/
#include <iostream>
using namespace std; 

class Cuboid{
    public :
    int height;
    int width;
    int length;
    
    void Input(){
        cout<<"Enter height of cuboid :"<<endl;
        cin>>height;
        cout<<"Enter width of cuboid :"<<endl;
        cin>>width;
        cout<<"Enter length of cuboid :"<<endl;
        cin>>length;
    }
    
    int volume(){
        int v;
        v = height*width*length;
        return v;
    }
    
    void disp(){
        cout<<"Volume of cuboid :"<<volume();
    }
};

int main() {
    Cuboid c1;
    c1.Input();
    c1.disp();
    
    return 0;
}

/*Output:-
Enter height of cuboid :
4
Enter width of cuboid :
2
Enter length of cuboid :
8
Volume of cuboid :64
*/