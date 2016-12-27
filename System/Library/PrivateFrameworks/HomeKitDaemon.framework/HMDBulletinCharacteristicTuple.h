/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface HMDBulletinCharacteristicTuple : NSObject {

	NSString* _serviceContextID;
	NSString* _currentType;
	id _targetValue;
	NSDate* _updateTime;

}

@property (nonatomic,readonly) NSString * serviceContextID;              //@synthesize serviceContextID=_serviceContextID - In the implementation block
@property (nonatomic,readonly) NSString * currentType;                   //@synthesize currentType=_currentType - In the implementation block
@property (nonatomic,readonly) id targetValue;                           //@synthesize targetValue=_targetValue - In the implementation block
@property (nonatomic,readonly) NSDate * updateTime;                      //@synthesize updateTime=_updateTime - In the implementation block
+(id)tupleWithServiceContextID:(id)arg1 currentType:(id)arg2 targetValue:(id)arg3 ;
-(id)targetValue;
-(NSDate *)updateTime;
-(id)initWithServiceContextID:(id)arg1 currentType:(id)arg2 targetValue:(id)arg3 ;
-(NSString *)serviceContextID;
-(NSString *)currentType;
@end
