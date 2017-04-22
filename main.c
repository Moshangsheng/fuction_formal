  #include <stdio.h>
  #include<stdlib.h>
  #include<math.h>
  /*计算圆面积  s = 3.14*pow(radius,2)
     计算矩形面积  s = width * height
     计算三角形面积   s = width * height /2
    */
    double calcCircle(double);       //根据传入的半径，返回圆面积
    double calcRetangle(double,double);        //根据输入的宽和高来求矩形面积
    double calcTriangle(double, double);         //根据输入的宽和高来求三角形
    double validate(double);    //对用户的输入进行非负验证
    int main ()
    {
         double radius;
         double width,height;  //图形的宽和高
         double s ;                //图形的面积
         int choice;
         printf("1,圆\n");
         printf("2,矩形\n");
         printf("3,三角形\n");
         printf("本系统只支持以上三种图形的面积，请选择：");
         scanf("%d",&choice);
         switch(choice)
         {case 1:
                 printf("请输入圆的半径，我来计算圆的面积");
                 do
                 {  scanf("%lf",&radius);
                 if(!validate(radius))
                 {
                     printf("你输入的是负数，请重新一个正数：");
                 }
                 }while (!validate(radius));
                  s = calcCircle(radius);     //调用计算圆面积的方法
                  printf("圆的面积为%.2lf\n",s);
             break;
          case 2:
              printf("请分别输入矩形的宽和高：");
              do
              {  scanf("%lf%lf",&width,&height);
                  if(!validate(width) || !validate(height))
                  {
                      printf("你输入有为负数，请全部要输入正确的数字，即正数");
                  }
              }while(!validate(width) || !validate(height));
                s = calcRetangle(width,height);
                printf("矩形的面积为%.2lf\n",s);
             break;
           case 3:
                printf("请输入三角形的宽和高：");
                do
                {  scanf("%lf%lf",&width,&height);
                    if (!validate(width) || !validate(height))
                    {
                        printf("请重新输入正确的数字，只能为正数哦");
                    }
                }while(!validate(width) || !validate(height));
                s = calcTriangle(width, height);
                printf("三角形的面积为%.2lf",s);
             break;
         default :
            printf("本系统只支持三种图形的面积，请选择：");
           }
        return 0;
    }
    double calcCircle(double radius)
    {
        double s = 3.14 * pow(radius,2);   //pow函数可以自己定义
        return s;
    }
    double validate(double num)  //验证输入的double类型是否为正数
    {
        return num > 0;     //  如果num>0,则返回一个非零值，表示真
    }
    double calcRetangle(double width,double height)  //矩形
    {
        double s = width * height;
        return s;
    }
    double calcTriangle(double width,double height)   // 三角形
    {
        double s = width * height / 2;
        return s;
    }
