#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <iostream>
using namespace std;
int main(){
    int pid = fork();
    if (pid < 0){
        cout <<"Fork Failed!!!" << endl;
        return 1;
    }
    else if (pid==0){
        cout <<"Child pid id :"<<pid<<endl;
    }
    else{
        sleep(1);
        cout <<"Parent pid is :"<<pid<<endl;
    }
    return 0;
}