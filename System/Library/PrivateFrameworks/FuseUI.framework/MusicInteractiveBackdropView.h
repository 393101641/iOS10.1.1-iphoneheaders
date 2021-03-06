/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:05 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIBackdropView.h>

@interface MusicInteractiveBackdropView : _UIBackdropView {

	double _finalScale;
	double _transitionProgress;
	double _scale;
	double _factor;

}

@property (assign,nonatomic) double scale;               //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) double factor;              //@synthesize factor=_factor - In the implementation block
-(void)setScale:(double)arg1 ;
-(double)scale;
-(void)applySettings:(id)arg1 ;
-(id)gaussianBlurFilter;
-(void)transitionIncrementallyToSettings:(id)arg1 weighting:(double)arg2 ;
-(void)transitionComplete;
-(void)setFactor:(double)arg1 ;
-(void)_updateInputBounds;
-(double)factor;
@end

