/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <UIKit/UIView.h>

@class UIButton, _UIBackdropView;

@interface QLOverlayPlayButton : UIView {

	UIButton* _button;
	_UIBackdropView* _backdropView;
	id _target;
	SEL _action;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(CGSize)intrinsicContentSize;
-(void)setTarget:(id)arg1 action:(SEL)arg2 ;
-(void)_playButtonTapped:(id)arg1 ;
-(void)_playButtonActivate:(id)arg1 ;
-(void)_playButtonDeactivate:(id)arg1 ;
@end

