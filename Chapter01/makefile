time_test.exe : main.obj name.obj time.obj utils.obj 
		clang++ -o $@ $^

clean : 
		@echo Cleaning the project...  
		rm main.obj name.obj time.obj utils.obj utils.h.gch   
		rm time_test.exe

time.obj : time.cpp time.h utils.h.gch 
		clang++ -c time.cpp -o time.obj

name.obj : name.cpp name.h utils.h.gch
		clang++ name.cpp -c -o name.obj


main.obj : main.cpp name.h time.h utils.h.gch   
		clang++ -c main.cpp -o main.obj


utils.h.gch utils.obj :: utils.cpp utils.h 
		clang++ -x c++-header utils.h -c -o utils.h.gch
		clang++ -c utils.cpp -o utils.obj


	
