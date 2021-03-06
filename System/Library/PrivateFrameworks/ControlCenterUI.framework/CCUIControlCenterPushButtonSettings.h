/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:20 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@class NSString;

@interface CCUIControlCenterPushButtonSettings : _UISettings {

	BOOL _enabled;
	NSString* _displayName;
	NSString* _identifier;

}

@property (assign,nonatomic) BOOL enabled;                        //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,retain) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSString * identifier;               //@synthesize identifier=_identifier - In the implementation block
+(id)settingsControllerModule;
+(id)createWithSettingClass:(Class)arg1 ;
-(BOOL)enabled;
-(NSString *)identifier;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setDefaultValues;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
@end

