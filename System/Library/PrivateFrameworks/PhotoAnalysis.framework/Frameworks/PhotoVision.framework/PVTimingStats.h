/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:37 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotoVision.framework/PhotoVision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSString;

@interface PVTimingStats : NSObject {

	NSObject*<OS_dispatch_queue> _syncQueue;
	NSMutableDictionary* _samples;
	NSString* _name;

}

@property (retain) NSString * name;              //@synthesize name=_name - In the implementation block
+(unsigned long long)millisForDuration:(unsigned long long)arg1 ;
+(void)measureTime:(/*^block*/id)arg1 label:(id)arg2 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(void)addSample:(id)arg1 duration:(unsigned long long)arg2 ;
-(void)printSummaryForKey:(id)arg1 ;
-(void)captureSampleForKey:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)printSummary;
@end

