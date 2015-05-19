all:
	javac Program.java
	jar cmvf META-INF/MANIFEST.MF input.jar Program.class
	cat input.jpg input.jar > output.jpg
clean:
	rm output.jpg
	rm input.jar
	rm Program.class
