#include <fstream>
#include <cstdlib>
#include "TaskList.hpp"
#include "Task.hpp"

using namespace std;

TaskList::TaskList(string ptaskFileName){     //ctor
  taskFileName = ptaskFileName;
  cout << "Task list capacity is " << taskListCapacity << endl;

  //Open task source file
  ifstream taskFile(taskFileName.c_str());

  // used to detect whether or not the taskFile input file stream must be recreated
  bool srcFileErr = false;

  //if unable to open an existing task file, create one using an empty task set of data
  if(!taskFile) {
    srcFileErr = true;
    cout << "Unable to open tasks source file. Attempting to create new file...\n";
    taskFile.close();
    ofstream blankFile(taskFileName.c_str());
    for(int i = 0; i < taskListCapacity; i++){
      list[i].clear();
    	blankFile << list[i].delim() << endl;
    }
    blankFile.close();
  }

  //reopen the task source file if needed, then construct the task list array from the source file
  if(srcFileErr) taskFile.open(taskFileName.c_str());
  //detect if the end of file is reached. This should never happen!
  for(int i = 0; i < taskListCapacity; i++){
    if(taskFile.eof()){
      cout << "EOF reached!!! Uh oh!!!\n";
      i = taskListCapacity;
      break;
    }
    // get a line, if the line has a length above zero, process it. Sometimes the last line of a file is empty.
    string line = "";
    getline(taskFile, line);
    if(line.size()){
      list[i].make(line);
    }
  }
  taskFile.close();
}

bool TaskList::saveList(){
  ofstream taskFile(taskFileName.c_str());
  for (int i = 0; i < taskListCapacity; i++) {
    taskFile << list[i].delim();
  }
  taskFile.close();
}

int TaskList::createTask(string taskLine){
  int newTaskPos = 0;
  for(int i = 0; list[i].getLabel() != "NULL"; i++){
    newTaskPos++;
  }
  list[newTaskPos].make(taskLine);
  return newTaskPos;
}

bool TaskList::updateTask(int taskNum, string taskLine){
  list[taskNum].make(taskLine);
  return (list[taskNum].delim() == taskLine)? true: false;
}

bool TaskList::deleteTask(int taskNum){
  return list[taskNum].clear();
}
