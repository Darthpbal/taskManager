#include <fstream>
#include "TaskList.hpp"

using namespace std;
string taskFileName = "tasks.src";

TaskList::TaskList(){     //ctor
  //Open task source file
  fstream taskFile(taskFileName.c_str());
  if(!taskFile) {
    cout << "Unable to open tasks source file. Attempting to create new file...\n";
    exit(-1);
  }
  int lineNum = 0;
  while(!taskFile.eof()){
    string line;
    getline(taskFile, line);
    makeTask(line, myTasks[lineNum]);
    lineNum++;
  }
  taskFile.close();
}
