/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:50 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@class NSArray;

@interface SBNotificationDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic,retain) NSArray * displayIDsWithBadgingEnabled; 
@property (nonatomic,readonly) BOOL dontSuppressForPrivacyWhenUnlocked; 
@property (nonatomic,readonly) BOOL shouldTestBannerPlayTextTone; 
@property (nonatomic,readonly) NSArray * legacyAlarmList; 
-(void)setShouldTestBannerPlayTextTone:(BOOL)arg1 ;
-(BOOL)shouldTestBannerPlayTextTone;
-(void)setDisplayIDsWithBadgingEnabled:(NSArray *)arg1 ;
-(NSArray *)displayIDsWithBadgingEnabled;
-(void)setDontSuppressForPrivacyWhenUnlocked:(BOOL)arg1 ;
-(BOOL)dontSuppressForPrivacyWhenUnlocked;
-(void)setLegacyAlarmList:(NSArray *)arg1 ;
-(NSArray *)legacyAlarmList;
-(void)_bindAndRegisterDefaults;
@end

