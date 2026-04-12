#include <stdio.h>

int main(void) {
    int T;
    scanf("%d", &T); // 테스트 케이스 개수 입력

    for(int i = 0; i < T; i++) {
        int H, W, N;
        scanf("%d %d %d", &H, &W, &N);

        int floor = N % H; // 층수 계산
        int room = N / H + 1; // 호수 계산

        // 예외 처리: N이 H의 배수일 때 (예: 6층 건물에 6번째, 12번째 손님)
        if(floor == 0) {
            floor = H; // 0층은 없으므로 꼭대기 층으로 설정
            room -= 1; // 몫이 하나 더 커졌으므로 1을 빼줌 (혹은 room = N / H)
        }

        // 결과 출력: 층수 * 100 + 호수
        // 예: 4층 2호 -> 4 * 100 + 2 = 402
        // 예: 12층 3호 -> 12 * 100 + 3 = 1203
        printf("%d\n", floor * 100 + room);
    }
    
    return 0;
}