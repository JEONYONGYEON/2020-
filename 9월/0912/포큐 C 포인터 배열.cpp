/* ������ �迭 �� */
int nums1[3] = {11, 22, 33};
int nums2[1] = {90};
int nums3[4] = {88, 36, 37};

int* num_pointers[3];
num_pointers[0] = nums1;
num_pointers[1] = nums2;
num_pointers[2] = nums3;

/* �Լ����� �����Ϸ��� 
���� �迭�� ���̵� �˷���� �ؿ�*/

void print_array(int* const data[], const size_t size, const size_t lengths[])
{
	size_t i;
	size_t j;
	const int* p;
	
	for(int i = 0; i< size; ++i){
		p = data[i];
		printf("nums[%d]:", i);
		
		for(j = 0; j < lengths[i]; ++j){
			printf(" %d", p[j]);
		}
		printf("\n");
	}
 } 
 
 /* 2���� ������ �迭 */
 
 void do_magic(int matrix[][10], size_t m)
 {
 	/* ���� �ڵ带 ���⿡!! */
 }
 
 int main(void)
 {
 	int matrix[5][10] = {
	     { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 },
	     { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 },
	     { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 },
	     { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 },
	     { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }
	 };
	 
	 do_magic(matrix, 5);
 }
