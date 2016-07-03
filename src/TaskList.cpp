#include <fstream>
#include <cstdlib>
#include "TaskList.hpp"

using namespace std;

TaskList::TaskList(string taskFileName){     //ctor
  cout << "Task list capacity is " << taskListCapacity << endl;

  //Open task source file
  ifstream taskFile(taskFileName.c_str());

  // used to detect whether or not the taskfile input file stream must be recreated
  bool srcFileErr = false;

  //if unable to open an existing task file, create one...
  if(!taskFile) {
    srcFileErr = true;
    cout << "Unable to open tasks source file. Attempting to create new file...\n";
    taskFile.close();
    ofstream blankFile(taskFileName.c_str());
    for(int i = 0; i < taskListCapacity; i++){
      list[i].clear();
      list[i].dispContents();
    	blankFile << list[i].delim() << endl;
    }
    blankFile.close();
  }


  if(srcFileErr) taskFile.open(taskFileName.c_str());
  for(int i = 0; i < taskListCapacity; i++){
    if(taskFile.eof()){
      cout << "EOF reached!!! Uh oh!!!\n";
      i = taskListCapacity;
      break;
    }
    string line = "";
    getline(taskFile, line);
    if(line.size()){
      list[i].make(line);
    }
  }
}





// TaskList(string);             //ctor
// bool saveList();             //save task list to file.
// bool constructList();
//
// string getTask(int taskNum);
// bool updateTask(int taskNum, string taskLine);
// bool createTask(string taskLine);
// bool deleteTask(int taskNum);
//
// bool setTask(int taskNum, string taskLine);   //set task based on task number
// bool clearTask(int taskNum);
