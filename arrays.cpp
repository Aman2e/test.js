#include <iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
int main()
{
    int ans,guess;
    srand(time(0));
    ans=rand()%100;
    cout<<"enter num between 1 to 99 :"<<endl;
    for(int i=1;i<=100;i++){
        cout<<i<<"enter num::"<<endl;
        cin>>guess;
        if (guess==ans){
            cout<<"congratss"<<ans<<endl;
            break;

        }
        if(guess<ans){
            cout<<"num is greater than ans:"<<guess<<endl;
            

        }
        if(guess>ans){
            cout<<"num is lesser than ans :"<<guess<<endl;
        }
    }
    
}