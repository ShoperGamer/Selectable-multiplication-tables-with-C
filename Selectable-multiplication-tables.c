#include <stdio.h> //input/output

int main()
{
    int start,end;

    printf("input start = "); //�Ѻ����ٵäٳ�������
    scanf("%d",&start);

    printf("input End = "); //�Ѻ����ٵäٳ������
    scanf("%d",&end);

    //�ʴ���������ٵäٳ
    for(int i = start; i <= end; i++){
    printf("---Table %d ---\n",i);

    //�ʴ��Ťٳ
    for(int l =1; l<=12; l++){
            printf("%d X %d = %d\n",i,l,i*l);

    }
    }

    return 0;
}

