main()
{
	printf("\n*********************************************\n");
	printf("\nCreated by Priyank Tomer\n");
	printf("\n*********************************************\n");
	system("@echo off & for /d %x in (\"C:\\Program Files\\Java\\jdk*\") do setx JAVA_HOME \"%x\" /M");
	system("@echo off & setx PATH \"%PATH%;%JAVA_HOME%\\bin\" /M");
	getch();
}
