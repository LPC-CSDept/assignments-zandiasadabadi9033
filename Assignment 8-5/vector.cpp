#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

void initVectors(vector<int> &, vector<string> &, int);
void printVectors(vector<int>, vector<string>, int);
void sortVectors(vector<int> &, vector<string> &, int);

int main()
{
  
  const int SIZE = 10;
  vector<int> ID(SIZE);
  vector<string> names(SIZE);
  
  initVectors(ID, names, SIZE);
  printVectors(ID, names, SIZE);
  sortVectors(ID, names, SIZE);
  printVectors(ID, names, SIZE);

  return 0;

}

void initVectors(vector<int> &IDs, vector<string> &names, int N)
{

  ifstream ifs;
  ifs.open("vectordata.txt");
  
  if ( ifs.fail()) {
    cerr << "File Open Error\n";
    exit(0);
  }
    
  for (int i = 0; i < N; i++) {
    ifs >> IDs[i] >> names[i] ;
    if (ifs.fail()) {
      cerr << "File Read Error\n";
      exit(0);
      }
    }
    
}

void sortVectors(vector<int> &ID, vector<string> &names, int N) {
  
  string alphName;
  int id = 0;
  int counter = 0;
  int temp = 0;
  
  for (int i = 0; i < N - 1; i++) {
    alphName = names[i];
    id = ID[i];
    counter = i;
    
    for (int j = i + 1; j < N; j++) {
      if (alphName > names[j]) {
        alphName = names[j];
        id = ID[j];
        counter = j;
      }
    }
    
    names[counter] = names[i];
    ID[counter] = ID[i];
    names[i] = alphName;
    ID[i] = id;
    
  }

}
void printVectors(vector<int> ID, vector<string> names, int N) {
  
  for (int i = 0; i < N; i++) {
    cout << ID[i] << "\t" << names[i] << "\n";
  }

  cout << endl;

}