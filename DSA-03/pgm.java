import java.util.Hashtable;
import java.util.Map;

public class pgm{
    public static void main(String[] args) {
        Hashtable<Integer , String> ht = new Hashtable<>();
        ht.put(106,"Yashwanth"); //3
        ht.put(117, "Likith"); //2
        ht.put(128, "Banu"); //1
        ht.put(102, "Sunil"); //4
        ht.put(100, "Prajwal"); //5 
        for(Map.Entry hm : ht.entrySet()){
            System.err.println(hm.getKey() + " " + hm.getValue());
        }
    }
}