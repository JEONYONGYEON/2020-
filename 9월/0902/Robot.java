/*다음 중 의존관계는? */
public final class Robot {
    private int hp;
    private Head head;
    // 다른 멤버 변수는 생략
    
    public Robot(int initialHP) {
    	this.hp = initialHp;
    	this.head = new Head();
    }
    
    // 메서드 모두 생략
}

public final class Head {
	private int forAngle;
	// 다른 멤버 변수 생략
	
	public Head(int fovAngle) {
		this.fovAngle = fovAngle;
		...
	}
	
	public Robot pickEnemy() {
		Robot robot;
		
		// 공격할 로봇을 찾는다
		
		return robot;
	}
	
	// 메서드 모두 생략
}

public final class Robot {
	private int hp;
	private Head head;
	// 다른 멤버 변수 생략
	
	public Robot(int initalHp) {
		this.hp = initialHp;
		this.head = new Head();
	}
	
	// 메서드 모두 생략
}