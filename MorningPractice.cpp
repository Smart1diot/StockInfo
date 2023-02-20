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
	int revenueList{sizeof(revenue) / sizeof(revenue[0])};

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
	int netIncomeOrLossList{ sizeof(netIncomeOrLoss) / sizeof(netIncomeOrLoss[0]) };

	//----------------------------------------------------------------------------------------------------------------------

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
	int operatingActivitiesList{ sizeof(operatingActivities) / sizeof(operatingActivities[0]) };

	const int investingActivities[]
	{
		-792,	// 2009
		-541,	// 2010
		-462,	// 2011
		-728,	// 2012
		-369,	// 2013
		-822,	// 2014
		-889,	// 2015
		-144,	// 2016
		-791,	// 2017
		-684,	// 2018
		-653,	// 2019
		-909,	// 2020
		-347,	// 2021
		-521,	// 2022
	};
	int investingActivitiesList{ sizeof(investingActivities) / sizeof(investingActivities[0]) };

	const int netCashFlow[]
	{
		-286,	// 2009
		723,	// 2010
		711,	// 2011
		371,	// 2012
		-592,	// 2013
		-91,	// 2014
		-367,	// 2015
		-232,	// 2016
		412,	// 2017
		174,	// 2018
		-224,	// 2019
		-104,	// 2020
		-172,	// 2021
		-359,	// 2022
	};
	int netCashFlowList{ sizeof(netCashFlow) / sizeof(netCashFlow[0]) };

	const int stockBasedCompensation[]
	{
		28,	// 2009
		32,	// 2010
		42,	// 2011
		50,	// 2012
		53,	// 2013
		58,	// 2014
		68,	// 2015
		70,	// 2016
		91,	// 2017
		77,	// 2018
		90,	// 2019
		69,	// 2020
		67,	// 2021
		79,	// 2022
	};
	int stockBasedCompensationList{ sizeof(stockBasedCompensation) / sizeof(stockBasedCompensation[0]) };

	const int stockDividendsPaid[]
	{
		-138,	// 2009
		-139,	// 2010
		-167,	// 2011
		-197,	// 2012
		-220,	// 2013
		-234,	// 2014
		-251,	// 2015
		-1185,	// 2016
		-256,	// 2017
		-247,	// 2018
		-250,	// 2019
		-229,	// 2020
		-58,	// 2021
		0,		// 2022
	};
	int stockDividendsPaidList{ sizeof(stockDividendsPaid) / sizeof(stockDividendsPaid[0]) };

	//----------------------------------------------------------------------------------------------------------------------

	//Balance Sheet info
	const int cashOnHand[]
	{
		72,		// 2009
		795,	// 2010
		1506,	// 2011
		1877,	// 2012
		1285,	// 2013
		1194,	// 2014
		827,	// 2015
		595,	// 2016
		1007,	// 2017
		1181,	// 2018
		957,	// 2019
		853,	// 2020
		681,	// 2021
		322,	// 2022
	};
	int cashOnHandList{ sizeof(cashOnHand) / sizeof(cashOnHand[0]) };

	const int totalAssets[]
	{
		5661,	// 2009
		6579,	// 2010
		7462,	// 2011
		8491,	// 2012
		8089,	// 2013
		8574,	// 2014
		9245,	// 2015
		7698,	// 2016
		7858,	// 2017
		8115,	// 2018
		7886,	// 2019
		9737,	// 2020
		9538,	// 2021
		8869,	// 2022
	};
	int totalAssetsList{ sizeof(totalAssets) / sizeof(totalAssets[0]) };

	const int totalLiabilities[]
	{
		4451,	// 2009
		5007,	// 2010
		5441,	// 2011
		6535,	// 2012
		6176,	// 2013
		6494,	// 2014
		6805,	// 2015
		6827,	// 2016
		6988,	// 2017
		7138,	// 2018
		7013,	// 2019
		8758,	// 2020
		9233,	// 2021
		8288,	// 2022
	};
	int totalLiabilitiesList{ sizeof(totalLiabilities) / sizeof(totalLiabilities[0]) };

	const int shareHolderEquity[]
	{
		1210,	// 2009
		1572,	// 2010
		2021,	// 2011
		1956,	// 2012
		1913,	// 2013
		2080,	// 2014
		2440,	// 2015
		871,	// 2016
		870,	// 2017
		977,	// 2018
		873,	// 2019
		979,	// 2020
		305,	// 2021
		581,	// 2022
	};
	int shareHolderEquityList{ sizeof(shareHolderEquity) / sizeof(shareHolderEquity[0]) };

	//----------------------------------------------------------------------------------------------------------------------

	std::cout << "							Gangsta Shit inc." << '\n';

	std::cout << "Single Digit = Million" << '\n' << '\n';

	std::cout << "Years:			" << "2009	" << "2010	" << "2011	" << "2012	" << "2013	" << "2014	" << "2015	" << "2016	" << "2017	" << "2018	" << "2019	" << "2020	" << "2021	" << "2022	" << '\n' << '\n';

	std::cout << "JWN Nordstrom" << '\n' << '\n'; //---------------------------------------------------

	std::cout << "Income Statement" << '\n';
	
	std::cout << "Revenue:		";
	
	for (int i{ 0 }; i < revenueList; ++i)
	{
		std::cout << revenue[i] << "	";
	}

	std::cout << '\n';

	std::cout << "Net Income/Loss:	";

	for (int i{ 0 }; i < netIncomeOrLossList; ++i)
	{
		std::cout << netIncomeOrLoss[i] << "	";
	}

	std::cout << '\n' << '\n'; //-----------------------------------------------------------------------

	std::cout << "Cash Flow Statement" << '\n';

	std::cout << "Operating Activities:	";

	for (int i{ 0 }; i < operatingActivitiesList; ++i)
	{
		std::cout << operatingActivities[i] << "	";
	}

	std::cout << '\n';

	std::cout << "Investing Activities:	";

	for (int i{ 0 }; i < investingActivitiesList; ++i)
	{
		std::cout << investingActivities[i] << "	";
	}

	std::cout << '\n';

	std::cout << "Net Cash Flow:		";

	for (int i{ 0 }; i < netCashFlowList; ++i)
	{
		std::cout << netCashFlow[i] << "	";
	}

	std::cout << '\n';

	std::cout << "Stock Based Comp:	";

	for (int i{ 0 }; i < stockBasedCompensationList; ++i)
	{
		std::cout << stockBasedCompensation[i] << "	";
	}

	std::cout << '\n';

	std::cout << "Common Stock Div:	";

	for (int i{ 0 }; i < stockDividendsPaidList; ++i)
	{
		std::cout << stockDividendsPaid[i] << "	";
	}

	std::cout << '\n' << '\n'; //-----------------------------------------------------------------------

	std::cout << "Balance Sheet Statement" << '\n';

	std::cout << "Cash on Hand:		";

	for (int i{ 0 }; i < cashOnHandList; ++i)
	{
		std::cout << cashOnHand[i] << "	";
	}

	std::cout << '\n';

	std::cout << "Total Assets:		";

	for (int i{ 0 }; i < totalAssetsList; ++i)
	{
		std::cout << totalAssets[i] << "	";
	}

	std::cout << '\n';

	std::cout << "Total Liabilities:	";

	for (int i{ 0 }; i < totalLiabilitiesList; ++i)
	{
		std::cout << totalLiabilities[i] << "	";
	}

	std::cout << '\n';

	std::cout << "Share Holder Equity:	";

	for (int i{ 0 }; i < shareHolderEquityList; ++i)
	{
		std::cout << shareHolderEquity[i] << "	";
	}

	std::cout << '\n';

	return 0;
}