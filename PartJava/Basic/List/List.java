import java.util.ArrayList;
import java.util.Collections;

public class List {
    public static void main(String[] args) {
        ArrayList<Integer> list = new ArrayList<Integer>();
        list.add(9);//void push_back(int value);
        list.add(7);
        list.add(11);
        System.out.println(list.size()); //int size() const;
        // list.remove(0);//void erase(int index);
        // list.remove(list.size()-1);//int pop_back();
        Collections.sort(list); //void sort();
            if ( list.indexOf(78) == 0 ) {
                System.out.println("Find");
            } else {
                System.out.println("Not find");
            };
        
        for (Integer number : list) { 
            System.out.println("Number = " + number);
        }
    }
}