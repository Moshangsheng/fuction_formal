  #include <stdio.h>
  #include<stdlib.h>
  #include<math.h>
  /*����Բ���  s = 3.14*pow(radius,2)
     ����������  s = width * height
     �������������   s = width * height /2
    */
    double calcCircle(double);       //���ݴ���İ뾶������Բ���
    double calcRetangle(double,double);        //��������Ŀ�͸�����������
    double calcTriangle(double, double);         //��������Ŀ�͸�����������
    double validate(double);    //���û���������зǸ���֤
    int main ()
    {
         double radius;
         double width,height;  //ͼ�εĿ�͸�
         double s ;                //ͼ�ε����
         int choice;
         printf("1,Բ\n");
         printf("2,����\n");
         printf("3,������\n");
         printf("��ϵͳֻ֧����������ͼ�ε��������ѡ��");
         scanf("%d",&choice);
         switch(choice)
         {case 1:
                 printf("������Բ�İ뾶����������Բ�����");
                 do
                 {  scanf("%lf",&radius);
                 if(!validate(radius))
                 {
                     printf("��������Ǹ�����������һ��������");
                 }
                 }while (!validate(radius));
                  s = calcCircle(radius);     //���ü���Բ����ķ���
                  printf("Բ�����Ϊ%.2lf\n",s);
             break;
          case 2:
              printf("��ֱ�������εĿ�͸ߣ�");
              do
              {  scanf("%lf%lf",&width,&height);
                  if(!validate(width) || !validate(height))
                  {
                      printf("��������Ϊ��������ȫ��Ҫ������ȷ�����֣�������");
                  }
              }while(!validate(width) || !validate(height));
                s = calcRetangle(width,height);
                printf("���ε����Ϊ%.2lf\n",s);
             break;
           case 3:
                printf("�����������εĿ�͸ߣ�");
                do
                {  scanf("%lf%lf",&width,&height);
                    if (!validate(width) || !validate(height))
                    {
                        printf("������������ȷ�����֣�ֻ��Ϊ����Ŷ");
                    }
                }while(!validate(width) || !validate(height));
                s = calcTriangle(width, height);
                printf("�����ε����Ϊ%.2lf",s);
             break;
         default :
            printf("��ϵͳֻ֧������ͼ�ε��������ѡ��");
           }
        return 0;
    }
    double calcCircle(double radius)
    {
        double s = 3.14 * pow(radius,2);   //pow���������Լ�����
        return s;
    }
    double validate(double num)  //��֤�����double�����Ƿ�Ϊ����
    {
        return num > 0;     //  ���num>0,�򷵻�һ������ֵ����ʾ��
    }
    double calcRetangle(double width,double height)  //����
    {
        double s = width * height;
        return s;
    }
    double calcTriangle(double width,double height)   // ������
    {
        double s = width * height / 2;
        return s;
    }
