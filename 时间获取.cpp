
#include  <stdio.h>  
#include  <time.h>  
 
int main()
{
	time_t t = time(NULL); 
	tm *tp = localtime(&t); 
	
	// ����ʱ��
	printf("%d/%d/%d\n", tp->tm_mon+1, tp->tm_mday, tp->tm_year + 1900);  
	printf("%d:%d:%d\n", tp->tm_hour, tp->tm_min, tp->tm_sec); 
	

	// ����ʱ��
	printf("%d/%d/%d\n", tp->tm_mon+1, tp->tm_mday, tp->tm_year + 1900);  
	printf("%d:%d:%d\n", tp->tm_hour, tp->tm_min, tp->tm_sec); 
 
	// UTC��������
	int second1 = t % (24 * 60 * 60);
	printf("%d\n", second1);
 
	// ����ʱ���������
	int second2 = tp->tm_hour * 3600 + tp->tm_min * 60 + tp->tm_sec;
	printf("%d\n", second2);
 
	// UTCʱ���뱱��ʱ�������Сʱ��
	printf("%d\n", (second1 - second2) / 3600); // -8
	
	return 0;
}
