/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:40 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CLSRegionsAgglomerativeClusteringDataVector : NSObject {

	double* _data;
	unsigned long long _length;
	id _userInfo;

}

@property (readonly) double* data;                           //@synthesize data=_data - In the implementation block
@property (readonly) unsigned long long length;              //@synthesize length=_length - In the implementation block
@property (retain) id userInfo;                              //@synthesize userInfo=_userInfo - In the implementation block
-(void)dealloc;
-(unsigned long long)length;
-(id)userInfo;
-(double*)data;
-(void)setUserInfo:(id)arg1 ;
-(id)initWithDataLength:(unsigned long long)arg1 ;
@end

