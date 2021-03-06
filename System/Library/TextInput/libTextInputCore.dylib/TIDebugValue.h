/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:40:07 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TIDebugValue : NSObject {

	float defaultValue;
	float sweepValue;
	float sweepMin;
	float sweepMax;
	float stepSize;

}

@property (assign,nonatomic) float defaultValue; 
@property (assign,nonatomic) float sweepValue; 
@property (assign,nonatomic) float sweepMin; 
@property (assign,nonatomic) float sweepMax; 
@property (assign,nonatomic) float stepSize; 
-(float)defaultValue;
-(void)setDefaultValue:(float)arg1 ;
-(float)sweepValue;
-(float)sweepMin;
-(float)sweepMax;
-(float)stepSize;
-(void)setSweepValue:(float)arg1 ;
-(void)setSweepMin:(float)arg1 ;
-(void)setSweepMax:(float)arg1 ;
-(void)setStepSize:(float)arg1 ;
@end

