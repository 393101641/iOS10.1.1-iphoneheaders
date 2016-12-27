/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:27 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotificationsUIKit/NCDefaultDateLabel.h>
#import <libobjc.A.dylib/NCRelativeDateTimerDelegate.h>

@class NCRelativeDateTimer, NSString;

@interface NCRelativeDateLabel : NCDefaultDateLabel <NCRelativeDateTimerDelegate> {

	NCRelativeDateTimer* _relativeDateTimer;
	unsigned long long _value;
	int _resolution;
	long long _comparedToNow;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)prepareForReuse;
-(void)setTimeZoneRelativeStartDate:(id)arg1 absoluteStartDate:(id)arg2 ;
-(id)constructLabelString;
-(void)timerFiredWithValue:(unsigned long long)arg1 forResolution:(int)arg2 comparedToNow:(long long)arg3 ;
@end
