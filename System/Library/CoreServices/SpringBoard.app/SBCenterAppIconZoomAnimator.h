/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBCenterIconZoomAnimator.h>

@class UIView, SBCenterAppZoomSettings;

@interface SBCenterAppIconZoomAnimator : SBCenterIconZoomAnimator {

	UIView* _appView;
	UIView* _appZoomView;
	CGRect _destinationFrame;
	double _distantScale;

}

@property (nonatomic,retain) SBCenterAppZoomSettings * settings; 
@property (assign) double distantScale;                                       //@synthesize distantScale=_distantScale - In the implementation block
-(void)_cleanupAnimation;
-(void)_prepareAnimation;
-(id)initWithFolderController:(id)arg1 appView:(id)arg2 ;
-(void)setDistantScale:(double)arg1 ;
-(void)hintToFraction:(double)arg1 ;
-(void)_setAnimationFraction:(double)arg1 ;
-(unsigned long long)_numberOfSignificantAnimations;
-(void)_performAnimationToFraction:(double)arg1 withCentralAnimationSettings:(id)arg2 delay:(double)arg3 alreadyAnimating:(BOOL)arg4 sharedCompletion:(/*^block*/id)arg5 ;
-(double)_iconZoomDelay;
-(void)_delayedForRotation;
-(void)_zoomAppForZoomFraction:(double)arg1 ;
-(void)_fadeAppForZoomFraction:(double)arg1 ;
-(double)_appZoomDelay;
-(double)distantScale;
-(CGPoint)cameraPosition;
@end
