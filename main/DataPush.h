#pragma once

class CDataPush
{
public:
	void DoWork(const unsigned long long DeviceRowIdxIn);
	std::vector<std::string> DropdownOptions(const unsigned long long DeviceRowIdxIn);
	std::string DropdownOptionsValue(const unsigned long long DeviceRowIdxIn,int pos);

private:
	unsigned long long DeviceRowIdx;
	void DoFibaroPush();
	const char *RFX_Type_SubType_DropdownOptions(const unsigned char dType, const unsigned char sType);
	std::string ProcessSendValue(std::string rawsendValue, int delpos, int nValue, int includeUnit, int metertype);
};
