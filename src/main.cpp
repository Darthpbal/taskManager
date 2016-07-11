/*
A simple-sorta-maybe to do list thingy that runs on the command line.

_______________________________________________________________________________
*/


#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <fstream>
#include "Task.hpp"
#include "TaskList.hpp"
using namespace std;

void makeTask(string srcLine, Task& pTask);
void displayTaskArrayContents(Task myTasks[], int taskArraySize);
int taskArraySize = 20;

int main(){
  //Setup task object list
  TaskList toDo("myToDoList.txt");

  //TASK OBJECTS READY!!!
  //_______________________



  return 0;
}
