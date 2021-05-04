#include <iostream>
#include <fstream>
#include <iomanip>

#define MAX 100
using namespace std;

//function to swap content of two string type variable
void swap(string *xp, string *yp) 
{ 
    string temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
//function to swap content of two integer type variable
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
//function to swap content of two float type variable
void swap(float *xp, float *yp) 
{ 
    float temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 

int main() {
  //declare required variable
  fstream file;
  string fname[MAX],lname[MAX];
  int age[MAX];
  float salary[MAX];
  int count = 0;

  //open file to read data
  file.open("data.txt");
  
  //iterate through each word infile
  while(file >> fname[count] >> lname[count] >> age[count] >> salary[count]){
    count++;
  }

  //apply bubble sort to sort descending order by salary
  int i, j; 
  for (i = 0; i < count-1; i++)   
    for (j = 0; j < count-i-1; j++) 
      if (salary[j] < salary[j+1]) {
        swap(&salary[j], &salary[j+1]);
        swap(&fname[j], &fname[j+1]);
        swap(&lname[j], &lname[j+1]);
        swap(&age[j], &age[j+1]);
      }
  
  //validate input from file
  for(i = 0;i<count;i++){
    if(age[i] < 14){
      cout<<"\nEnter valid age for "<<fname[i]<< " : ";
      cin>>age[i];
    }
  }

  //display heading
  cout<<left<<setw(10)<<"Fname"<<setw(15)<<"Lname"<<setw(10)<<"Age"<<setw(10)<<"Salary"<<endl;

  //display data in tabular format
  for(i = 0;i<count;i++){
    cout<<left<<setw(10)<<fname[i]<<setw(15)<<lname[i]<<setw(10)<<age[i]<<fixed<<setprecision(2)<<setw(10)<<salary[i]<<endl;
  }  
}