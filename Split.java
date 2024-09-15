
import java.util.Calendar;

/**
 * Split
 */
public class Split {

    public static void main(String[] args) {
        Calendar calendar = Calendar.getInstance();
        System.out.println("Current HOUR: " + calendar.get(Calendar.HOUR_OF_DAY));
        System.out.println("Current MINUTE: " + calendar.get(Calendar.MINUTE));
        System.out.println("Current SECOND: " + calendar.get(Calendar.SECOND));
        System.out.println("The Current Date is:" + calendar.getTime());    
    }
}
