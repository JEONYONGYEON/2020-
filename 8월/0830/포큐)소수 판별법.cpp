/*주먹구구식 소수 판별법*/

bool bPrime = true;
for(int i = 2; i < num; ++i)
{
	if(num % i == 0)
	{
		bPrime = false;
		break;
	}
 }
 
 /* 좀 더 빠른 소수 판별법*/
bool bPrime = true;
for(i = 2; i*i < num; ++i)
{
	if(num % i == 0)
	{
		bPrime = false;
		break;
	}
}
