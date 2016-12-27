/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBStarkBannerItem.h>

@class SBAlertItem, NSString, SBUISound, NSDate;

@interface SBStarkAlertItemBannerItem : SBStarkBannerItem {

	SBAlertItem* _alertItem;
	NSString* _title;
	NSString* _message;
	SBUISound* _sound;
	NSDate* _originDate;

}
-(id)sourceDate;
-(long long)defaultActionType;
-(void)reloadDisplayProperties;
-(id)categoryImage;
-(/*^block*/id)ignoreAction;
-(BOOL)matchesContext:(id)arg1 ;
-(id)initWithAlertItem:(id)arg1 configuration:(id)arg2 ;
-(void)dealloc;
-(id)category;
-(id)title;
-(/*^block*/id)action;
-(unsigned long long)priority;
-(id)initWithConfiguration:(id)arg1 ;
-(id)sound;
-(id)subActions;
-(BOOL)isSticky;
-(id)subActionLabels;
@end
