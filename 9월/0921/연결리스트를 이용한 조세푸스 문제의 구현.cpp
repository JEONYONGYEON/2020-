/* ���� ����Ʈ�� �̿��� ����Ǫ�� ������ ���� */

void josephus(int n, int k){
	// ����Ʈ�� �غ��Ѵ�.
	List<int> survivors;
	 for(int i = 1; i<= n; ++i) survivors.push_back(i);
	 // �̹��� ���� ����� ��Ÿ���� ������
	 list<int>::iterator kill = survivors.begin();
	 while(n > 2){
	 	// ù ��° ����� �ڻ��Ѵ�. erase()�� ���� ������ ���� ���Ҹ� ��ȯ�Ѵ�.
		 kill = survivors.erase(kill);
		 if(kill == survivors.end()) kill = survivors.begin();
		 --n;
		 // k-1�� �ٸ� ������� �ű��.
		 for(int i = 0; i < k - 1; ++i){
		 	++kill;
		 	if(kill == survivors.end()) kill = survivors.begin();
		 } 
	 }
	 cout << survivors.front() << " " << survivors.back() << endl;
}
