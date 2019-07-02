
#include  <stdio.h>  
#include  <time.h>  
 
int main()
{
	time_t t = time(NULL); 
	tm *tp = localtime(&t); 
	
	// 北京时间
	printf("%d/%d/%d\n", tp->tm_mon+1, tp->tm_mday, tp->tm_year + 1900);  
	printf("%d:%d:%d\n", tp->tm_hour, tp->tm_min, tp->tm_sec); 
	

	// 北京时间
	printf("%d/%d/%d\n", tp->tm_mon+1, tp->tm_mday, tp->tm_year + 1900);  
	printf("%d:%d:%d\n", tp->tm_hour, tp->tm_min, tp->tm_sec); 
 
	// UTC今天秒数
	int second1 = t % (24 * 60 * 60);
	printf("%d\n", second1);
 
	// 北京时间今天秒数
	int second2 = tp->tm_hour * 3600 + tp->tm_min * 60 + tp->tm_sec;
	printf("%d\n", second2);
 
	// UTC时间与北京时间相隔的小时数
	printf("%d\n", (second1 - second2) / 3600); // -8
	
	return 0;
}
