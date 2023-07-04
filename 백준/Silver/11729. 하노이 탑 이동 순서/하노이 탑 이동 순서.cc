/**
 * [SILVER 1] 하노이 탑 이동순서
 * @writer : nnlnuu
 */
#include<bits/stdc++.h>
using namespace std;
#define FASTIO ios::sync_with_stdio(0),cin.tie(0);
/**
 * 1.함수 정의
 *      원판 n 개를 a 번 기둥에서 b 번 기둥으로 옮기는 방법을 출력하는 함수
 * 2. base condition
 *      n = 1 일 때 a b 로 이동
 * */
void hanoi(int a,int b,int num){
    if(num == 1) {
        cout << a << " "<< b <<'\n';
        return;
    }
    hanoi(a,6-a-b,num-1);
    cout << a << " "<< b <<'\n';
    hanoi(6-a-b,b,num-1);
}
int main(void){
    FASTIO
    int k;
    cin >> k;
    cout << (1<<k)-1 <<'\n';
    hanoi(1,3,k);
    return 0;
}
