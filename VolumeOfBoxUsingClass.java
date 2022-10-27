class Box{
    double width;
    double length;
    double breadth;
}
class VolumeOfBoxUsingClass{
    public static void main(String args[]){
        Box newbox = new Box();
        newbox.width=10;
        newbox.length=4;
        newbox.breadth=5;
        System.out.println("Volume is : "+ newbox.breadth*newbox.length*newbox.breadth);
    }
}