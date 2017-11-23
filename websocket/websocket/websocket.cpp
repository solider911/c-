// websocket.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include <iostream>  
#include <string>  
#include <sstream>  

#include "websocket_endpoint.h"  
#include <json/value.h>

int _tmain(int argc, _TCHAR* argv[])
{

	bool done = false;  
	std::string input;  
	kagula::websocket_endpoint endpoint;  

	endpoint.connect("ws://47.97.45.45:7272");  

	while (!done) {  
		std::cout << "Enter Command: ";  
		std::getline(std::cin, input);  

		if (input == "quit") {  
			done = true;  
		}  
		else if (input.substr(0, 4) == "send") {  
			/*std::stringstream ss(input);  

			std::string cmd;  
			std::string message;  

			ss >> cmd; 
			std::getline(ss, message);  */ 

			std::string user_token; 
			std::cout << "Enter user_token: ";  
			std::getline(std::cin, user_token);

			std::string type == "ysjoin";
			if (strcmp(type.c_str(), "ysjoin") == 0)
			{
				// 连接 type：ysjoin
				char msg[256] = {}; 
				sprintf(msg, "{\"type\":\"ysjoin\", \"user_token\":\"{user_token}\", \"content\";\"{test}\"}", user_token.c_str());
				std::string msg_json = msg;
				endpoint.send(msg_json);
				/*endpoint.show_recv(); */
			}
			else if(strcmp(type.c_str(), "yssay") == 0){
				// 通信 type：yssay
				char msg[256] = {}; 
				sprintf(msg, "{\"type\":\"yssay\", \"user_token\":\"{user_token}\", \"content\";\"{test}\"}", user_token.c_str());
				std::string msg_json = msg;
				endpoint.send(msg_json);
			}
			else if (strcmp(type.c_str(), "ysleave") == 0)
			{
				// 通信 type：yssay
				char msg[256] = {}; 
				sprintf(msg, "{\"type\":\"ysleave\", \"user_token\":\"{user_token}\", \"content\";\"{test}\"}", user_token.c_str());
				std::string msg_json = msg;
				endpoint.send(msg_json);
			}
		}  
		else if (input.substr(0, 4) == "show") {  
			endpoint.show();  
			 
		}  
		else {  
			std::cout << "> Unrecognized Command" << std::endl;  
		}  
	}  

	endpoint.close();  
	return 0;
}

