#include <iostream>
using namespace std;
//(S[j] - S[i])%M == 0
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int N, M;
	cin >> N >> M;
	int numbers[N];
	long long sumNumbers[N];
	long long count[M] = {0,}, sum = 0;
	
    for (int i = 0; i < N; i++) {
        cin >> numbers[i];

        if (i == 0)
            sumNumbers[i] = numbers[i];
        else
            sumNumbers[i] = sumNumbers[i - 1] + numbers[i];

        int mod = sumNumbers[i] % M;
		//sumNumbers[0]부터 sumNumbers[i]까지의 합이 이미 M으로 나누어 떨어지는 경우
        if (mod == 0)
            sum++;         

		//나머지가 같은 구간 합을 저장하기 위해 나머지가 mod인 곳 +1 
        count[mod]++;
    }

    for (int i = 0; i < M; i++) {
		//조합 공식 사용
        if (count[i] >= 2)
            sum += count[i] * (count[i] - 1) / 2;
    }


	cout << sum;
	return 0;
}