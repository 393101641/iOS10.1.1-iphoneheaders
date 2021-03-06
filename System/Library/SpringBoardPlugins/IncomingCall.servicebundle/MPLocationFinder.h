/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:42:57 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/SpringBoardPlugins/IncomingCall.servicebundle/IncomingCall
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@class CLLocationManager, PCPersistentTimer, NSString;

@interface MPLocationFinder : NSObject <CLLocationManagerDelegate> {

	CLLocationManager* _locationManager;
	/*^block*/id _completionHandler;
	PCPersistentTimer* _timer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)findLocationWithBundle:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)stop;
-(void)setCompletionHandler:(/*^block*/id)arg1 ;
-(void)start;
-(id)initWithBundle:(id)arg1 ;
-(void)_timerFired;
@end

