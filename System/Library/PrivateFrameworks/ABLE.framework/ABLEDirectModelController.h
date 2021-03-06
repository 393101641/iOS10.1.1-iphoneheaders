/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:01 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ABLE.framework/ABLE
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ABLE/ABLEModelController.h>

@class ABLEBONDirect;

@interface ABLEDirectModelController : ABLEModelController {

	unsigned long long _currentBON;
	ABLEBONDirect* _directMap;

}

@property (readonly) ABLEBONDirect * directMap;                  //@synthesize directMap=_directMap - In the implementation block
@property (readonly) unsigned long long currentBON;              //@synthesize currentBON=_currentBON - In the implementation block
-(BOOL)existsDataForPredictionUsingDay:(id)arg1 andOffsetDays:(id)arg2 ;
-(unsigned long long)currentBON;
-(void)calculateBONForCurrentLevel:(float)arg1 andChargeState:(BOOL)arg2 atDate:(id)arg3 onQueue:(id)arg4 usingHandler:(/*^block*/id)arg5 ;
-(BOOL)existsDataForPredictionUsingDefaultOffsetsAndDay:(id)arg1 ;
-(ABLEBONDirect *)directMap;
-(id)init;
-(id)currentState;
-(void)updateConfiguration:(id)arg1 ;
@end

