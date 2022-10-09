#include <iostream>
#include <getAge.h>
#include <fmt/printf.h>

//#include <grpc++/server_builder.h>




int main()
{
	
	std::cout << "Ola Mundo" << std::endl ;
	std::cout << getAge() << '\n' ;
	printf("Hello Mundo With External Library \n ");
	system("pause");


	//grpc::ServerBuilder builder;
	//builder.AddListeningPort("localhost:50051", grpc::InsecureServerCredentials());
	//auto server = builder.BuildAndStart();
	//std::cout << "The service is listening! Press Enter to shutdown\n";
	//std::cin.get();
	//server->Shutdown();
	//server->Wait();
	
	return 0;
}



