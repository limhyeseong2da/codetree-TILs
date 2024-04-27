#include <iostream>
using namespace std;

class myclass{
    public:
    char name;
    int score;

    myclass(char ch, int num){
        this->name=ch;
        this->score=num;
    }

    myclass(){}
    
    char get_name()const {return name;}
    int get_score()const {return score;}
} ;

int main() {
    myclass inmainclass[5];
    for(int i=0;i<5;i++){
        char a;
        int b;
        cin>>a>>b;
        inmainclass[i]=myclass(a,b);
        
    }

    int min=inmainclass[0].get_score();
    int ans=0;

    for(int i=0;i<5;i++){
        
        if(min>inmainclass[i].get_score()){
            ans=i;
            min=inmainclass[i].get_score();
        }
    }

    cout<<inmainclass[ans].get_name()<<" "<<min;
    return 0;
}