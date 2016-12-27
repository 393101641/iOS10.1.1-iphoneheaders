/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:42 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/AppleAccountSettings.bundle/AppleAccountSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <AppleAccountSettings/AAUIInviteViewProtocol.h>

@class UILabel, NSString;

@interface AAUIChildTransferInviteView : UIView <AAUIInviteViewProtocol> {

	UILabel* _titleLabel;
	UILabel* _primaryLabel;
	UILabel* _detailsLabel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)_heightForTitle:(id)arg1 width:(double)arg2 ;
-(id)_labelWithCenteredText:(id)arg1 ;
-(void)layoutSubviews;
-(double)desiredHeightForWidth:(double)arg1 ;
-(double)_heightForText:(id)arg1 width:(double)arg2 ;
-(id)initWithInvite:(id)arg1 ;
@end
