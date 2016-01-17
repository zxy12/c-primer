#include <stdio.h>
const int S_PER_M = 60; // 每分钟的秒数
const int S_PER_H = 3600; // 每小时秒数
const double M_PER_K = 0.62137; // 每公里的英里数
int main(void)
{
    double distk, distm; // 分别以公里和英里计的跑过的距离
    double rate; // 以英里每小时为单位的平均速度
    int min, sec; // 跑步勇士的分钟数和秒数
    int time; // 用秒表示的跑步时间
    double mtime; // 跑完1英里所用时间,以秒计
    int mmin, msec; // 跑完1英里所用的时间,以分钟和秒计
    printf("this program converts your time for a metric race\n");
    printf("to a time for running a mile and to your average\n");
    printf("speed in miles per hour.\n");
    printf("Please enter, in kilometers, the distance run.\n");
    scanf("%lf", &distk); // %lf表示读取一个double类型的数值
    printf("Begin by entering the minutes.\n");
    scanf("%d", &min);
    printf("Now enter the seconds.\n");
    scanf("%d", &sec);
    time = S_PER_M * min + sec;
    distm = M_PER_K * distk;
    rate = distm / time * S_PER_H;
    mtime = (double)time / distm;
    mmin = (int)mtime / S_PER_M; // 求出分钟数
    msec = (int)mtime % S_PER_M; // 求出剩余的秒数
    printf("You ran %1.2f km(%1.2f miles) in %d min, %d sec.\n", distk, distm, min, sec);
    printf("That pace corresponds to running a mile in %d min, ", mmin);
    printf("%d sec.\nYour average speed was %1.2f mph.\n", msec, rate);
    return 0;
}
