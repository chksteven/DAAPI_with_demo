
#pragma once

struct CAppConfig
{
	string	userId;
	string	password;
	string	heartBeat;
	string	authorCode;
	string	macAddress;
	string	computerName;
	string	softwareName;
	string	serverAddress;
	string	softwareVersion;
	string  priceBrokerId;

	CAppConfig()
	{
		
		heartBeat = "180";
		softwareName = "api";
		userId = "";
		password = "";
		softwareVersion = "2";
		macAddress = "song_123";
		computerName = "WJQ-PC";
		serverAddress = "192.168.1.1:10070";
		authorCode = "porl99bbo/jrfib5xxgagza5giggzr/u";
		priceBrokerId = "xxx";

	}
};

