import java.util.Scanner;
class Box{
    double width;
    double length;
    double breadth;
    void volume(){
        double vol;
        vol=width*length*breadth;
        System.out.println(vol);
    }
}

class VolumeOfBoxUsingMethod{
    public static void main(String args[]){
        Scanner inp = new Scanner(System.in);
        Box mybox = new Box();
        System.out.println("Enter Breadth,Length and Width");
        mybox.breadth=inp.nextDouble();
        mybox.length=inp.nextDouble();
        mybox.width=inp.nextDouble();
        mybox.volume();
    }
}