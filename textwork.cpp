#include "header.h"
void askQuestion(){
    cout<<"You have some commands. Every command consists of name of the command and c1, c2, n1, n2\n c is collored, n is not collored\n 1 and 2 are number of the rentangle\n You can change and get width and lenght of a rentagle using setW and setL and getW getL\n you can find S and P using findS and findP\n you can set collor using setC\n You can check collor using getC\n You can check is something is a square using s\n You can end the program using end\n";
    cout<<"You can use << and >> to output/input basic information about rectangle or collored rectangle\n";
};

void taskCheck(rectangle &n1, rectangle &n2, collRent &c1, collRent &c2){
    
    string ans = "";
    int w;
    string ws;
    while (ans != "end"){
        cin>>ans;
        if(ans=="setWn1"){
            cin>>w;
            n1.setWidth(w);
        };
        if(ans=="setLn1"){
            cin>>w;
            n1.setLength(w);
        };
        if(ans=="setWn2"){
            cin>>w;
            n2.setWidth(w);
        };
        if(ans=="setLn2"){
            cin>>w;
            n2.setLength(w);
        };
        if(ans=="setWc1"){
            cin>>w;
            c1.setWidth(w);
        };
        if(ans=="setLc1"){
            cin>>w;
            c1.setLength(w);
        };
        if(ans=="setWc2"){
            cin>>w;
            c2.setWidth(w);
        };
        if(ans=="setLc2"){
            cin>>w;
            c2.setLength(w);
        };
        if(ans=="setCc1"){
            cin>>ws;
            c1.setCollor(ws);
        };
        if(ans=="setCc2"){
            cin>>ws;
            c2.setCollor(ws);
        };
        if(ans=="sn1"){
            n1.testSq();
        };
        if(ans=="sn2"){
            n2.testSq();
        };
        if(ans=="sc1"){
            c1.testSq();
        };
        if(ans=="sc2"){
            c2.testSq();
        }
        if(ans=="findSn1"){
            n1.countS();
        };
        if(ans=="findSn2"){
            n2.countS();
        };
        if(ans=="findSc1"){
            c1.countS();
        };
        if(ans=="findSc2"){
            c2.countS();
        };
        if(ans=="findPn1"){
            n1.countP();
        };
        if(ans=="findPn2"){
            n2.countP();
        };
        if(ans=="findPc1"){
            c1.countP();
        };
        if(ans=="findPc2"){
            c2.countP();
        };
        if(ans=="getLn1"){
            n1.getLength();
        };
        if(ans=="getLn2"){
            n2.getLength();
        };
        if(ans=="getLc1"){
            c1.getLength();
        };
        if(ans=="getLc2"){
            c2.getLength();
        };
        if(ans=="getWn1"){
            n1.getWidth();
        };
        if(ans=="getWn2"){
            n2.getWidth();
        };
        if(ans=="getWc1"){
            c1.getWidth();
        };
        if(ans=="getWc2"){
            c2.getWidth();
        };
        if(ans=="getCc1"){
            c1.getCollor();
        };
        if(ans=="getCc2"){
            c2.getCollor();
        };
        if(ans=="<<n1"){
            cout<<n1;
        };
        if(ans=="<<n2"){
            cout<<n2;
        };
        if(ans=="<<c1"){
            cout<<c1;
        };
        if(ans=="<<c2"){
            cout<<c2;
        };
        if(ans==">>n1"){
            cin>>n1;
        };
        if(ans==">>n2"){
            cin>>n2;
        };
        if(ans==">>c1"){
            cin>>c1;
        };
        if(ans==">>c2"){
            cin>>c2;
        };
    }
}
