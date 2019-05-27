#include <iostream>
using namespace std;
/*
 Draw checkers board
*/
void drawBoard();
int main()
{
  int i,j;
  drawBoard();
  //placeCheckers();
  return 0;



}

void drawBoard()
{
  cout << "\n\n";
  for (int i =0; i<4; i++){
    for (int j =0; j<5; j++)
    {
    cout << "\t";
    for (int k=0; k<4;k++)
      cout <<"          **********";
    cout << endl;
    }
    for (int j =0; j<5; j++)
    {
    cout << "\t";
    for (int k=0; k<4;k++)
      cout <<"**********          ";
    cout << endl;
    }
 }
}
