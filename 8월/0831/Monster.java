
public class Monster {
    private int hp;
    private int atack;
    private int defense;
    
    public Monster(int hp, int attack, int defense)
    {
    	
    }
    
    public int getHp(void)
    {
    	return this.hp;
    }
    
    public int getAttack(void)
    {
    	return this.attack;
    }
    
    public int getDefense(void)
    {
    	return this.defense;
    }
    
    public final void attack(Monster target) {
    	int damage = calculateDamage(target);
    	target.hp = Math.max(0, target.hp - damage);
    }
    
}

public final class Troll extends Monster {
	public Troll(int hp, int attack, int defense) {
		super(hp, attack, defense);
	}
	
	
	
	public int calculateDamage(Monster target) {
		return this.getAttack() -
				target.getDefense() / 2;
	}
}

