 #include <future>
 #include <iostream>
 #include <vector>

 int twice(int m,int m2) {

	 //infinity loop
	 while (1) {
		 std::cout << m*m2 <<std::endl;
	 }
	 return 1;
}

 int main() {
   std::vector<std::future<int>> futures;


   //adding to vetor
   for (int i = 0; i < 10; ++i) {
     futures.push_back(std::async(twice, i,i));

	}

   //retrive and print the value stored in the future
   for (auto &e : futures) {
	   e.get();
		 
	}
	printf("hello bro");
   return 0;
}
