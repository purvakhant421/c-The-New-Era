#include <iostream>
#include <string.h>

using namespace std;

class User{
   //private:
     // int a;

    public:
    
    int id;
    char name[50];
};

int main()
{
    User obj;
    
    //obj.a=20;
    obj.id=10;
    strcpy(obj.name,"Hello");
    
    //cout << obj.a <<endl;
    cout << obj.id << endl;
    cout << obj.name <<endl;
    
    return 0;
}
