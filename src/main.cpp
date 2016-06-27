#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <fstream>
#include "Task.hpp"
using namespace std;

void makeTask(string srcLine, Task& pTask);
void displayTaskArrayContents(Task myTasks[], int taskArraySize);
int taskArraySize = 20;

int main(){
  //Open task source file
  ifstream taskFile("tasks.src");
  if(!taskFile) {
    cout << "Unable to open tasks source file. Terminating...\n";
    exit(-1);
  }

  //Creat task array and fill it with the contents from the source file
  Task myTasks[taskArraySize];
  int lineNum = 0;
  while(!taskFile.eof()){
    string line;
    getline(taskFile, line);
    makeTask(line, myTasks[lineNum]);
    lineNum++;
  }
  taskFile.close();
  //TASK OBJECTS READY!!!
  //_______________________

  return 0;
}


//careful about order
void makeTask(string srcLine, Task& pTask){
  int columnPos = 0;
  string columnName = "";
  for(int currentCharPos = 0; currentCharPos < srcLine.size(); currentCharPos++){
    if(srcLine[currentCharPos] == ',') {
      if(columnPos == 0){//label
        pTask.setLabel(columnName.c_str());
        columnName.clear();
      }
      else if(columnPos == 1){//milestone
        pTask.setMilestone(columnName.c_str());
        columnName.clear();
      }
      else if(columnPos == 2){//dueDay
        pTask.setDueDay(atoi(columnName.c_str()));
        columnName.clear();
      }
      else if(columnPos == 3){//dueMonth
        pTask.setDueMonth(atoi(columnName.c_str()));
        columnName.clear();
      }
      else if(columnPos == 4){//dueYear
        pTask.setDueYear(atoi(columnName.c_str()));
        columnName.clear();
      }
      else if(columnPos == 5){//status
        pTask.setStatus(columnName.c_str());
        columnName.clear();
      }
      else if(columnPos == 6){//difficulty
        pTask.setDifficulty(atoi(columnName.c_str()));
        columnName.clear();
      }
      else if(columnPos == 7){//complexity
        pTask.setComplexity(atoi(columnName.c_str()));
        columnName.clear();
      }
      else if(columnPos == 8){//priorityLevel
        pTask.setPriorityLevel(atoi(columnName.c_str()));
        columnName.clear();
      }
      else {
        cout << "column unknown... quitting task creation on task line \n ";
        cout << srcLine << endl;
      }
      columnPos++;
      continue;
    }
    else{
      columnName += srcLine[currentCharPos];
    }
  }
}


void displayTaskArrayContents(Task myTasks[], int taskArraySize){
  // echoing tasks
  for(int i = 0; i <= taskArraySize; i++){
    cout << i << ".\n";
    myTasks[i].dispContents();
    cout << endl;
  }
}
