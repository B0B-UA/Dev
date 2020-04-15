class Pen implements WritingUtencil {
    protected int inkAmount;
    protected int inkCapacity;

    public Pen(int inkCapacity) {
        this.inkAmount = inkCapacity;
        this.inkCapacity = inkCapacity;
    }

    public Pen() {
        this(4096);
    }

    public int getInkAmount() {
        return this.inkAmount;
    }

    public int getInkCapacity() {
        return this.inkCapacity;
    }

    public void refill() {
        this.inkAmount = this.inkCapacity;
    }

    public void write(Paper paper, String content)
        throws WritingUtencilException
    {
        if ( this.inkAmount == 0 ) {
            throw new OutOfInkException();
        }
        if ( content.length() > this.inkAmount ) {
            paper.addContent(content.substring(0, inkAmount));
            return;
        }
        paper.addContent(content);
    }
}