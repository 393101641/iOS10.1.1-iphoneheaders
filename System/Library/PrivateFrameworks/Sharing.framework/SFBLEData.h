/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:35 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface SFBLEData : NSObject {

	NSData* _data;
	/*^block*/id _completion;

}

@property (nonatomic,copy) NSData * data;              //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) id completion;              //@synthesize completion=_completion - In the implementation block
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
@end

