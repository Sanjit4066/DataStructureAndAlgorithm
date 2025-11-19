// here I'm solving tower of hanoi problem recursively
// number of moves is 2^n-1 here n is no. of disk
#include <iostream>
using namespace std;
int moves=0;
void solveTowerOfHanoi(int n, string Src, string Helper, string Destination)
{
    if (n == 1)
    { // base case
        cout<<"Transfer disk " <<n<<" from "<<Src<<" to "<<Destination<<endl;
        moves++;
        return;
    }
    solveTowerOfHanoi(n - 1, Src, Destination, Helper); // transfer n-1 disk from source to helper
     cout<<"Transfer disk " <<n<<" from "<<Src<<" to "<<Destination<<endl;
     moves++; //counter will increase at every move
    solveTowerOfHanoi(n - 1, Helper, Src, Destination); // transfer remaining n-1 disk from helper to destination. Values for src , dest and helper keep changing
}
    int main()
    {   int n;
        cout<<"enter number of disk:";
        cin>>n;
        solveTowerOfHanoi(n,"S","H","D"); 
        cout<<"Total number of moves are:"<<moves;
        return 0;
    }