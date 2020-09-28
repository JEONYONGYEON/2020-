/* 19.2 ������ �̿��� ¦�� ���� �ʴ� ��ȣ ������ �ذ��ϴ� �˰����� ����*/

bool wellMatched(const string& formula){
	// ���� ��ȣ ���ڵ�� �ݴ� ��ȣ ���ڵ�
	const string opening("({["), closing("]})");
	// �̹� ���� ��ȣ���� ������� ��� ����
	stack<char> openStack;
	for(int i = 0; i < formula.size(); ++i)
	// ���� ��ȣ���� �ݴ� ��ȣ���� Ȯ���Ѵ�
	openStack.push(formula[i]);
	else{
		// �� ���� ��� ���� �� ���� ���ڿ� ���纸��.
		// ������ ��� �ִ� ��쿡�� ����
		if(openStack.empty()) return fasle;
		// ���� ¦�� ���� �ʾƵ� ����
		if(opening.find(openStack.top()) != closing.find(formula[i])) 
		{
			return false;
		}
		// ¦�� ���� ��ȣ�� ���ÿ��� ����.
		openStack.pop();
	}
	 // ������ ���� ��ȣ�� ����� ����
	 return openStack.empty(); 
}
