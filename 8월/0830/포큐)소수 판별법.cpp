/*�ָԱ����� �Ҽ� �Ǻ���*/

bool bPrime = true;
for(int i = 2; i < num; ++i)
{
	if(num % i == 0)
	{
		bPrime = false;
		break;
	}
 }
 
 /* �� �� ���� �Ҽ� �Ǻ���*/
bool bPrime = true;
for(i = 2; i*i < num; ++i)
{
	if(num % i == 0)
	{
		bPrime = false;
		break;
	}
}
