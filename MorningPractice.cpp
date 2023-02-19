#include <iostream>
#include <string>

int main()
{
	//single digit = million
	//Income Statement info
	const int revenue[]
	{
		8573,	// 2009
		8627,	// 2010 
		9700,	// 2011
		10860,	// 2012
		12134,	// 2013
		12540,	// 2014
		13506,	// 2015
		14437,	// 2016
		14757,	// 2017
		15478,	// 2018
		15860,	// 2019
		15524,	// 2020
		10715,	// 2021
		14789,	// 2022
	};

	const int netIncomeOrLoss[]
	{
		401,	// 2009
		441,	// 2010
		613,	// 2011
		683,	// 2012
		735,	// 2013
		734,	// 2014
		720,	// 2015
		600,	// 2016
		354,	// 2017
		437,	// 2018
		564,	// 2019
		496,	// 2020
		-690,	// 2021
		178,	// 2022
	};

	//Cash Flow info

	const int operatingActivities[]
	{
		848,	// 2009
		1251,	// 2010
		1177,	// 2011
		1177,	// 2012
		1110,	// 2013
		1320,	// 2014
		1220,	// 2015
		2470,	// 2016
		1658,	// 2017
		1400,	// 2018
		1296,	// 2019
		1236,	// 2020
		-348,	// 2021
		705,	// 2022
	};

	std::cout << "Years:			" << "2009	" << "2010	" << "2011	" << "2012	" << "2013	" << "2014	" << "2015	" << "2016	" << "2017	" << "2018	" << "2019	" << "2020	" << "2021	" << "2022	" << '\n' << '\n';

	std::cout << "Nordstrom" << '\n';
	std::cout << "Revenue:		" << revenue[0] << "	" << revenue[1] << "	" << revenue[2] << "	" << revenue[3] << "	" << revenue[4] << "	" << revenue[5] << "	" << revenue[6] << "	" << revenue[7] << "	" << revenue[8] << "	" << revenue[9] << "	" << revenue[10] << "	" << revenue[11] << "	" << revenue[12] << "	" << revenue[13] << '\n';
	std::cout << "Net Income/Loss:	" << netIncomeOrLoss[0] << "	" << netIncomeOrLoss[1] << "	" << netIncomeOrLoss[2] << "	" << netIncomeOrLoss[3] << "	" << netIncomeOrLoss[4] << "	" << netIncomeOrLoss[5] << "	" << netIncomeOrLoss[6] << "	" << netIncomeOrLoss[7] << "	" << netIncomeOrLoss[8] << "	" << netIncomeOrLoss[9] << "	" << netIncomeOrLoss[10] << "	" << netIncomeOrLoss[11] << "	" << netIncomeOrLoss[12] << "	" << netIncomeOrLoss[13] << '\n';

	std::cout << '\n';

	return 0;
}