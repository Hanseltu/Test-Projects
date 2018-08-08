 class Newthread implements Runnable {
    Thread t;
    Newthread(){
        t = new Thread(this,"Demo Thread");
        System.out.println("child thread: "+t);
        t.start();
    }

    public void run(){
        try {
            for (int i = 5; i > 0; i--){
                System.out.println("child thread: "+ i);
                Thread.sleep(1000);
                }
            }catch(InterruptedException e){
                System.out.println("Child interrupted");
            }
            System.out.println("Terminating child thread.");
        }
    }

public class ThreadDemo{
    public static void main(String args[]){
        new Newthread();
        try {
            for (int i = 5; i > 0; i--){
                System.out.println("Main thread: " + i);
                Thread.sleep(1000);
            }
        }catch(InterruptedException e){
            System.out.println("Main thread interrupted.");
        }
        System.out.println("Main thread terminating.");
    }
}

