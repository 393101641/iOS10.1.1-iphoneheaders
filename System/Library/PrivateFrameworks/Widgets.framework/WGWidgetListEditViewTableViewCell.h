/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIImageView, UIButton;

@interface WGWidgetListEditViewTableViewCell : UITableViewCell {

	UIImageView* _dotImageView;
	BOOL _widgetEnabled;
	BOOL _showsDot;
	UIButton* _insertWidgetAccessoryButton;

}

@property (assign,getter=isWidgetEnabled,nonatomic) BOOL widgetEnabled;                    //@synthesize widgetEnabled=_widgetEnabled - In the implementation block
@property (assign,nonatomic) BOOL showsDot;                                                //@synthesize showsDot=_showsDot - In the implementation block
@property (nonatomic,__weak,readonly) UIButton * insertWidgetAccessoryButton;              //@synthesize insertWidgetAccessoryButton=_insertWidgetAccessoryButton - In the implementation block
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setWidgetEnabled:(BOOL)arg1 ;
-(BOOL)isWidgetEnabled;
-(void)setShowsDot:(BOOL)arg1 ;
-(BOOL)showsDot;
-(UIButton *)insertWidgetAccessoryButton;
@end

