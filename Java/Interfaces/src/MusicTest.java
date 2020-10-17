import java.util.*;


interface Instrument{

    void play();
    String what();
    void adjust();

}

class Wind implements Instrument{

    String name;

    public Wind(){}

    public Wind(String s){
        this.name = s;
    }

    public void play(){
        System.out.println("This is a wind type instument");
    }

    public String what(){
        return  name;
    }

    public void adjust(){
        System.out.println("Adjusting the wind-intake");
    }
}

class Precussion implements Instrument{

    String name;

    public Precussion(){}
    public Precussion(String s){
        this.name = s;
    }
    public void play(){
        System.out.println("This is a Precussion type instument");
    }

    public String what(){
        return  name;
    }

    public void adjust(){
        System.out.println("Adjusting the bass");
    }
}

class Stringed implements Instrument{

    String name;

    public Stringed(){}
    public Stringed(String s){
        this.name = s;
    }
    public void play(){
        System.out.println("This is a Stringed type instument");
    }

    public String what(){
        return  name;
    }

    public void adjust(){
        System.out.println("Adjusting the strings");
    }
}

class Woodwind extends Wind{

    public Woodwind(){}
    public Woodwind(String s){
        super(s);
    }

    @Override
    public void play(){
        System.out.println("Now playing "+ this.name);
    }

    @Override
    public String what(){
        return name;
    }
}


class Brass extends Wind{

    public Brass(){}
    public Brass(String s){
        super(s);
    }

    @Override
    public void play(){
        System.out.println("Now playing "+ this.name);
    }

    @Override
    public void adjust(){

        System.out.println("Adjusting the keys of " + this.name);
    }
}




public class MusicTest {
    
    public static void main(String[] args) {
        
        Scanner in = new Scanner(System.in);
        String _name;

        System.out.println("Enter the name of the first instrument");
        _name = in.nextLine();

        Woodwind ww = new Woodwind(_name);
        ww.play();
        
        System.out.println("The name of instrument is => " +ww.what());

        System.out.println("Enter the name of the second instrument");
        _name = in.nextLine();

        Brass bb = new Brass(_name);
        bb.play();
        bb.adjust();
        


    }

}
