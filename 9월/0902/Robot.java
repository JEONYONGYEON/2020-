/*���� �� ���������? */
public final class Robot {
    private int hp;
    private Head head;
    // �ٸ� ��� ������ ����
    
    public Robot(int initialHP) {
    	this.hp = initialHp;
    	this.head = new Head();
    }
    
    // �޼��� ��� ����
}

public final class Head {
	private int forAngle;
	// �ٸ� ��� ���� ����
	
	public Head(int fovAngle) {
		this.fovAngle = fovAngle;
		...
	}
	
	public Robot pickEnemy() {
		Robot robot;
		
		// ������ �κ��� ã�´�
		
		return robot;
	}
	
	// �޼��� ��� ����
}

public final class Robot {
	private int hp;
	private Head head;
	// �ٸ� ��� ���� ����
	
	public Robot(int initalHp) {
		this.hp = initialHp;
		this.head = new Head();
	}
	
	// �޼��� ��� ����
}