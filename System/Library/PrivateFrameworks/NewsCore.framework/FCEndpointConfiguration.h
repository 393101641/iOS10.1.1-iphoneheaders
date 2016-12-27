/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FCEndpointConfiguration : NSObject {

	NSString* _clientAPIBaseURLString;
	NSString* _eventRelayBaseURLString;
	NSString* _notificationsBaseURLString;

}

@property (nonatomic,readonly) NSString * clientAPIBaseURLString;                  //@synthesize clientAPIBaseURLString=_clientAPIBaseURLString - In the implementation block
@property (nonatomic,readonly) NSString * eventRelayBaseURLString;                 //@synthesize eventRelayBaseURLString=_eventRelayBaseURLString - In the implementation block
@property (nonatomic,readonly) NSString * notificationsBaseURLString;              //@synthesize notificationsBaseURLString=_notificationsBaseURLString - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)clientAPIBaseURLString;
-(NSString *)eventRelayBaseURLString;
-(NSString *)notificationsBaseURLString;
-(id)initWithClientAPIBaseURLString:(id)arg1 eventRelayBaseURLString:(id)arg2 notificationsBaseURLString:(id)arg3 ;
@end
