/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:03 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PTPWrappedBytes : NSObject {

	unsigned long long _offset;
	unsigned long long _capacity;
	BOOL _allocatedBytes;
	char* _bytes;
	int _fd;
	BOOL _useByteBuffer;
	unsigned long long _excessDataLength;
	double _progressNotificationTime;
	/*function pointer*/void* _progressNotifier;
	void* _progressNotifierContext;
	int _lastNotifiedProgress;

}
+(id)wrappedBytesWithCapacity64:(unsigned long long)arg1 ;
+(id)wrappedBytesWithBytes:(void*)arg1 capacity64:(unsigned long long)arg2 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(const void*)bytes;
-(unsigned long long)offset;
-(unsigned long long)appendData:(id)arg1 ;
-(void*)mutableBytes;
-(unsigned long long)length64;
-(id)initWithCapacity64:(unsigned long long)arg1 ;
-(unsigned long long)appendBytes:(const void*)arg1 length64:(unsigned long long)arg2 ;
-(id)initWithFileDescriptor:(int)arg1 capacity64:(unsigned long long)arg2 ;
-(BOOL)wasInitWithFD;
-(double)percentFull;
-(unsigned long long)capacity64;
-(void)setLength64:(unsigned long long)arg1 ;
-(id)initWithBytes:(void*)arg1 capacity64:(unsigned long long)arg2 ;
-(unsigned long long)rewindBytesToPosition64:(unsigned long long)arg1 ;
-(void)setProgressNotifierCallback:(/*function pointer*/void*)arg1 context:(void*)arg2 ;
-(unsigned long long)setCapacity64:(unsigned long long)arg1 ;
-(unsigned long long)excessDataLength;
@end

