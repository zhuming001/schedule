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
        //s = t % 60;      //ʱ 
        m = t % 3600 / 60; //�� 
        h = (t % (3600 * 24) / 3600 + 8); //�� 
        printf("Ŀǰ��ʱ��%02d:%02d\n", h, m);//��ʾĿǰ��ʱ��

        int h2 = 0, m2 = 0;
        printf("���� \"x(min) xx(sec)\"�ĸ�ʽ��������Ҫ�����ʱ�䣬������������ڻ�ʣ�೤ʱ��");
        scanf("%d %d", &h2, &m2);

        while (true)
        {
            time_t t = time(NULL);
            time_t t1;
            time(&t1);



            int h = 0;
            int m = 0;


            // int s = 0;
            //s = t % 60;      //ʱ 
            m = t % 3600 / 60; //�� 
            h = (t % (3600 * 24) / 3600 + 8); //�� 
            if (m2 > m)
            {
                printf("��ʣ��%dʱ%d��", h2 - h, m2 - m);
            }
            else
            {
                printf("��ʣ��%dʱ%d��", h2 - h - 1, m2 - m + 60);
            }

            Sleep(1000);

            system("cls");
        }




       
        
        
    }

    return 0;
}

