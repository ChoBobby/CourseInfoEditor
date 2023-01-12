#include "uni.h"

int main() {
	Uni u;

	char user = '9';

	while (user != '0') {
		cout << "Input '1' to display course details." << '\n';
		cout << "Input '2' to edit course registry." << '\n';
		cout << "Input '3' to edit course information." << '\n';
		cout << '\n' << "Input '0' to exit program." << '\n';
		cin >> user;

		if (user == '1') {
			u.display();
		}

		if (user == '2') {
			string instructor;
			cout << '\n' << "Enter Course Instructor's Last Name: ";
			cin >> instructor;
			u.setInstructor(instructor);

			int enrolled;
			cout << '\n' << "Enter Number of Students Currently Enrolled: ";
			cin >> enrolled;
			u.setNumEnrolled(enrolled);

			string status;
			cout << '\n' << "Enter Current Course Status (Open / Closed / Canceled): ";
			cin >> status;
			u.setStatus(status);

			u.display();
		}

		if (user == '3') {
			int courseId;
			cout << '\n' << "Enter Course ID: ";
			cin >> courseId;
			u.setCourseId(courseId);

			int deptId;
			int sectId;
			cout << '\n' << "Enter Department ID: ";
			cin >> deptId;
			cout << '\n' << "Enter Section ID: ";
			cin >> sectId;
			u.setDeptIdSectId(deptId, sectId);

			int creds;
			cout << '\n' << "Enter Number of Credits: ";
			cin >> creds;
			u.setCreds(creds);

			int numDays;
			string courseTime;
			cout << '\n' << "Enter Number of Scheduled Days Per Week (0 - 7): ";
			cin >> numDays;
			while (numDays > 7 || numDays < 0) {
				cout << '\n' << "Error. Number input was greater than 7 or less than 0.";
				cout << '\n' << "Please Enter Number of Scheduled Days Per Week (0 - 7): ";
				cin >> numDays;
			}
			cout << '\n' << "Enter Time The Class Starts (ex. 00:00): ";
			cin >> courseTime;
			u.setDaysTime(numDays, courseTime);

			int buildId;
			int roomNum;
			cout << '\n' << "Enter Building ID: ";
			cin >> buildId;
			cout << '\n' << "Enter Room Number: ";
			cin >> roomNum;
			u.setBuildIdRoomNum(buildId, roomNum);

			int numSeats;
			cout << '\n' << "Enter Course Capacity: ";
			cin >> numSeats;
			u.setCourseCapacity(numSeats);

			string campus;
			cout << '\n' << "Enter Campus Location: ";
			cin >> campus;
			u.setCampus(campus);

			string status;
			cout << '\n' << "Enter Current Course Status (Open / Closed / Canceled): ";
			cin >> status;
			u.setStatus(status);

			u.display();
		}
	}
	return 0;
}