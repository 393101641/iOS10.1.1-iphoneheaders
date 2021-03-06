/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UserNotificationsUIKit/NCNotificationShortLookView.h>

@class UIView;

@interface NCLegacyNotificationShortLookView : NCNotificationShortLookView {

	double _additionalContentHeight;
	UIView* _additionalContentAccessoryView;
	double _additionalContentPercentRevealed;

}

@property (nonatomic,retain) UIView * additionalContentAccessoryView;                                          //@synthesize additionalContentAccessoryView=_additionalContentAccessoryView - In the implementation block
@property (assign,nonatomic) double additionalContentHeight; 
@property (assign,nonatomic) double additionalContentPercentRevealed;                                          //@synthesize additionalContentPercentRevealed=_additionalContentPercentRevealed - In the implementation block
@property (getter=isAdditionalContentRevealed,nonatomic,readonly) BOOL additionalContentRevealed; 
@property (nonatomic,readonly) double additionalContentHeightDelta; 
-(void)layoutSubviews;
-(double)additionalContentHeight;
-(void)_layoutContent;
-(CGSize)sizeThatFitsContentWithSize:(CGSize)arg1 ;
-(BOOL)isAdditionalContentRevealed;
-(void)setAdditionalContentHeight:(double)arg1 ;
-(void)setAdditionalContentPercentRevealed:(double)arg1 ;
-(void)setAdditionalContentAccessoryView:(UIView *)arg1 ;
-(double)additionalContentHeightDelta;
-(id)_newNotificationContentView;
-(BOOL)_shouldShowGrabber;
-(void)_updateContentVisibilityWithPercent:(double)arg1 ;
-(void)_updateSizeWithPercent:(double)arg1 ;
-(double)additionalContentPercentRevealed;
-(BOOL)_hasAdditionalContent;
-(double)textHeightDelta;
-(id)_legacyNotificationContentView;
-(UIView *)additionalContentAccessoryView;
-(void)_layoutAdditionalContent;
@end

