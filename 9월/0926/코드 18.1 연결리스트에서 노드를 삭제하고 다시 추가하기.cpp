/* �ڵ� 18.1 ���� ����Ʈ���� ��带 �����ϰ� �ٽ� �߰��ϱ� */

//node ����/���� ����� �����͸� �ٲ㼭 node�� ����Ʈ���� �����Ѵ�.
void deleteNode(ListNode* node){
	node->prev->next = node->next;
	node->next->prev = node->prev;
} 

//node ����/���� ����� �����͸� �ٲ㼭 �ڱ� �ڽ��� �ٽ� ����Ʈ�� �����Ѵ�.
void recoverNode(ListNode* node){
	node->prev->next = node;
	node->next->prev = node;
} 
