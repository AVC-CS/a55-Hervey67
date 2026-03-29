
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int N, M;
	cout << "Number of Students and Number of Subjects ";
	cin >> N >> M;
	string sname;
	int score, total;

	for (int i=0; i<N; i++){
		cout << "Enter S name ";
		cin >> sname;
		total = 0;
		for (int j=0; j<M; j++){
			cout << "Enter score ";
			cin >> score;
			total += score;
		}
		double avg = total / (double)M;
		cout << sname << "\t" << total << "\t" << avg << endl;
			
	}
	return 0;
}
