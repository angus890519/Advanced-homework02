/* �p������׹��-�i���m�ߧ@�~-�@�~2 */
/* �s�@�H�G���f�W */
/* �����ɶ��G2019/04/09 01:31 */  
/*���D�O�ק��p������׹�Ȱ�¦�m�ߧ@�~-�@�~10:�N��J���^��j�p�g�����C*/ 
#include<stdio.h> //��ܮw 
#include<stdlib.h>//��ܮw  
#include<string.h>//��ܮw 
main()
{
  char S[5000];//�w�q�@�Ӱ}�C 
  char ouput; //��X 
  printf("�п�J�@�Ӧr��G"); 
  while(scanf("%s",S)==1) //��J�r�� 
      {
         printf("�B�z�L���r�ꬰ�G",ouput);
		 int a,N=strlen(S); //�Τ��ا�ݿ�J���r���Ӽ� 
         for(a=N-1;a>=0;a--)// �q�᭱�}�l��X 
               printf("%c",S[a]); //��� 
      } 
	system("pause");//�Ȱ����� 
    return 0; //�^�ǭȬ�0  
}

