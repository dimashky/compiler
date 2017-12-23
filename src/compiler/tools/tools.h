#ifndef TOOLS_H
#define TOOLS_H


#include "dirent.h"
#include <chrono>
#include <string>
#include <vector>
#include <regex>

std::regex reg(".*.cs");

void scan_for_cs_files(char *path, std::vector<std::string>* files) {
	DIR *dir;
	struct dirent *ent;
	if ((dir = opendir(path)) != NULL) {
		/* print all the files and directories within directory */
		while ((ent = readdir(dir)) != NULL) {
			if (ent->d_namlen < 3)
				continue;
			char location[55];
			strcpy(location, path);strcat(location, "/");strcat(location, ent->d_name);
			if (std::regex_match(std::string(ent->d_name), reg))
				files->push_back(std::string(location));
			else if (opendir(location) != NULL)
				scan_for_cs_files(location, files);
		}
		closedir(dir);
	}
	else {
		/* could not open directory */
		perror("error");
	}
}

std::string get_time_and_date() {

	std::chrono::time_point<std::chrono::system_clock> now = std::chrono::system_clock::now();
	auto duration = now.time_since_epoch();

	typedef std::chrono::duration<int, std::ratio_multiply<std::chrono::hours::period, std::ratio<8>>::type> Days; /* UTC: +8:00 */

	Days days = std::chrono::duration_cast<Days>(duration);
	duration -= days;
	auto hours = std::chrono::duration_cast<std::chrono::hours>(duration);
	duration -= hours;
	auto minutes = std::chrono::duration_cast<std::chrono::minutes>(duration);
	duration -= minutes;
	auto seconds = std::chrono::duration_cast<std::chrono::seconds>(duration);
	duration -= seconds;
	auto milliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(duration);
	duration -= milliseconds;
	auto microseconds = std::chrono::duration_cast<std::chrono::microseconds>(duration);
	duration -= microseconds;
	auto nanoseconds = std::chrono::duration_cast<std::chrono::nanoseconds>(duration);

	return (std::to_string(hours.count()) + ":" + std::to_string(minutes.count()) + ":" + std::to_string(seconds.count()) + ":" + std::to_string(milliseconds.count()) + ":" + std::to_string(microseconds.count()) + ":" + std::to_string(nanoseconds.count()));
}

#endif