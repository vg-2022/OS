/*
 * Write a program (using fork() and/or exec() commands)
 * where parent and child execute: 
 *  (a) same program, same code
 */

#include <iostream>
#include <unistd.h>

using namespace std;

void sameProgramSameCode()
{
  pid_t pidFork;
  pidFork = fork();
  if(pidFork < 0)
    cout << "\nError in fork...";
  else
    cout << "\nProcess ID : " <<  getpid() << "\nParent Process ID : " << getppid() << endl;
  return;
}

int main()
{
  sameProgramSameCode();
}