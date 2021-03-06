/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/VideoSettings.bundle/VideoSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <UIKit/UIAlertViewDelegate.h>

@class PSSpecifier, NSString;

@interface VideosSettingsController : PSListController <UIAlertViewDelegate> {

	id _accountChangeNotificationToken;
	PSSpecifier* _homeSharingSignInButtonSpecifier;
	PSSpecifier* _homeSharingSignOutButtonSpecifier;
	PSSpecifier* _playbackQualityCellularSpecifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)homeSharingSignInButtonAction:(id)arg1 ;
-(void)homeSharingSignOutButtonAction:(id)arg1 ;
-(void)_updateCellularQualitySpecifiersAnimated:(BOOL)arg1 shouldUpdateUsingTableView:(BOOL)arg2 ;
-(id)stringTable;
-(void)_updateHomeSharingSpecifiersAnimated:(BOOL)arg1 shouldUpdateUsingTableView:(BOOL)arg2 ;
-(void)setShowPlaybackCellularQuality:(id)arg1 specifier:(id)arg2 ;
-(void)_updateCellularSpecifiersAnimated:(BOOL)arg1 shouldUpdateUsingTableView:(BOOL)arg2 ;
-(void)setUseCellularData:(id)arg1 specifier:(id)arg2 ;
-(void)_updateFooterTextAnimated:(BOOL)arg1 allowReload:(BOOL)arg2 ;
-(void)setShowsAllVideos:(id)arg1 specifier:(id)arg2 ;
-(void)setShowPlaybackQuality:(id)arg1 specifier:(id)arg2 ;
-(id)init;
-(id)homeSharingAppleID;
-(id)specifiers;
@end

