/* 스택의 삽입  */

enum { MAX_NUMS = 8 };

int s_nums[MAX_NUMS];
size_t s_num_count = 0;

void push(int n)
{
	assert(s_num_count < MAX_NUMS);
	s_nums[s_num_count++] = n;
 } 
 
 int main(void)
 {
 	push(88);
 	push(44);
 	push(22);
 	
 	return 0;
 }
 
 /* 스택의 제거 */
 enum { TRUE = 1, FALSE = 0 };
 enum { MAX_NUMS = 8 };
 
 int s_nums[MAX_NUMS];
 size_t s_nums_count = 0;
 
 int is_empty(void)
 {
 	return (s_num_count == 0);
 }
 
 int pop(void)
 {
 	assert(is_empty() == FALSE);
 	
 	return s_nums[--s_num_count];
 }
 
 int main(void)
 {
 	int num;
 	
 	/* s_nums[] = { 88, 44, 22 } */
 	num = pop();
 	num = pop();
 	
 	return 0;
 }
