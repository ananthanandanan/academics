
public class Box {
	private double width;
	public double height;
	public double depth;

Box(){}//constructor

double volume() //Method for computing Volume
{
    
    return width*depth*height;

    
}

double getWidth() //Method for computing Volume
{
    
    return width;

    
}

void setDim(double w, double h, double d) {
width = w;
height= h;
depth = d;
}
}

