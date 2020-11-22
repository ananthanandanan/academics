public class First {
  public void display(String msg) {
    System.out.print("[" + msg);
    try {
      Thread.sleep(1000);
    } catch (InterruptedException e) {
      e.printStackTrace();
    }
    System.out.println("]");
  }
}

class Second extends Thread {
  String msg;
  First fobj;

  Second(First fp, String str) {
    fobj = fp;
    msg = str;
    start();
  }

  public void run() {
    fobj.display(msg);
  }
}

public class Syncro {
  public static void main(String[] args) {
    First fnew = new First();
    Second ss = new Second(fnew, "welcome");
    Second ss1 = new Second(fnew, "dear");
    Second ss2 = new Second(fnew, "students");
  }
}
