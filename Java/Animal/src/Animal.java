import java.lang.Math;

public class Animal {

    int cat_A;
    int cat_B;
    int mouse;

    Animal(){}

    void catAndMouse()
    {
        if(Math.abs(cat_A-mouse)<Math.abs(cat_B-mouse))
        
        System.out.println("Cat-A\n");

        else if( Math.abs(cat_A-mouse)>Math.abs(cat_B-mouse) )
        {
            System.out.println("Cat-B\n");

        }

        else
        System.out.println("Mouse\n");

    }

    
}