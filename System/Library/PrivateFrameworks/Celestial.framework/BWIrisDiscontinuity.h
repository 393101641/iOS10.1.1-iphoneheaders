/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:48 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class NSArray;

@interface BWIrisDiscontinuity : NSObject {

	SCD_Struct_BW2 _discontinuityTime;
	NSArray* _timeSkews;
	NSArray* _recipe;
	SCD_Struct_BW2 _targetFrameDuration;

}

@property (readonly) SCD_Struct_BW2 time; 
@property (nonatomic,retain) NSArray * timeSkews;              //@synthesize timeSkews=_timeSkews - In the implementation block
+(int)maximumNumberOfConsecutiveDroppedFrames;
-(void)dealloc;
-(SCD_Struct_BW2)time;
-(long long)_offsetIndexFromDiscontinuityForTime:(SCD_Struct_BW2)arg1 ;
-(id)initWithTime:(SCD_Struct_BW2)arg1 duration:(SCD_Struct_BW2)arg2 targetFrameDuration:(SCD_Struct_BW2)arg3 timeSkews:(id)arg4 ;
-(BOOL)containsVideoBufferTime:(SCD_Struct_BW2)arg1 ;
-(BOOL)shouldKeepBufferWithTime:(SCD_Struct_BW2)arg1 nextAdjustedTimeInOut:(SCD_Struct_BW2*)arg2 ;
-(NSArray *)timeSkews;
-(void)setTimeSkews:(NSArray *)arg1 ;
@end

