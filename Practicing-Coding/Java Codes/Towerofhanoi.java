public class Towerofhanoi {
    public static void TowerOfHanoi(int n, String src, String helper, String dest) {
    if (n==1) {
        System.out.println("Transfer Disk " + n +" from " +src+ " to " +dest );        
    } else{
       TowerOfHanoi(n-1, src, dest, helper);
       System.out.println("Transfer Disk " + n +" from " +src+ " to " +dest);
       TowerOfHanoi(n-1, helper, src, dest);
     }
    }
    
    public static void main(String[] args) {
        int n = 5;
    
        TowerOfHanoi(n, "A", "B", "C");
    
     }

    
    
    
}
