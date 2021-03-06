/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIGestureRecognizer.h>

@class UITouch;

@interface UIPinchGestureRecognizer : UIGestureRecognizer {

	double _initialTouchDistance;
	double _initialTouchScale;
	double _lastTouchTime;
	double _velocity;
	double _previousVelocity;
	double _scaleThreshold;
	CGAffineTransform _transform;
	CGPoint _anchorSceneReferencePoint;
	UITouch* _touches[2];
	double _hysteresis;
	id _transformAnalyzer;
	unsigned _loggedPinchStatistic : 1;
	unsigned _loggedZoomStatistic : 1;
	unsigned _endsOnSingleTouch : 1;
	BOOL __enableNestedHysteresis;

}

@property (assign,nonatomic) double scaleThreshold;                                                    //@synthesize scaleThreshold=_scaleThreshold - In the implementation block
@property (nonatomic,readonly) CGPoint anchorPoint; 
@property (assign,setter=_setHysteresis:,getter=_hysteresis,nonatomic) double hysteresis;              //@synthesize hysteresis=_hysteresis - In the implementation block
@property (assign,nonatomic) CGAffineTransform transform;                                              //@synthesize transform=_transform - In the implementation block
@property (assign,nonatomic) BOOL _enableNestedHysteresis;                                             //@synthesize _enableNestedHysteresis=__enableNestedHysteresis - In the implementation block
@property (assign,nonatomic) double scale; 
@property (nonatomic,readonly) double velocity; 
+(BOOL)_shouldDefaultToTouches;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(double)_hysteresis;
-(void)_setHysteresis:(double)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setScale:(double)arg1 ;
-(double)scale;
-(CGAffineTransform)transform;
-(double)velocity;
-(CGPoint)anchorPoint;
-(void)set_enableNestedHysteresis:(BOOL)arg1 ;
-(void)_resetGestureRecognizer;
-(void)_logStatisticsForScale:(double)arg1 ;
-(BOOL)_endsOnSingleTouch;
-(void)_setEndsOnSingleTouch:(BOOL)arg1 ;
-(double)scaleThreshold;
-(void)setScaleThreshold:(double)arg1 ;
-(BOOL)_enableNestedHysteresis;
@end

