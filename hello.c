#include<stdio.h>
#include<math.h>
//#define PI 3.14
    // enum weekday {mon,tue,wed=5,thur,fri,sar,sun};
    // int a,b,c;
    // a=mon;
    // b=tue;
    // c=sun;
    // printf("%d,%d,%d\n",a,b,c);


    // float x;
    // int i;
    // x=3.6;
    // i=(int) x;
    // printf("x=%f,i=%d",x,i); 

    // int i,k;
    // i=3;
    // k=(i++)+(i++)+(i++);
    // printf("%d,%d\n",i,k);

    // char a,b,c;
    // a='B';b='0';c='Y';
    // putchar(a);
    // putchar(b);
    // putchar(c);
    // putchar('\n');

    // char c;
    // c=getchar();
    // putchar(c);

    // int a=2;
    // float b=2.5;
    // printf("a=%4d,b=%f\n",a,b);

    // int a=-2;
    // printf("D(%d)<--->O(%o)\n",a,a);
    // printf("D(%d)<--->H(%x)\n",a,a);

    // int a,b;
    // scanf("%d%d",&a,&b);
    // printf("%d,%d\n",a,b);

/*大写字母转化
    // char c1,c2;
    // c1=getchar();
    // c2=c1+32;
    // putchar(c2);

    // char c1
    // scanf("%c",&c1);
    // printf("%c\n",c1+32);
     */
/*输入半径r，求圆的面积
       float r,area,PI=3.14;
       scanf("%f",&r);
       area=pow(r,2)*PI;
       printf("area=%f\n",area);
*/
/*a,b,c有键盘输入,输出x1,x2根
       float a,b,c,x1,x2;
       scanf("%f,%f,%f",&a,&b,&c);
       x1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
       x2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
       printf("x1=%4.2f,x2=%4.2f\n",x1,x2);
*/
/*海伦公式
       float a,b,c,s,area;
       scanf("%f,%f,%f",&a,&b,&c);
       s=(a+b+c)/2;
       area=sqrt(s*(s-a)*(s-b)*(s-c));
       printf("area=%4.1f\n",area);

       float a,b,angle,area;
       scanf("%f,%f,%f",&a,&b,&angle);
       area=1/2.0*a*b*sin(angle/180*3.14); //弧度制
       printf("area=%4.2f\n",area);
*/

       // char ch1,ch2;
       // ch1='A'+'5'-'3';
       // ch2='A'+'6'-'3';
       // printf("%d,%c\n",ch1,ch2);

       // int x=10,y=3,z;
       // printf("%d\n",z=(x%y,x/y));

       /*两数互换*/

       



/*输入score,判定等级degree:
1.score<0,score>100 unreasonable
2.100 prefect
3.80^99 A
4.60^79 B
5.NO Pass

        int score;
        printf("please input score:   ");
        scanf("%d",&score);
        if(score<0 || score>100) printf("unreasonable\n");
          else if (score==100) printf("degree prefect\n");
              else if(score >= 80 && score<=90) printf("degree A\n");
                     else if(score >= 60 && score<=79) printf("degree B\n");
                            else printf("NO Pass\n");
        
        int score,y;
        printf("please input score:   ");
        scanf("%d",&score);
        y=(int)(score/10);
        switch (y)
        {
              case 10:case 9:case 8:printf("degree A\n");break;
              case 7:case 6:case 5:printf("degree B\n");break;
              default:printf("degree no\n");break;

        }
          */

         /* 菜单*/
       //   int choice;
       //   int a,b;
       //   while(1)
       //   {
       //        printf("/********MENU*********/\n ");
       //        printf("1.ADD\n");
       //        printf("2.SUB\n");
       //        printf("3.MUL\n");
       //        printf("4.DIV\n");
       //        printf("5.EXIT\n");
       //        printf("please input your choice:");
       //        scanf("%d",&choice);
       //        switch(choice)
       //        {
       //               case 1:
       //                      printf("input num:");
       //                      scanf("%d,%d",&a,&b);
       //                      printf("add result=\n",a+b);
       //                      break;
       //               case 2:printf("you choice is sub\n");break;
       //               case 3:printf("you choice is mul\n");break;
       //               case 4:printf("you choice is dlu\n");break;
       //               case 5:return;
       //        }
       //   }

    /* 闰年判定*/ 

       // int year,leap;
       // scanf("%d",&year);
       // if(year%4!=0) leap=0;
       //        else
/*判断是否为闰年*/
void main()
{
       int year;
       printf("please input:");
       scanf("%d",&year);
       if((year%4==0 && year%100 !=0) || (year%4==0 && year%400 ==0))
              printf("是闰年\n");
       else
              printf("不是闰年\n");
}