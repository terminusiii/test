
public class HelloWorld
{

	public static void main(String[] args)  {
		// Prints Hellow world
		System.out.println("Hello, World");
		System.out.println("Hello, World again");
		
		Test();
		LoopTest();
		IfTest();
		ArrayTest();
		ClassTest();
	}

	public static void Test()	{
		System.out.println("Tadaa! At Test() - function");
	}

	public static void LoopTest()	{

		StringBuilder sb = new StringBuilder();

		java.util.Formatter formatter = new java.util.Formatter(sb, java.util.Locale.US);

		System.out.println("LoopTest start *** ");

		int i=0;
		for(i=0;i<10;i++)	{

			// Zero  buffer used by formatter
			sb.setLength(0);
			formatter.format("Line of output %d", i);

			String message;
			
			message = formatter.toString();
			System.out.println(message);
		}

		System.out.println("LoopTest end *** ");
	}

	public static void IfTest()
	{

                StringBuilder sb = new StringBuilder();

                java.util.Formatter formatter = new java.util.Formatter(sb, java.util.Locale.US);

                System.out.println("IfTest start *** ");

                int i=0;
                for(i=0;i<10;i++)       {

                        // Zero  buffer used by formatter
                        sb.setLength(0);

			if (i<5){
			         formatter.format("Line of output %d - TRUE", i);
			}else{
			         formatter.format("Line of output %d - FALSE", i);
			}

                        String message;

                        message = formatter.toString();
                        System.out.println(message);
                }

                System.out.println("IfTest end *** ");		
	}

	public static void ArrayTest()
	{
		System.out.println("ArrayTest start ***");

		String[] arrayOfStrings = new String[10];

		arrayOfStrings[0] = "Moi";

		for (int i=0;i<10;i++) {
			System.out.println(arrayOfStrings[i]);
		}

		System.out.println("ArrayTest end ***");
	}

	public static void ClassTest()
	{
		System.out.println(Cube.Test());
	}
}
