interface payment{
    void paymentmethod(double amt);
}

class googlepay implements payment{
    double sf;
    public void paymentmethod(double amt){
        double sf = 0.12;
        double totalamt = amt + sf;
        System.out.println("Amount "+amt+" Transferred Sucessfully with "+sf+" charge. Total amount "+totalamt);
    }
}


public class Program10 {
    public static void main(String[] args) {
        payment gpay = new googlepay();
        gpay.paymentmethod(200.20);
    }
   
}
