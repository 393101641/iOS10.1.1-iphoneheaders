/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:16 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <UIKit/UIImageView.h>

@class NSLayoutConstraint, UIImage, UIView;

@interface MPUArtworkView : UIImageView {

	NSLayoutConstraint* _aspectConstraint;
	UIImage* _externalImage;
	UIView* _highlightView;
	BOOL _isDeallocating;
	BOOL _automaticallyApplyAspectConstraints;
	BOOL _dimsWhenHighlighted;
	BOOL _forcesAnimatedUnhighlighting;
	BOOL _displayingPlaceholder;
	UIImage* _placeholderImage;

}

@property (assign,getter=isDisplayingPlaceholder,nonatomic) BOOL displayingPlaceholder;                                                                //@synthesize displayingPlaceholder=_displayingPlaceholder - In the implementation block
@property (nonatomic,readonly) UIImage * _externalImage;                                                                                               //@synthesize externalImage=_externalImage - In the implementation block
@property (assign,setter=_setAspectConstraintMultiplier:,getter=_aspectConstraintMultiplier,nonatomic) double aspectConstraintMultiplier; 
@property (assign,nonatomic) BOOL automaticallyApplyAspectConstraints;                                                                                 //@synthesize automaticallyApplyAspectConstraints=_automaticallyApplyAspectConstraints - In the implementation block
@property (assign,nonatomic) BOOL dimsWhenHighlighted;                                                                                                 //@synthesize dimsWhenHighlighted=_dimsWhenHighlighted - In the implementation block
@property (assign,nonatomic) BOOL forcesAnimatedUnhighlighting;                                                                                        //@synthesize forcesAnimatedUnhighlighting=_forcesAnimatedUnhighlighting - In the implementation block
@property (nonatomic,retain) UIImage * placeholderImage;                                                                                               //@synthesize placeholderImage=_placeholderImage - In the implementation block
@property (nonatomic,readonly) BOOL shouldDisplayPlaceholder; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(id)arg1 ;
-(void)dealloc;
-(id)initWithImage:(id)arg1 ;
-(void)updateConstraints;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHighlightedImage:(id)arg1 ;
-(void)stopAnimating;
-(void)startAnimating;
-(void)setHighlightedAnimationImages:(id)arg1 ;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(UIImage *)placeholderImage;
-(BOOL)isDisplayingPlaceholder;
-(void)setAutomaticallyApplyAspectConstraints:(BOOL)arg1 ;
-(BOOL)automaticallyApplyAspectConstraints;
-(void)_setAspectConstraintMultiplier:(double)arg1 ;
-(void)_updateHighlightViewAnimated:(BOOL)arg1 ;
-(void)_setPlaceholderHidden:(BOOL)arg1 ;
-(BOOL)shouldDisplayPlaceholder;
-(void)_imageDidChange;
-(UIImage *)_externalImage;
-(void)setDisplayingPlaceholder:(BOOL)arg1 ;
-(BOOL)_shouldShowHighlightView;
-(BOOL)forcesAnimatedUnhighlighting;
-(void)setDimsWhenHighlighted:(BOOL)arg1 ;
-(double)_aspectConstraintMultiplier;
-(BOOL)dimsWhenHighlighted;
-(void)setForcesAnimatedUnhighlighting:(BOOL)arg1 ;
@end

