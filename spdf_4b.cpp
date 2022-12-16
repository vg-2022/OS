#include<sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include<iostream>
using namespace std;

int main(){
    int pid;
    pid=fork();
    if(pid<0){
        cout<<"Fork Failed!!!"<<endl;
        return 1;
    }
    else if(pid>0){
        cout<<"Hello, my pid is:"<<pid<<endl;
    }
    else{
        cout<<"Hi... my pid is:"<<pid<<endl;
    }
    return 0;
}