#include <fstream>
#include <cstdlib>
#include "TaskList.hpp"

using namespace std;
//string taskFileName = "tasks.src";

TaskList::TaskList(string taskFileName){     //ctor
  //Open task source file
  ifstream taskFile(taskFileName.c_str());
  if(!taskFile) {
    cout << "Unable to open tasks source file. Attempting to create new file...\n";
    taskFile.close();
    ofstream blankFile(taskFileName.c_str());
    for(int i = taskListCapacity; i < taskListCapacity; i++){
      // list[i].clear();
      // list[i].dispContents();
    	//blankFile << list[i].delim() << endl;
    }
    blankFile.close();
    exit(-1);
  }
  int lineNum = 0;
  while(!taskFile.eof()){
    string line;
    getline(taskFile, line);
    //makeTask(line, myTasks[lineNum]);
    list[lineNum].make(line);
    lineNum++;
  }
  taskFile.close();
}
