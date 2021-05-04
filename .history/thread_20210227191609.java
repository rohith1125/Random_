class NewThread extends Thread 
{
  NewThread () 
  {
    super ("Demo Thread");
    
System.out.println ("Child thread: " + this);
    
start ();			// Start the thread
  }
   
public void run () 
  {
    for (int i = 5; i > 0; i--)
      
      {
	System.out.println ("Child Thread: " + i);
	
Thread.sleep (500);
  
} 
}
/*catch (InterruptedException e)
{ System.out.println("Child interrupted.");
}*/ 
    System.out.println ("Exiting child thread.");

} 

class thread 

{
  public static void main (String args[]) 
  {
    new NewThread ();		// create a new thread
    for (int i = 5; i > 0; i--)
      
      {
	System.out.println ("Main Thread: " + i);
	
Thread.sleep (1000);
      
} 
 
/*catch (InterruptedException e)
{ System.out.println("Main thread interrupted.");
}*/ 
      System.out.println ("Main thread exiting.");

} 
}