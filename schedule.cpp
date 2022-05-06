#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<time.h>
#include<windows.h>
#include<stdlib.h>



int main()

{

    while (1)
    {

        time_t t = time(NULL);
        time_t t1;
        time(&t1);


        /*printf("t:%ld\n", t);
        printf("t1:%ld\n", t1);*/
        int h = 0;
        int m = 0;


        // int s = 0;
        //s = t % 60;      //时 
        m = t % 3600 / 60; //分 
        h = (t % (3600 * 24) / 3600 + 8); //秒 
        printf("目前的时间%02d:%02d\n", h, m);//显示目前的时间

        int h2 = 0, m2 = 0;
        printf("请以 \"x(min) xx(sec)\"的格式输入您想要计算的时间，将计算距离现在还剩多长时间");
        scanf("%d %d", &h2, &m2);

        while (true)
        {
            time_t t = time(NULL);
            time_t t1;
            time(&t1);



            int h = 0;
            int m = 0;


            // int s = 0;
            //s = t % 60;      //时 
            m = t % 3600 / 60; //分 
            h = (t % (3600 * 24) / 3600 + 8); //秒 
            if (m2 > m)
            {
                printf("还剩余%d时%d分", h2 - h, m2 - m);
            }
            else
            {
                printf("还剩余%d时%d分", h2 - h - 1, m2 - m + 60);
            }

            Sleep(1000);

            system("cls");
        }




       
        
        
    }

    return 0;
}

