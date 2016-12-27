/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUIconContentView.h>

@class UIVisualEffectView, HUAnimatableFilterImageView;

@interface HULightbulbIconContentView : HUIconContentView {

	BOOL _on;
	double _brightness;
	UIVisualEffectView* _vibrantBaseEffectView;
	UIVisualEffectView* _vibrantOutlineEffectView;
	HUAnimatableFilterImageView* _vibrantBulbView;
	HUAnimatableFilterImageView* _coloredBulbView;
	HUAnimatableFilterImageView* _vibrantBaseView;
	HUAnimatableFilterImageView* _coloredBaseView;

}

@property (assign,nonatomic) double brightness;                                          //@synthesize brightness=_brightness - In the implementation block
@property (assign,getter=isOn,nonatomic) BOOL on;                                        //@synthesize on=_on - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * vibrantBaseEffectView;                 //@synthesize vibrantBaseEffectView=_vibrantBaseEffectView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * vibrantOutlineEffectView;              //@synthesize vibrantOutlineEffectView=_vibrantOutlineEffectView - In the implementation block
@property (nonatomic,retain) HUAnimatableFilterImageView * vibrantBulbView;              //@synthesize vibrantBulbView=_vibrantBulbView - In the implementation block
@property (nonatomic,retain) HUAnimatableFilterImageView * coloredBulbView;              //@synthesize coloredBulbView=_coloredBulbView - In the implementation block
@property (nonatomic,retain) HUAnimatableFilterImageView * vibrantBaseView;              //@synthesize vibrantBaseView=_vibrantBaseView - In the implementation block
@property (nonatomic,retain) HUAnimatableFilterImageView * coloredBaseView;              //@synthesize coloredBaseView=_coloredBaseView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)_updateImages;
-(void)setOn:(BOOL)arg1 ;
-(void)setBrightness:(double)arg1 ;
-(double)brightness;
-(BOOL)isOn;
-(void)setIconSize:(unsigned long long)arg1 ;
-(void)setDisplayContext:(unsigned long long)arg1 ;
-(void)updateWithIconDescriptor:(id)arg1 displayStyle:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(void)setVibrancyEffect:(id)arg1 ;
-(void)setVibrantBaseEffectView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)vibrantBaseEffectView;
-(void)setVibrantOutlineEffectView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)vibrantOutlineEffectView;
-(void)setVibrantBaseView:(HUAnimatableFilterImageView *)arg1 ;
-(HUAnimatableFilterImageView *)vibrantBaseView;
-(void)setVibrantBulbView:(HUAnimatableFilterImageView *)arg1 ;
-(HUAnimatableFilterImageView *)vibrantBulbView;
-(void)setColoredBaseView:(HUAnimatableFilterImageView *)arg1 ;
-(HUAnimatableFilterImageView *)coloredBaseView;
-(void)setColoredBulbView:(HUAnimatableFilterImageView *)arg1 ;
-(HUAnimatableFilterImageView *)coloredBulbView;
-(id)_allImageViews;
-(void)_updateDisplayContextState;
-(void)_updateBulbState;
-(void)_updateVisualEffect;
-(id)_tintColorForImageView:(id)arg1 style:(unsigned long long)arg2 ;
-(BOOL)_shouldApplyVibrancy;
-(long long)renderingModeForSubview:(id)arg1 suggestedRenderingMode:(long long)arg2 ;
-(BOOL)wantsManagedVibrancyEffect;
@end
