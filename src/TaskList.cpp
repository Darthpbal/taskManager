#include <fstream>
#include <cstdlib>
#include "TaskList.hpp"

using namespace std;

TaskList::TaskList(string taskFileName){     //ctor
  cout << "Task list capacity is " << taskListCapacity << endl;
  //Open task source file
  ifstream taskFile(taskFileName.c_str());
  if(!taskFile) {
    cout << "Unable to open tasks source file. Attempting to create new file...\n";
    taskFile.close();
    ofstream blankFile(taskFileName.c_str());
    for(int i = 0; i < taskListCapacity; i++){
      // cout << "looping...\n";
      list[i].clear();
      list[i].dispContents();
    	blankFile << list[i].delim() << endl;
    }
    blankFile.close();
    exit(-1);
  }
}
