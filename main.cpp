#include <bits/stdc++.h>

#define FOR(i,n,m); for(int i=n;i<m;i++)
#define REP(i,n) FOR(i,0,n)
#define pb(x) push_back(x)
#define MAX MAX_INT
#define fst first
#define snd second
#define sz(x) int(x.size())
#define all(v) v.begin(),v.end()
#define mp(x,y) make_pair(x,y)
#define fastcin std::ios::sync_with_stdio(false); std::cin.tie(nullptr); 
using namespace std;

long int findMax(long int array[3]){
	long int maxim = 0;
	REP(i,3){
		maxim = max(maxim,array[i]);
	}
	return maxim;
}

int main() {
	fastcin
	long int brownBottles[3];
	long int greenBottles[3];
	long int clearBottles[3];
	while(cin >> brownBottles[0]){
		long int brownMax = 0;
		long int greenMax = 0;
		long int clearMax = 0;
		cin >> greenBottles[0];
		cin >> clearBottles[0];
		FOR(i,1,3){
			cin >> brownBottles[i];
			cin >> greenBottles[i];
			cin >> clearBottles[i];
		}
		brownMax = findMax(brownBottles);
		greenMax = findMax(greenBottles);
		clearMax = findMax(clearBottles);
		cout << brownMax << ' ' << greenMax << ' ' << clearMax;

		
		/*REP(i,3){
			cout << brownBottles[i] << ' ';
			cout << greenBottles[i] << ' ';
			cout << clearBottles[i] << ' ';
		}*/
	}
    return 0;
}