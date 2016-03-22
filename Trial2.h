class priority_preemptive :public Process
{
	int Priority[10];
	string name_exe[10];
	int Burst_time_exe[10];
	int Priority_exe[10];
	int Arrival_time[10];
	int Arrival_time_exe[10];
public:
	void set_process()
	{

		int minimum;//max in priority
		int index;
		int temp_burst;
		string temp_name;
		cout << "enter no of processes" << endl;
		cin >> n;
		for (int i = 0; i < n; i++) //Acquire base table
		{
			cout << "Enter Process Name: " << endl;
			cin >> name[i];
			cout << "Enter Process Arrival time: " << endl;
			cin>>Arrival_time[i];
			cout << "Enter Process Burst time: " << endl;
			cin >> Burst_time[i];
			cout << "Enter Process Priority" << endl;
			cin >> Priority[i];
		}

		for (int i = 0; i < n; i++)//sort exe table
		{
			minimum = Priority_exe[i];
			index = i;
			for (int j = i + 1; j < n; j++)
			{
				if (minimum > Priority_exe[j])
				{
					minimum = Priority_exe[j];
					index = j;
				}
			}
			temp_name = name_exe[i];
			temp_burst = Burst_time_exe[i];
			name_exe[i] = name_exe[index];
			Burst_time_exe[i] = Burst_time_exe[index];
			name_exe[index] = temp_name;
			Burst_time_exe[index] = temp_burst;
		}
		//   cout<<"Enter Arrival Time: ";
		//   cin>>Arrival_time;
		//Remaing_time=Burst_time;
	}
	void display()
	{
		int startOfProcess = 0;
		int endOfProcess;
		for (int i = 0; i < n; i++)
		{
			endOfProcess = startOfProcess + Burst_time[i];
			cout << endl << name[i] << "\t" << "From  " << startOfProcess << "  to  " << endOfProcess << endl;
			startOfProcess = endOfProcess;
		}
	}
	void display_process(string name,int start_slot)
	{
		int startOfProcess =start_slot;
		int endOfProcess;
		for (int i = 0; i < Arrival_time_exe[i+1]; i++)
		{
			endOfProcess = startOfProcess + Arrival_time_exe[i+1];
			cout << endl << name[i] << "\t" << "From  " << startOfProcess << "  to  " << endOfProcess << endl;
			startOfProcess = endOfProcess;
		}
	}
};