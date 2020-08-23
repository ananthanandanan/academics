public class Complex{
    private float realPart;
    private float imaginaryPart;
    
    public Complex(float r,float i)
    {
        realPart=r;
        imaginaryPart=i;
    }

    public float getreal(){
        return realPart;
    }
    public float getimg(){
        return imaginaryPart;
    }
    public Complex(){
        realPart=20;
        imaginaryPart=30;
    }
    public void add(Complex x,Complex y){
        realPart=x.realPart+y.realPart;
        imaginaryPart=x.imaginaryPart+y.imaginaryPart;
    }
    public void sub(Complex x,Complex y){
        realPart=x.realPart-y.realPart;
        imaginaryPart=x.imaginaryPart-y.imaginaryPart;
    }
}