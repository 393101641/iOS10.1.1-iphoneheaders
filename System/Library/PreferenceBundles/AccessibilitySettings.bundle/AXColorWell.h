/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:40 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilitySettings-Structs.h>
#import <UIKit/UIView.h>

@class StrokableLabel, UIColor;

@interface AXColorWell : UIView {

	StrokableLabel* _sampleTextLabel;
	int _colorType;
	int _transparencyType;
	float _textAlpha;
	UIColor* wellColor;
	long long _edgeStyle;

}

@property (nonatomic,retain) UIColor * wellColor; 
@property (assign,nonatomic) int colorType;                     //@synthesize colorType=_colorType - In the implementation block
@property (assign,nonatomic) int transparencyType;              //@synthesize transparencyType=_transparencyType - In the implementation block
@property (assign,nonatomic) long long edgeStyle;               //@synthesize edgeStyle=_edgeStyle - In the implementation block
@property (assign,nonatomic) float textAlpha;                   //@synthesize textAlpha=_textAlpha - In the implementation block
-(int)transparencyType;
-(void)updateProperties;
-(void)setTransparencyType:(int)arg1 ;
-(long long)edgeStyle;
-(UIColor *)wellColor;
-(void)setWellColor:(UIColor *)arg1 ;
-(void)setEdgeStyle:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(int)colorType;
-(void)setColorType:(int)arg1 ;
-(void)setTextAlpha:(float)arg1 ;
-(float)textAlpha;
@end

