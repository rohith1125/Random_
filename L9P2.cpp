#include<iostream>
using namespace std;
#include<vector>
#include <fstream>


int CountBinarySearch( vector<string>&words , string str ){
        int count =0;
        int low=0 ,high =words.size()-1;
        int mid ;
        while(low<=high){
            mid=(low+high)/2;
            count++;
            if(words[mid]==str){
                return count;
            }
            else if (words[mid]<str){
                low=mid+1;
            }
            else {
                high=mid-1;
            }
        }
        return 0;
}


int CountLinearSearch( vector<string>&words , string str ){
        int i=0;
        for(i=0;i<words.size();i++){
                if(str==words[i]){
                        break;
                }
        }
        if(words.size()==i){
            return 0;
        }
        return i+1;
}

int main(){

        vector<string > words ;
        
        ifstream inputFile("input.txt");
        ofstream reportFile("report.txt");
        
        string str ;
        int i=0;
        while(inputFile>>str){
                words.push_back(str); 
        }
        
        int bs_operations =0;
        int ls_operations=0;
        
        
        while(1){
                cout<<"Enter a string to compare"<<endl;
                cin>>str;
                bs_operations =CountBinarySearch( words , str );
                if(bs_operations==0){
                    cout<<"Entered string is not present in input file"<<endl;
                    cout<<endl;
                    continue;
                }
                ls_operations =CountLinearSearch( words , str );
                cout<<"comparisons for binary search = " <<bs_operations <<endl;
                cout<<"comparisons for linear search = " <<ls_operations <<endl;
                cout<<endl;
                reportFile<<str<<" "<<ls_operations<<" "<<bs_operations<<endl; //logging
        }
}