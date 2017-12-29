#include <iostream>//std
#include <cstring>//strlen
#include <algorithm>//math stuff
#include <math.h>//pow
using namespace std; //removes use of std::
int main(){
    int w,l;
    scanf("%d %d",&w,&l);
    while(w!=0 and l!=0){
        int realX = 0;
        int realY = 0;
        int fakeX = 0;
        int fakeY = 0;
        int cmds;
        cin>>cmds;
        for(int i = 0; i < cmds; ++i){
            char c;
            int amnt;
            cin >> c >> amnt;
            switch(c){//performs multiple if statements for char c
                case 'u':
                    fakeY+= amnt;
                    realY= realY+amnt<l ? realY+amnt: l-1;
                    break;
                case 'r':
                    fakeX+= amnt;
                    realX= realX+amnt<w ? realX+amnt: w-1;
                    break;
                case 'l':
                    fakeX-= amnt;
                    realX= realX-amnt>=0 ? realX-amnt: 0;
                    break;
                 case 'd':
                    fakeY-= amnt;
                    realY= realY-amnt>=0 ? realY-amnt: 0;
                    break;
                default:
                    break;
            }
        }
        cout<<"Robot thinks "<<fakeX<<" "<<fakeY<<endl;
        cout<<"Actually at "<<realX<<" "<<realY<<endl<<endl;
        scanf("%d %d",&w,&l);
    }
    return 0;
}
