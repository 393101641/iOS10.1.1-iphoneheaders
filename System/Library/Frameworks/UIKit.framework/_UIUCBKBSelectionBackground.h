/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:01 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIKBKeyView;

@interface _UIUCBKBSelectionBackground : UIView {

	UIKBKeyView* _backgroundProvidingView;
	BOOL _showButtonShape;

}

@property (assign,nonatomic) BOOL showButtonShape;              //@synthesize showButtonShape=_showButtonShape - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)intrinsicContentSize;
-(void)setShowButtonShape:(BOOL)arg1 ;
-(void)_updateBackgroundProvidingView;
-(id)_makeBackgroundView;
-(BOOL)showButtonShape;
@end

