/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UILegibilitySettings.h>

@class UIColor;

@interface SBLockScreenLegibilitySettings : _UILegibilitySettings {

	BOOL _vibrancyDisabled;
	UIColor* _backgroundColorHint;

}

@property (nonatomic,retain) UIColor * backgroundColorHint;              //@synthesize backgroundColorHint=_backgroundColorHint - In the implementation block
@property (assign,nonatomic) BOOL vibrancyDisabled;                      //@synthesize vibrancyDisabled=_vibrancyDisabled - In the implementation block
+(id)defaultSettings;
-(UIColor *)backgroundColorHint;
-(void)setBackgroundColorHint:(UIColor *)arg1 ;
-(BOOL)vibrancyDisabled;
-(void)setVibrancyDisabled:(BOOL)arg1 ;
@end
