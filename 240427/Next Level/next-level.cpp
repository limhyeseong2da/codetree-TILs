#include <iostream>
#include <string>
using namespace std;

class myclass{
    public:
    string id;
    int level;

    myclass(string str,int lv){
        this->id=str;
        this->level=lv;
    }

    string getId()const{ return id;}

    int getlevle()const { return level;}

    
};

int main() {
    string id;
    int level;
    cin>>id>>level;
    myclass class0("codetree",10);
    myclass class1(id,level);
    cout<<"user "<<class0.getId()<<" lv "<<class0.getlevle()<<"\n";
     cout<<"user "<<class1.getId()<<" lv "<<class1.getlevle();
    return 0;
}