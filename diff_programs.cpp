#include <stdlib.h>
#include <stdio.h>
#include<unistd.h>
#include <iostream>
using namespace std;

int main(){
    int pid = fork();
    pid=fork();
    if(pid<0){
        cout << "Fork Failed!!!"<<endl;
        return 1;
    }
    else if(pid==0){
        execlp("/bin/ls","Ls",NULL);
    }
    else{
        cout<<"Child Complete...";
    }
    return 0;
}