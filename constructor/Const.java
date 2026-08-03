public class Const{

    public static void main(String[] args){

        
    Point p = new Point();

    p.show();

  

    Point p1 = new Point(1,2);

    p1.show();




    }
}

 class Point{

   
   private int x ;
   private int y;

    Point(){   

        x = 0;
        y = 0;
    }

    Point(int a , int b){ 
        this.x = a;
        this.y = b;

    }

    void show(){

        System.out.println(x+" "+y);
    }

}