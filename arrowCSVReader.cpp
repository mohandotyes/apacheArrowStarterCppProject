#include <iostream>
#include <arrow/api.h>

int main(){

	arrow::Int64Builder builder;
	builder.Append(1);
	builder.Append(2);
	builder.Append(3);

	std::shared_ptr<arrow::Array> array;
	arrow::Status st = builder.Finish(&array);
	if(!st.ok()){
		printf("ERROR\n");
	}
	else{
		printf("Done\n");
	}

	return 0;
}

