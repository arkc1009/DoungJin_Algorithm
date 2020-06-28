#include <iostream>
#include <set>

//18512 점프 점프 문제
//처음 시도할때는 반복문으로 P1, P2 값을 X Y만큼 계속 더해주면서
/*for(int i=0; i<??; i++) {
	P1+=X;
	for(int j=0; P2<=P1 j++) {
		P2+=Y;
		if(P1==P2) break
	}
} 
*/ 
//이런느낌??? 이였는데 시간도 많이 들고 뭣보다 반복문 끝내는 조건을 몰랐다.

// 그리고 2트째 set을 썻다는 친구의 말을 듣고 set으로 노선 변경.
// set에 값들을 계속 넣어보고 size가 안변했으면 중첩된 값이 있다는 뜻이기 때문에
// 그걸 이용했따 근데 문제는 얘도 반복문을 어떻게 끝내나 싶었는데
// 그냥 적당히 1000번 하면 된다더라! !! 근데 뭔가 찝찝해서 조건을 찾아냈다! 찾아냈다! 
using namespace std;

int main() {
	
	set<int>jump;
	
	int X, Y, P1, P2;
	cin >> X >> Y >> P1 >> P2;
	
	jump.insert(P1); //시작위치 삽입 
	jump.insert(P2);
	int size;
	
	while((P1-P1*P2<100)||(P2-P1*P2<100)) { 
	//결국 찾아낸 반복문 종결 조건 : 최소공배수는 못해도 X*Y는 무조건인데
	//그렇다면 결국 P1+(X*n) 이라 오차범위가 X*Y에서 결국 P1값 만큼 나는건데
	//문제에서 P1 P2의 크기를 1~100으로 정해줌.!!
	 
		size=jump.size(); //전 set의 사이즈 삽입 
		P1+=X;
		P2+=Y;
		jump.insert(P1);
		if(jump.size()-size==0) { //중첩검사 
			cout << P1;
			return 0;
		}
		jump.insert(P2);
		if(jump.size()-size==1) {
			cout << P2;
			return 0;
		}
	}
 	
	cout << -1;
 	
	return 0;
}
