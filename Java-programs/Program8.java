class account{
    int uid;
    int balance;
    String name;
    String confi;

    
    
}

class user extends account{
    user(String name, String confi,int uid, int balance){
        this.name = name;
        this.balance = balance;
        this.uid = uid;
        this.confi=confi;
    }
    void display(){
        System.out.println("Account holder name: "+name+"\nBalance :"+balance+"\nUid:"+uid+"\nconfi:"+confi);
    }
}

public class Program8 {
    public static void main(String[] args) {
        user u1 = new user("kailas", "2299" , 01, 22220);
        u1.display();
    }
}
