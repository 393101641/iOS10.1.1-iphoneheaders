/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:00 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class NSURL, LocationUsageMixin;

@interface PSUILocationServicesAuthLevelCell : PSTableCell {

	NSURL* _bundleURL;
	BOOL _isWebApp;
	LocationUsageMixin* _location;
	unsigned long long _authLevel;

}

@property (nonatomic,readonly) LocationUsageMixin * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) unsigned long long authLevel;               //@synthesize authLevel=_authLevel - In the implementation block
-(LocationUsageMixin *)location;
-(id)getLazyIcon;
-(id)getLazyIconID;
-(unsigned long long)authLevel;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(BOOL)canReload;
@end

