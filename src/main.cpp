#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <fstream>
#include "Task.hpp"
using namespace std;

void makeTask(string srcLine, Task pTask);
int taskArraySize = 50;

int main(){
  ifstream taskFile("tasks.src");
  if(!taskFile) {
    cout << "Unable to open tasks source file. Terminating...\n";
    exit(-1);
  }
  Task myTasks[taskArraySize];
  int lineNum = 0;
  while(!taskFile.eof()){
    string line;
    getline(taskFile, line);
    cout << line << endl;
    makeTask(line, myTasks[lineNum]);
    lineNum++;
  }
  taskFile.close();
  cout << "closed file\n\n\n\n";

  //echoing tasks
  for(int i = 0; i <= taskArraySize; i++){
    cout << myTasks[i].getLabel() << endl;
  }
  return 0;
}


//careful about order
void makeTask(string srcLine, Task pTask){
  int columnPos = 0;
  string columnName = "";
  for(int currentCharPos = 0; currentCharPos < srcLine.size(); currentCharPos++){
    if(srcLine[currentCharPos] = ',') {
      columnPos++;
      continue;
    }

    if(columnPos = 0){//label
      pTask.setLabel(columnName.c_str());
      columnName.clear();
    }
    else if(columnPos = 5){//milestone
      pTask.setMilestone(columnName.c_str());
      columnName.clear();
    }
    else if(columnPos = 3){//dueDay
      pTask.setDueDay(atoi(columnName.c_str()));
      columnName.clear();
    }
    else if(columnPos = 1){//dueMonth
      pTask.setDueMonth(atoi(columnName.c_str()));
      columnName.clear();
    }
    else if(columnPos = 2){//dueYear
      pTask.setDueYear(atoi(columnName.c_str()));
      columnName.clear();
    }
    else if(columnPos = 4){//status
      pTask.setStatus(columnName.c_str());
      columnName.clear();
    }
    else if(columnPos = 6){//difficulty
      pTask.setDifficulty(atoi(columnName.c_str()));
      columnName.clear();
    }
    else if(columnPos = 7){//complexity
      pTask.setComplexity(atoi(columnName.c_str()));
      columnName.clear();
    }
    else if(columnPos = 8){//priorityLevel
      pTask.setPriorityLevel(atoi(columnName.c_str()));
      columnName.clear();
    }
    else {
      // cout << "column unknown... quitting task creation on task line \n ";
      // cout << srcLine << endl;
      columnName += srcLine[currentCharPos];
      cout << columnName << endl;
    }
  }
}
