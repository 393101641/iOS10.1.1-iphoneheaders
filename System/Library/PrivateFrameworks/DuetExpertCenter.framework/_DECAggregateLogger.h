/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface _DECAggregateLogger : NSObject {

	NSMutableDictionary* _batchScalars;

}
+(void)logKey:(id)arg1 replaceScalarValueWith:(long long)arg2 ;
+(void)logIncrementKey:(id)arg1 ;
+(double)logKey:(id)arg1 blockTiming:(/*^block*/id)arg2 ;
+(void)logKey:(id)arg1 scalarValue:(long long)arg2 ;
+(void)logWithCallback:(/*^block*/id)arg1 ;
+(void)logKey:(id)arg1 distValue:(double)arg2 ;
-(void)flush;
-(void)logIncrementKey:(id)arg1 ;
-(void)logKey:(id)arg1 scalarValue:(long long)arg2 ;
-(id)initCallbackInstance;
-(void)logKey:(id)arg1 distValue:(double)arg2 ;
@end
