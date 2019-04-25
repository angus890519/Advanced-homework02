/* 計算機概論實務-進階練習作業-作業2 */
/* 製作人：郭柏鋒 */
/* 完成時間：2019/04/09 01:31 */  
/*此題是修改於計算機概論實務基礎練習作業-作業10:將輸入的英文大小寫互換。*/ 
#include<stdio.h> //函示庫 
#include<stdlib.h>//函示庫  
#include<string.h>//函示庫 
main()
{
  char S[5000];//定義一個陣列 
  char ouput; //輸出 
  printf("請輸入一個字串："); 
  while(scanf("%s",S)==1) //輸入字串 
      {
         printf("處理過的字串為：",ouput);
		 int a,N=strlen(S); //用內建抓看輸入的字元個數 
         for(a=N-1;a>=0;a--)// 從後面開始輸出 
               printf("%c",S[a]); //顯示 
      } 
	system("pause");//暫停視窗 
    return 0; //回傳值為0  
}

