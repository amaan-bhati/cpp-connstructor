#include <stdio.h>

int viralAdvertising(int n)
{
    int shared = 5;          // Number of people shared the ad on day 1
    int liked = 0;           // Number of people who liked the ad on day 1
    int cumulativeLikes = 0; // Cumulative number of likes

    for (int day = 1; day <= n; day++)
    {
        liked = shared / 2;
        cumulativeLikes += liked;
        shared = liked * 3; // Number of people who will share the ad on the following day
    }

    return cumulativeLikes;
}

int main()
{
    int n;
    scanf("%d", &n);

    int result = viralAdvertising(n);
    printf("%d\n", result);

    return 0;
}
