// Person Å¬·¡½º
public boolean equals(Object obj) {
	if(obj == this) {
		return true;
	}
	
	if(obj == null || !(obj instance of Person)) {
		return false;
	}
	
	Person p = (Person) obj;
	return this.firstName.equals(p.firstName) && this.lastName.equals(p.lastName);
}

Person p0 = new Person("Pope", "Kim");
Person p1 = new Person("Pope", "Kim")l
Person p2 = p0;

System.out.println(p0.equals(p1)); // true
System.out.println(p0.equals(p2)); // true