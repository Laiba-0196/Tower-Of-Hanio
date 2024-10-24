# include<iostream>
using namespace std;

class TowerOfHanoi {
	int count;
public:
	TowerOfHanoi()
	{
		count = 0;
	}

	void tohHelper(int num, char from, char to, char aux)
	{
		if (num > 0)
		{
			tohHelper(num - 1, from, aux, to);
			cout << "Move disk " << num << " from " << from << " to " << to << endl;
			count++;   //for moves
			tohHelper(num - 1, aux, to, from);
		}
	}

	int toh(int n, char from, char to, char aux)
	{
		tohHelper(n, from, to, aux);
		return count;
	}
};

int main()
{
	TowerOfHanoi obj1;
	int numDisks = 3;
	char source = 'A', destination = 'C', auxiliary = 'B';

	cout << "Tower of Hanoi solution with " << numDisks << " disks:" << endl;
	int moves = obj1.toh(numDisks, source, destination, auxiliary);
	cout << "\033[34mTotal moves required: " << moves <<"\033[0m"<< endl;

	return 0;
}
