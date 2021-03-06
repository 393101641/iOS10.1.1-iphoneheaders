/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:43:04 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTDataProviderEvent.h>
#import <libobjc.A.dylib/RTDataProviderEventProtocol.h>

@class NSString;

@interface RTDataProviderMotion : RTDataProviderEvent <RTDataProviderEventProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)providerName;
-(void)shutdown;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(id)supportedEventClasses;
-(void)populateDataProviderWithHandler:(/*^block*/id)arg1 ;
-(void)_unregisterForDominantActivityNotifications;
-(void)onDominantMotionActivityNotification:(id)arg1 ;
-(void)_processDominantMotionActivity:(id)arg1 ;
-(void)_registerForDominantActivityNotifications;
-(void)_fetchEventsBetweenStartDate:(id)arg1 endDate:(id)arg2 handler:(/*^block*/id)arg3 ;
@end

