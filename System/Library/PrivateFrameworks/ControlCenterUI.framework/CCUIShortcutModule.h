/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:20 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ControlCenterUI/CCUIButtonModule.h>

@class NSString, NSURL;

@interface CCUIShortcutModule : CCUIButtonModule {

	NSString* _displayID;
	NSURL* _url;

}

@property (nonatomic,copy) NSString * displayID;                    //@synthesize displayID=_displayID - In the implementation block
@property (setter=setURL:,nonatomic,copy) NSURL * url;              //@synthesize url=_url - In the implementation block
+(id)identifier;
-(id)identifier;
-(NSURL *)url;
-(void)setURL:(id)arg1 ;
-(id)displayName;
-(BOOL)isRestricted;
-(void)setDisplayID:(NSString *)arg1 ;
-(NSString *)displayID;
-(id)aggdKey;
-(BOOL)_toggleState;
-(void)activateAppWithDisplayID:(id)arg1 url:(id)arg2 unlockIfNecessary:(BOOL)arg3 ;
-(void)activateApp;
@end
