#include <iostream>
#include <string>
using namespace std;

class Uni {
private:
	int courseId = 0;
	int deptSectId[2] = { 0, 0 };
	int creds = 0;

	string daysTime[2] = { "N/A", "00:00" };
	int daysCount = 0;
	string days[7];
	int buildIdRoomNum[2] = { 0,0 };
	int courseCapacity = 0;
	string campus = "N/A";

	string instructor = "N/A";
	int numEnrolled = 0;
	string stuId[9999];
	string courseStatus = "N/A";

public:
	//EDIT COURSE INFORMATION
	void setCourseId(int id) {
		courseId = id;
	}

	void setDeptIdSectId(int deptId, int sectId) {
		deptSectId[0] = deptId;
		deptSectId[1] = sectId;
	}

	void setCreds(int credits) {
		creds = credits;
	}

	void setDaysTime(int numDays, string time) {
		daysTime[0] = numDays;
		daysCount = numDays;
		cout << '\n' << "Enter Day(s) The Course Meets (ex. Friday / Fri): " << '\n';
		for (int i = 0; i < numDays; ++i) {
			string d;
			cout << " - Day #" << i + 1 << ": ";
			cin >> d;
			days[i] = d;
		}
		daysTime[1] = time;
	}

	void setBuildIdRoomNum(int buildId, int roomNum) {
		buildIdRoomNum[0] = buildId;
		buildIdRoomNum[1] = roomNum;
	}

	void setCourseCapacity(int numSeats) {
		courseCapacity = numSeats;
	}

	void setCampus(string courseCampus) {
		campus = courseCampus;
	}

	//EDIT COURSE REGISTRY
	void setInstructor(string lastName) {
		instructor = lastName;
	}

	void setNumEnrolled(int numStudents) {
		numEnrolled = numStudents;
		for (int i = 0; i < numStudents; ++i) {
			string id;
			cout << " - Student #" << i + 1 << " ID: ";
			cin >> id;
			stuId[i] = id;
		}
	}

	void setStatus(string status) {
		if (numEnrolled >= courseCapacity) {
			status = "Closed (Enrollment Capacity Reached)";
		}
		courseStatus = status;
	}

	//DISPLAY COURSE DETAILS
	void display() {
		cout << '\n' << "==================================================" << '\n';
		cout << '\n' << "Course ID: " << courseId << '\n';
		cout << '\n' << "Department ID: " << deptSectId[0] << '\n';
		cout << '\n' << "Section ID: " << deptSectId[1] << '\n';
		cout << '\n' << "Credits: " << creds << '\n';
		cout << '\n' << "Schedule: ";
		for (int i = 0; i < daysCount; ++i) {
			cout << days[i] << " ";
		}
		cout << "- " << daysTime[1] << '\n';
		cout << '\n' << "Building ID: " << buildIdRoomNum[0] << '\n';
		cout << '\n' << "Room Number: " << buildIdRoomNum[1] << '\n';
		cout << '\n' << "Course Capacity: " << courseCapacity << '\n';
		cout << '\n' << "Campus: " << campus << '\n';
		cout << '\n' << "Instructor: " << instructor << '\n';
		cout << '\n' << "Currently Enrolled: " << numEnrolled << '\n';
		for (int i = 0; i < numEnrolled; ++i) {
			cout << " - Student #" << i + 1 << " ID: " << stuId[i] << '\n';
		}
		cout << '\n' << "Course Status: " << courseStatus << '\n';
		cout << '\n' << "==================================================" << '\n' << '\n';
	}
};