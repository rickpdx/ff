#include "user_service_obj.h"

//////////////////////////////////
//        ID Base Class         //
//////////////////////////////////
ID::ID() {
	left = NULL;
	right = NULL;
	data = "";
}

ID::~ID() {
	left = NULL;
	right = NULL;
	data = "";
}

//////////////////////////////////
//         Person Class         //
//////////////////////////////////

Person::Person() {

}

Person::~Person() {

}

//////////////////////////////////
//        Provider Class        //
//////////////////////////////////

Provider::Provider() {

}
Provider::~Provider() {

}

//////////////////////////////////
//         Member Class         //
//////////////////////////////////

Member::Member() {

}
Member::~Member() {

}

//////////////////////////////////
//         Record Class         //
//////////////////////////////////
Record::Record() {
	next = NULL;
}

Record::~Record() {
	next = NULL;
}

//////////////////////////////////
//     Provider_record Class    //
//////////////////////////////////
Provider_record::Provider_record() {

}
Provider_record::~Provider_record() {

}

//////////////////////////////////
//     Service_record Class    //
//////////////////////////////////
Service_record::Service_record() {

}
Service_record::~Service_record() {

}


