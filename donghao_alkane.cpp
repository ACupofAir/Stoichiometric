#include "widget.h"

void Widget::Wanting(double doubletanshu, double doubleqingshu)
{
    int tanshu = int(doubletanshu);
    int qingshu = int (doubleqingshu);

    int a[8][3][2];
    for (int i = 0; i < 8; ++i)     //清零
    {
        for (int j = 0; j < 3; ++j)
        {
            a[i][j][0] = 0;
            a[i][j][1] = 0;
            for (int k = 0; k < 18; ++k)
            {
                o[i][j][0][k] = 0;
                o[i][j][1][k] = 0;
            }
        }
    }






    if (tanshu <= 3)
    {
        for (int i = 0; i < tanshu; ++i)
            a[i][0][0] = 1;


        for (int i = 0; i < 8; ++i)                         //存档
            for (int j = 0; j < 3; ++j)
            {
                o[i][j][0][t] = a[i][j][0];
                o[i][j][1][t] = a[i][j][1];
            }
        t++;                                      //


    }


    else if (3 < tanshu and tanshu <= 5)
    {
        for (int i = 0; i < tanshu; ++i)
            a[i][0][0] = 1;


        for (int i = 0; i < 8; ++i)                         //存档
            for (int j = 0; j < 3; ++j)
            {
                o[i][j][0][t] = a[i][j][0];
                o[i][j][1][t] = a[i][j][1];
            }
        t++;                                      //





        int zhulian = tanshu - 1;


        for (; zhulian >= 3; --zhulian)
        {
            a[zhulian][0][0] = 0;
            int shengtan = tanshu - zhulian;
            if (shengtan == 1)
            {
                a[1][1][0] = 1;



                for (int i = 0; i < 8; ++i)                         //存档
                    for (int j = 0; j < 3; ++j)
                    {
                        o[i][j][0][t] = a[i][j][0];
                        o[i][j][1][t] = a[i][j][1];
                    }
                t++;                                      //





                a[1][1][0] = 0;
            }
            else
            {
                a[1][1][0] = 1;
                a[1][2][0] = 1;



                for (int i = 0; i < 8; ++i)                         //存档
                    for (int j = 0; j < 3; ++j)
                    {
                        o[i][j][0][t] = a[i][j][0];
                        o[i][j][1][t] = a[i][j][1];
                    }
                t++;                                      //





            }
        }

    }



    else if (tanshu > 5 and tanshu <= 8)
    {
        int a1[2];
        int a2[2];



        for (int i = 0; i < tanshu; ++i)
            a[i][0][0] = 1;



        for (int i = 0; i < 8; ++i)                         //存档
            for (int j = 0; j < 3; ++j)
            {
                o[i][j][0][t] = a[i][j][0];
                o[i][j][1][t] = a[i][j][1];
            }
        t++;                                      //





        for (int zhulian = tanshu - 1; zhulian >= 4; --zhulian)                                 //主链递减
        {
            a[zhulian][0][0] = 0;

            if (zhulian % 2 == 1)																	//奇碳链
            {
                for (int zhongtan = 0; zhongtan <= 2 and zhongtan <= tanshu - zhulian; ++zhongtan)       //中碳数递增
                {

                    if (tanshu == 7 and zhulian == 5 and zhongtan == 2)    //752
                    {
                        a[2][1][0] = a[2][1][1] = 1;


                        for (int i = 0; i < 8; ++i)                         //存档
                            for (int j = 0; j < 3; ++j)
                            {
                                o[i][j][0][t] = a[i][j][0];
                                o[i][j][1][t] = a[i][j][1];
                            }
                        t++;                                      //


                        a[2][1][0] = a[2][1][1] = 0;
                    }
                    if (tanshu == 8 and zhulian == 5 and zhongtan == 2)  //852
                    {
                        a[1][1][0] = a[2][1][0] = a[2][1][1] = 1;



                        for (int i = 0; i < 8; ++i)                         //存档
                            for (int j = 0; j < 3; ++j)
                            {
                                o[i][j][0][t] = a[i][j][0];
                                o[i][j][1][t] = a[i][j][1];
                            }
                        t++;                                      //



                        a[1][1][0] = a[2][1][0] = a[2][1][1] = 0;
                        a[2][1][0] = a[2][1][1] = a[2][2][0] = 1;     //853



                        for (int i = 0; i < 8; ++i)                         //存档
                            for (int j = 0; j < 3; ++j)
                            {
                                o[i][j][0][t] = a[i][j][0];
                                o[i][j][1][t] = a[i][j][1];
                            }
                        t++;                                      //



                        a[2][1][0] = a[2][1][1] = a[2][2][0] = 0;
                    }


                    for (int i = 1; i <= zhongtan; ++i)
                        a[zhulian / 2][i][0] = 1;

                    int shengtan = tanshu - zhongtan - zhulian;

                    int C1 = shengtan;
                    if (C1 > 2)
                        C1 = 2;

                    for (; C1 >= (shengtan % 2 == 0 ? (shengtan / 2) : (shengtan / 2 + 1)); --C1)
                    {
                        for (int i = 0; i < 2; ++i)
                        {
                            a1[i] = 0; a2[i] = 0;
                        }                                 //a1a2 clear


                        int C2 = shengtan - C1;
                        int supw1 = (zhulian / 2 - 1) * C1;
                        int supw2 = (zhulian / 2 - 1) * C2;
                        if (C1 == C2 and C1 != 0)                                                      //左右碳数相等
                        {
                            supw2 = supw1 - 1;
                            for (int i = 2; i <= (zhulian / 2); ++i)
                            {
                                for (int j = 0; j < C1; ++j)
                                {
                                    a1[j] = i;
                                    a2[j] = zhulian - i + 1;
                                }

                                for (int j = 0; j < 2; ++j)
                                {
                                    if (a1[j] != 0)
                                        a[a1[j] - 1][j + 1][0] = 1;
                                    if (a2[j] != 0)
                                        a[a2[j] - 1][j + 1][0] = 1;
                                }


                                for (int i = 0; i < 8; ++i)                         //存档
                                    for (int j = 0; j < 3; ++j)
                                    {
                                        o[i][j][0][t] = a[i][j][0];
                                        o[i][j][1][t] = a[i][j][1];
                                    }
                                t++;                                      //



                                for (int j = 0; j < zhulian; ++j)
                                {
                                    if (j != zhulian / 2)
                                        a[j][1][0] = a[j][2][0] = 0;
                                }

                            }

                            for (int i = 0; i < 2; ++i)
                            {
                                a1[i] = 0; a2[i] = 0;
                            }                                 //a1a2 clear


                        }
                        else if (C1 == C2)
                        {


                            for (int i = 0; i < 8; ++i)                         //存档
                                for (int j = 0; j < 3; ++j)
                                {
                                    o[i][j][0][t] = a[i][j][0];
                                    o[i][j][1][t] = a[i][j][1];
                                }
                            t++;                                      //




                            for (int j = 0; j < zhulian; ++j)
                            {
                                if (j != zhulian / 2)
                                    a[j][1][0] = a[j][2][0] = 0;
                            }
                            break;
                        }



                        for (int i = 0; i < C1; ++i)
                            a1[i] = 2;
                        for (int i = 0; i < C2; ++i)
                            a2[i] = zhulian - 1;

                        int supwl = 0; int supwr = 0;

                        for (int i = 0; i < 2; ++i)           //算权
                        {
                            if (a1[i] > 0)
                                supwl += a1[i] - 1;
                            if (a2[i] > 0)
                                supwr += zhulian - a2[i];
                        }

                        if (supwl == supw1 and supwr == supw2)
                        {

                            for (int j = 0; j < 2; ++j)
                            {
                                if (a1[j] != 0)
                                    a[a1[j] - 1][j + 1][0] = 1;
                                if (a2[j] != 0)
                                    a[a2[j] - 1][j + 1][0] = 1;
                            }


                            for (int i = 0; i < 8; ++i)                         //存档
                                for (int j = 0; j < 3; ++j)
                                {
                                    o[i][j][0][t] = a[i][j][0];
                                    o[i][j][1][t] = a[i][j][1];
                                }
                            t++;                                      //




                            for (int j = 0; j < zhulian; ++j)
                            {
                                if (j != zhulian / 2)
                                    a[j][1][0] = a[j][2][0] = 0;
                            }


                        }



                        while (supwl <= supw1 and supwr <= supw2 and not(supwl == supw1 and supwr == supw2))
                        {
                            if (not(C1 == C2 and a1[0] == zhulian - a2[0] + 1))
                            {
                                for (int j = 0; j < 2; ++j)                                       //out first
                                {
                                    if (a1[j] != 0)
                                        a[a1[j] - 1][j + 1][0] = 1;
                                    if (a2[j] != 0)
                                        a[a2[j] - 1][j + 1][0] = 1;
                                }


                                for (int i = 0; i < 8; ++i)                         //存档
                                    for (int j = 0; j < 3; ++j)
                                    {
                                        o[i][j][0][t] = a[i][j][0];
                                        o[i][j][1][t] = a[i][j][1];
                                    }
                                t++;                                      //




                                for (int j = 0; j < zhulian; ++j)
                                {
                                    if (j != zhulian / 2)
                                        a[j][1][0] = a[j][2][0] = 0;
                                }                                                                 //out first
                            }

                            if (C1 == 1 and C2 == 1)
                            {
                                if ((zhulian - a2[0] + 1) == a1[0])
                                {
                                    a1[0]++;
                                    a2[0] = zhulian - 1;
                                }
                                else a2[0]--;


                                supwl = supwr = 0;							//算权
                                for (int i = 0; i < 2; ++i)
                                {
                                    if (a1[i] > 0)
                                        supwl += a1[i] - 1;
                                    if (a2[i] > 0)
                                        supwr += zhulian - a2[i];
                                }
                                if (supwl == supw1 and supwr == supw2)
                                {

                                    for (int j = 0; j < 2; ++j)
                                    {
                                        if (a1[j] != 0)
                                            a[a1[j] - 1][j + 1][0] = 1;
                                        if (a2[j] != 0)
                                            a[a2[j] - 1][j + 1][0] = 1;
                                    }


                                    for (int i = 0; i < 8; ++i)                         //存档
                                        for (int j = 0; j < 3; ++j)
                                        {
                                            o[i][j][0][t] = a[i][j][0];
                                            o[i][j][1][t] = a[i][j][1];
                                        }
                                    t++;                                      //




                                    for (int j = 0; j < zhulian; ++j)
                                    {
                                        if (j != zhulian / 2)
                                            a[j][1][0] = a[j][2][0] = 0;
                                    }

                                }

                            }
                            else if (C1 == 1 and C2 == 0);
                            {
                                a1[0]++;

                                supwl = supwr = 0;							//算权
                                for (int i = 0; i < 2; ++i)
                                {
                                    if (a1[i] > 0)
                                        supwl += a1[i] - 1;
                                    if (a2[i] > 0)
                                        supwr += zhulian - a2[i];
                                }
                                if (supwl == supw1 and supwr == supw2)
                                {

                                    for (int j = 0; j < 2; ++j)
                                    {
                                        if (a1[j] != 0)
                                            a[a1[j] - 1][j + 1][0] = 1;
                                        if (a2[j] != 0)
                                            a[a2[j] - 1][j + 1][0] = 1;
                                    }


                                    for (int i = 0; i < 8; ++i)                         //存档
                                        for (int j = 0; j < 3; ++j)
                                        {
                                            o[i][j][0][t] = a[i][j][0];
                                            o[i][j][1][t] = a[i][j][1];
                                        }
                                    t++;                                      //




                                    for (int j = 0; j < zhulian; ++j)
                                    {
                                        if (j != zhulian / 2)
                                            a[j][1][0] = a[j][2][0] = 0;
                                    }


                                }
                            }
                            if (C1 > 1)break;

                        }

                    }


                    for (int i = 1; i <= zhongtan; ++i)
                        a[zhulian / 2][i][0] = 0;
                }


            }

            else                                                                          //偶碳链
            {


                int shengtan = tanshu - zhulian;

                int C1 = shengtan;
                if (C1 > 2)
                    C1 = 2;

                if (tanshu == 8 and zhulian == 6)    //860
                {
                    a[1][1][0] = a[2][1][0] = 1;  //start


                    for (int i = 0; i < 8; ++i)                         //存档
                        for (int j = 0; j < 3; ++j)
                        {
                            o[i][j][0][t] = a[i][j][0];
                            o[i][j][1][t] = a[i][j][1];
                        }
                    t++;                                      //



                    a[1][1][0] = a[2][1][0] = 0;    //end
                    a[2][1][0] = a[2][2][0] = 1;    //start


                    for (int i = 0; i < 8; ++i)                         //存档
                        for (int j = 0; j < 3; ++j)
                        {
                            o[i][j][0][t] = a[i][j][0];
                            o[i][j][1][t] = a[i][j][1];
                        }
                    t++;                                      //



                    a[2][1][0] = a[2][2][0] = 0;    //end
                    a[2][1][0] = a[2][1][1] = 1;    //start


                    for (int i = 0; i < 8; ++i)                         //存档
                        for (int j = 0; j < 3; ++j)
                        {
                            o[i][j][0][t] = a[i][j][0];
                            o[i][j][1][t] = a[i][j][1];
                        }
                    t++;                                      //



                    a[2][1][0] = a[2][1][1] = 0;    //end
                }                                                    //860


                for (; C1 >= (shengtan % 2 == 0 ? (shengtan / 2) : (shengtan / 2 + 1)); --C1)
                {
                    for (int i = 0; i < 2; ++i)
                    {
                        a1[i] = 0; a2[i] = 0;
                    }                                 //a1a2 clear


                    int C2 = shengtan - C1;
                    int supw1 = (zhulian / 2 - 1) * C1;
                    int supw2 = (zhulian / 2 - 1) * C2;
                    if (C1 == C2 and C1 != 0)                                                        //左右碳数相等
                    {
                        supw2 = supw1 - 1;
                        for (int i = 2; i <= (zhulian / 2); ++i)
                        {
                            for (int j = 0; j < C1; ++j)
                            {
                                a1[j] = i;
                                a2[j] = zhulian - i + 1;
                            }

                            for (int j = 0; j < 2; ++j)
                            {
                                if (a1[j] != 0)
                                    a[a1[j] - 1][j + 1][0] = 1;
                                if (a2[j] != 0)
                                    a[a2[j] - 1][j + 1][0] = 1;
                            }


                            for (int i = 0; i < 8; ++i)                         //存档
                                for (int j = 0; j < 3; ++j)
                                {
                                    o[i][j][0][t] = a[i][j][0];
                                    o[i][j][1][t] = a[i][j][1];
                                }
                            t++;                                      //




                            for (int j = 0; j < zhulian; ++j)
                            {
                                a[j][1][0] = a[j][2][0] = 0;
                            }

                        }

                        for (int i = 0; i < 2; ++i)
                        {
                            a1[i] = 0; a2[i] = 0;
                        }                                 //a1a2 clear


                    }
                    else if (C1 == C2)
                    {


                        for (int i = 0; i < 8; ++i)                         //存档
                            for (int j = 0; j < 3; ++j)
                            {
                                o[i][j][0][t] = a[i][j][0];
                                o[i][j][1][t] = a[i][j][1];
                            }
                        t++;                                      //




                        for (int j = 0; j < zhulian; ++j)
                        {
                            a[j][1][0] = a[j][2][0] = 0;
                        }
                        break;
                    }




                    for (int i = 0; i < C1; ++i)
                        a1[i] = 2;
                    for (int i = 0; i < C2; ++i)
                        a2[i] = zhulian - 1;

                    int supwl = 0; int supwr = 0;

                    for (int i = 0; i < 2; ++i)
                    {
                        if (a1[i] > 0)
                            supwl += a1[i] - 1;
                        if (a2[i] > 0)
                            supwr += zhulian - a2[i];
                    }

                    if (supwl == supw1 and supwr == supw2)
                    {

                        for (int j = 0; j < 2; ++j)
                        {
                            if (a1[j] != 0)
                                a[a1[j] - 1][j + 1][0] = 1;
                            if (a2[j] != 0)
                                a[a2[j] - 1][j + 1][0] = 1;
                        }


                        for (int i = 0; i < 8; ++i)                         //存档
                            for (int j = 0; j < 3; ++j)
                            {
                                o[i][j][0][t] = a[i][j][0];
                                o[i][j][1][t] = a[i][j][1];
                            }
                        t++;                                      //




                        for (int j = 0; j < zhulian; ++j)
                        {
                            a[j][1][0] = a[j][2][0] = 0;
                        }

                    }



                    while (supwl <= supw1 and supwr <= supw2 and not(supwl == supw1 and supwr == supw2))
                    {
                        if (not(C1 == C2 and a1[0] == zhulian - a2[0] + 1))
                        {
                            for (int j = 0; j < 2; ++j)                                       //out first
                            {
                                if (a1[j] != 0)
                                    a[a1[j] - 1][j + 1][0] = 1;
                                if (a2[j] != 0)
                                    a[a2[j] - 1][j + 1][0] = 1;
                            }


                            for (int i = 0; i < 8; ++i)                         //存档
                                for (int j = 0; j < 3; ++j)
                                {
                                    o[i][j][0][t] = a[i][j][0];
                                    o[i][j][1][t] = a[i][j][1];
                                }
                            t++;                                      //




                            for (int j = 0; j < zhulian; ++j)
                            {
                                a[j][1][0] = a[j][2][0] = 0;
                            }                                                                 //out first

                        }

                        if (C1 == 1 and C2 == 1)
                        {
                            if ((zhulian - a2[0] + 1) == a1[0])
                            {
                                a1[0]++;
                                a2[0] = zhulian - 1;
                            }
                            else a2[0]--;

                            supwl = supwr = 0;							//算权
                            for (int i = 0; i < 2; ++i)
                            {
                                if (a1[i] > 0)
                                    supwl += a1[i] - 1;
                                if (a2[i] > 0)
                                    supwr += zhulian - a2[i];
                            }
                            if (supwl == supw1 and supwr == supw2)
                            {

                                for (int j = 0; j < 2; ++j)
                                {
                                    if (a1[j] != 0)
                                        a[a1[j] - 1][j + 1][0] = 1;
                                    if (a2[j] != 0)
                                        a[a2[j] - 1][j + 1][0] = 1;
                                }


                                for (int i = 0; i < 8; ++i)                         //存档
                                    for (int j = 0; j < 3; ++j)
                                    {
                                        o[i][j][0][t] = a[i][j][0];
                                        o[i][j][1][t] = a[i][j][1];
                                    }
                                t++;                                      //




                                for (int j = 0; j < zhulian; ++j)
                                {
                                    a[j][1][0] = a[j][2][0] = 0;
                                }

                            }

                        }
                        else if (C1 == 1 and C2 == 0);
                        {
                            a1[0]++;

                            supwl = supwr = 0;							//算权
                            for (int i = 0; i < 2; ++i)
                            {
                                if (a1[i] > 0)
                                    supwl += a1[i] - 1;
                                if (a2[i] > 0)
                                    supwr += zhulian - a2[i];
                            }

                            if (supwl == supw1 and supwr == supw2)
                            {

                                for (int j = 0; j < 2; ++j)
                                {
                                    if (a1[j] != 0)
                                        a[a1[j] - 1][j + 1][0] = 1;
                                    if (a2[j] != 0)
                                        a[a2[j] - 1][j + 1][0] = 1;
                                }


                                for (int i = 0; i < 8; ++i)                         //存档
                                    for (int j = 0; j < 3; ++j)
                                    {
                                        o[i][j][0][t] = a[i][j][0];
                                        o[i][j][1][t] = a[i][j][1];
                                    }
                                t++;                                      //




                                for (int j = 0; j < zhulian; ++j)
                                {
                                    a[j][1][0] = a[j][2][0] = 0;
                                }


                            }
                        }
                        if (C1 > 1)break;

                    }

                }

            }

        }
    }

}//mark
