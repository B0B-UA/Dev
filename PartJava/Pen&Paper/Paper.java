public class Paper {
    private StringBuffer content = new StringBuffer();
    private int maxSymbols;
    private int symbols;

    public Paper() {
        this.maxSymbols = 4096;
        this.symbols = 0;
    }

    public Paper(int maxSymbols) {
        this.maxSymbols = maxSymbols;
        this.symbols = 0;
    }

    public int getMaxSymbols() {
        return this.maxSymbols;
    }

    public int getSymbols() {
        return this.symbols;
    }

    public void addContent(String message)
        throws WritingUtencilException
    {
        int total = this.content.length() + message.length();

        if ( content.length() == maxSymbols ) {
            throw new OutOfSpaceException();
        }
        if ( total > maxSymbols ) {
            content.append(message.substring(0, maxSymbols-this.content.length()));
            return;
        }
        content.append(message);
    }

    public void show() {
        System.out.println(this.content);
    }
}
