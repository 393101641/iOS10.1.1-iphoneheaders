/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:53 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogCore/PLAgent.h>

@class PLNSNotificationOperatorComposition;

@interface PLLocaleAgent : PLAgent {

	PLNSNotificationOperatorComposition* _timeNotification;

}

@property (retain) PLNSNotificationOperatorComposition * timeNotification;              //@synthesize timeNotification=_timeNotification - In the implementation block
+(void)load;
+(id)entryEventPointDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventNoneDefinitions;
+(id)railDefinitions;
+(id)accountingGroupDefinitions;
-(id)init;
-(void)log;
-(void)initOperatorDependancies;
-(void)logEventForwardTimeZoneWithTrigger:(id)arg1 ;
-(void)logEventForwardTimeZone;
-(PLNSNotificationOperatorComposition *)timeNotification;
-(void)setTimeNotification:(PLNSNotificationOperatorComposition *)arg1 ;
@end

