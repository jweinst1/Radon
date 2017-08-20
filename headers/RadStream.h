#ifndef RAD_STREAM_H
#define RAD_STREAM_H

class RadStream : public RadObject
{
private:
	std::vector<RadPtr> items;
public:
	RadStream();
	~RadStream();
	
};

#endif