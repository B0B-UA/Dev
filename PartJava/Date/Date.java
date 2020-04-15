public class Date {

    private int day;
    private int month;
    private int year;
    private void validate(int day, int month, int year) throws Exception {
        int max = 31;

        // day

        if ( year % 2 == 0) {
            max = 30;
        }
        if (year%4 != 0 || year%100 == 0 && year%400 != 0) {
            if ( month == 2 ) {
                max = 28;
            }
        } else { 
            if ( month == 2 ) {
                max = 29;
            }
        }

        if ( day > max ) {
            throw new InvalidDate("wrong DAY");
        }

        // month

        if ( month > 12 ) {
            throw new InvalidDate("wrong MONTH");
        }

        // year

        if ( year < 0 ) {
            throw new InvalidDate("wrong YEAR");
        }
    }

    public Date(int day, int month, int year) throws Exception {
        this.validate(day, month, year);
        this.day = day;
        this.month = month;
        this.year = year;
    }

    public int getDay() {
        return this.day;
    }

    public int getMonth() {
        return this.month;
    }

    public int getYear() {
        return this.year;
    }

    public void show() {
        System.out.println(this.getDay() + "." + this.getMonth() + "." + this.getYear());
    }
}
