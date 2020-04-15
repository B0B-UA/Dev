class Unit {
    private int damage;
    private int hitPoints;
    private int hitPointsLimit;
    private String name;

    private void ensureIsAlive() throws UnitIsDead {
        if ( hitPoints < 0 ) {
            this.hitPoints = 0;
            throw new UnitIsDead();
        }
    }
    
    Unit(String name, int hp, int dmg) {
        this.name = name;
        this.hitPoints = hp;
        this.hitPointsLimit = hp;
        this.damage = dmg;
    }

    public Unit () throws UnitIsDead {
        this("HellCat", 670, 190);
    }

    public int getDamage() {
        return this.damage;
    }

    public int getHitPoints() {
        return this.hitPoints;
    }

    public int getHitPointsLimit() {
        return this.hitPointsLimit;
    }

    public String getName() {
        return this.name;
    }

    public void addHitPoints(int hp) throws UnitIsDead {
        ensureIsAlive();

        if (this.hitPoints + hp > this.hitPointsLimit ) {
            this.hitPoints = this.hitPointsLimit;
        } else {
            this.hitPoints += hp;
        }
    }

    public void takeDamage(int dmg) throws UnitIsDead {
        ensureIsAlive();

        this.hitPoints -= dmg;
    }

    public void attack(Unit enemy) throws UnitIsDead {
        ensureIsAlive();

        enemy.takeDamage(this.damage);
        this.counterAttack(enemy);
    }
    public void counterAttack(Unit enemy) throws UnitIsDead {
        ensureIsAlive();

        this.takeDamage(enemy.damage/2);
    }

    public void show() {
        System.out.println("(" + this.getName() + ") - " + this.getHitPoints());
    }
}