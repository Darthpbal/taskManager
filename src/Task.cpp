#include "Task.hpp"
#include <iostream>

using namespace std;


Task::Task(){
  setLabel("NULL");
}





/*
GETTERS
*/
string Task::getLabel(){
  return label;
}

int Task::getDueMonth(){
  return dueMonth;
}

int Task::getDueYear(){
  return dueYear;
}

int Task::getDueDay(){
  return dueDay;
}

string Task::getStatus(){
  return status;
}

string Task::getMilestone(){
  return milestone;
}

int Task::getDifficulty(){
  return difficulty;
}

int Task::getComplexity(){
  return complexity;
}

int Task::getPriorityLevel(){
  return priorityLevel;
}


/*
SETTERS
*/
bool Task::setLabel(string pLabel){
  label = pLabel;
  cout << label << endl;
  return (label == pLabel)? true: false;
}

bool Task::setDueMonth(int pDueMonth){
  dueMonth = pDueMonth;
  cout << dueMonth << endl;
  return (dueMonth == pDueMonth)? true: false;
}

bool Task::setDueYear(int pDueYear){
  dueYear = pDueYear;
  cout << dueYear << endl;
  return (dueYear == pDueYear)? true: false;
}

bool Task::setDueDay(int pDueDay){
  dueDay = pDueDay;
  cout << dueDay << endl;
  return (dueDay == pDueDay)? true: false;
}

bool Task::setStatus(string pStatus){
  status = pStatus;
  cout << status << endl;
  return (status == pStatus)? true: false;
}

bool Task::setMilestone(string pMilestone){
  milestone = pMilestone;
  cout << milestone << endl;
  return (milestone == pMilestone)? true: false;
}

bool Task::setDifficulty(int pDifficulty){
  difficulty = pDifficulty;
  cout << difficulty << endl;
  return (difficulty == pDifficulty)? true: false;
}

bool Task::setComplexity(int pComplexity){
  complexity = pComplexity;
  cout << complexity << endl;
  return (complexity == pComplexity)? true: false;
}

bool Task::setPriorityLevel(int pPriorityLevel){
  priorityLevel = pPriorityLevel;
  cout << priorityLevel << endl;
  return (priorityLevel == pPriorityLevel)? true: false;
}
