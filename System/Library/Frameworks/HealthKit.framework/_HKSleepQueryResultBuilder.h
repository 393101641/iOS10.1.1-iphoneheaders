/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDateInterval, NSArray, NSMutableDictionary;

@interface _HKSleepQueryResultBuilder : NSObject {

	NSDateInterval* _resultInterval;
	NSArray* _sourceOrder;
	NSMutableDictionary* _samplesByCategoryValue;

}
-(id)_categorySampleBufferForCategoryValue:(long long)arg1 ;
-(id)_organizeSamplesBySource:(id)arg1 ;
-(id)_createDateIntervalsFromSamples:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(void)addSleepSamples:(id)arg1 ;
-(id)calculateResult;
-(id)initWithResultInterval:(id)arg1 sourceOrder:(id)arg2 ;
@end

