/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CNObservedResult : NSObject {

	unsigned long long _time;
	id _value;

}

@property (readonly) int logTime; 
@property (readonly) id logValue; 
@property (readonly) BOOL isResultEvent; 
@property (readonly) unsigned long long time;              //@synthesize time=_time - In the implementation block
@property (readonly) id value;                             //@synthesize value=_value - In the implementation block
+(id)resultWithTime:(unsigned long long)arg1 value:(id)arg2 ;
+(id)completionResultWithTime:(unsigned long long)arg1 ;
+(id)failureWithError:(id)arg1 time:(unsigned long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)value;
-(unsigned long long)time;
-(id)initWithValue:(id)arg1 time:(unsigned long long)arg2 ;
-(int)logTime;
-(id)logValue;
-(BOOL)isResultEvent;
@end
