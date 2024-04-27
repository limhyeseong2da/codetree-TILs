#include <iostream>

using namespace std;
class myclass{
    public:
    string str;
    int a;

    myclass(string str,int a){
        this->str=str;
        this->a=a;
    }

    string getstr(){return str;}
    int geta(){return a;}
};
int main() {
    int num;
    string str1;
    cin>>str1>>num;

    myclass class1("codetree",50);
    myclass class2(str1,num);

    cout<<"product "<<class1.geta()<<" is "<<class1.getstr();
    cout<<"\n";
    cout<<"product "<<class2.geta()<<" is "<<class2.getstr();
    return 0;
}