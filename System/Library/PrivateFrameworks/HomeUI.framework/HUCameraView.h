/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:52 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol UILayoutSupport;
@class HUCameraErrorContent, HMCameraView, HUCameraBadgeView, UIView, HUCameraErrorView, HUDecayingTimer, NSArray, NSLayoutConstraint, HMCameraSource;

@interface HUCameraView : UIView {

	double _badgeInset;
	id<UILayoutSupport> _badgeTopLayoutGuide;
	HUCameraErrorContent* _errorContent;
	HMCameraView* _cameraView;
	HUCameraBadgeView* _badgeView;
	UIView* _cameraOverlayView;
	UIView* _cameraDimmingView;
	HUCameraErrorView* _errorView;
	HUDecayingTimer* _snapshotAgeUpdateTimer;
	NSArray* _staticConstraints;
	NSLayoutConstraint* _cameraAspectRatioConstraint;
	NSArray* _badgeInsetConstraints;

}

@property (nonatomic,readonly) HMCameraView * cameraView;                                   //@synthesize cameraView=_cameraView - In the implementation block
@property (nonatomic,readonly) HUCameraBadgeView * badgeView;                               //@synthesize badgeView=_badgeView - In the implementation block
@property (nonatomic,readonly) UIView * cameraOverlayView;                                  //@synthesize cameraOverlayView=_cameraOverlayView - In the implementation block
@property (nonatomic,retain) UIView * cameraDimmingView;                                    //@synthesize cameraDimmingView=_cameraDimmingView - In the implementation block
@property (nonatomic,retain) HUCameraErrorView * errorView;                                 //@synthesize errorView=_errorView - In the implementation block
@property (nonatomic,retain) HUDecayingTimer * snapshotAgeUpdateTimer;                      //@synthesize snapshotAgeUpdateTimer=_snapshotAgeUpdateTimer - In the implementation block
@property (nonatomic,retain) NSArray * staticConstraints;                                   //@synthesize staticConstraints=_staticConstraints - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * cameraAspectRatioConstraint;              //@synthesize cameraAspectRatioConstraint=_cameraAspectRatioConstraint - In the implementation block
@property (nonatomic,retain) NSArray * badgeInsetConstraints;                               //@synthesize badgeInsetConstraints=_badgeInsetConstraints - In the implementation block
@property (assign,nonatomic) long long cameraContentMode; 
@property (nonatomic,retain) HMCameraSource * cameraSource; 
@property (assign,nonatomic) double badgeInset;                                             //@synthesize badgeInset=_badgeInset - In the implementation block
@property (nonatomic,retain) id<UILayoutSupport> badgeTopLayoutGuide;                       //@synthesize badgeTopLayoutGuide=_badgeTopLayoutGuide - In the implementation block
@property (nonatomic,retain) HUCameraErrorContent * errorContent;                           //@synthesize errorContent=_errorContent - In the implementation block
@property (nonatomic,readonly) UIView * cameraContentSnapshot; 
@property (nonatomic,readonly) UIView * cameraOverlaySnapshot; 
+(BOOL)requiresConstraintBasedLayout;
-(id)init;
-(void)dealloc;
-(void)updateConstraints;
-(HUCameraBadgeView *)badgeView;
-(UIView *)cameraOverlayView;
-(HMCameraView *)cameraView;
-(void)_updateBadgeView;
-(void)setCameraSource:(HMCameraSource *)arg1 ;
-(UIView *)cameraOverlaySnapshot;
-(HMCameraSource *)cameraSource;
-(void)setCameraContentMode:(long long)arg1 ;
-(void)setErrorContent:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithBadgeView:(id)arg1 ;
-(void)setBadgeInset:(double)arg1 ;
-(void)setBadgeTopLayoutGuide:(id<UILayoutSupport>)arg1 ;
-(UIView *)cameraContentSnapshot;
-(NSArray *)staticConstraints;
-(void)setStaticConstraints:(NSArray *)arg1 ;
-(HUDecayingTimer *)snapshotAgeUpdateTimer;
-(NSLayoutConstraint *)cameraAspectRatioConstraint;
-(void)setCameraAspectRatioConstraint:(NSLayoutConstraint *)arg1 ;
-(NSArray *)badgeInsetConstraints;
-(id<UILayoutSupport>)badgeTopLayoutGuide;
-(double)badgeInset;
-(void)setBadgeInsetConstraints:(NSArray *)arg1 ;
-(void)_updateErrorVisibilityStateAnimated:(BOOL)arg1 ;
-(HUCameraErrorView *)errorView;
-(void)setErrorView:(HUCameraErrorView *)arg1 ;
-(HUCameraErrorContent *)errorContent;
-(UIView *)cameraDimmingView;
-(void)setCameraDimmingView:(UIView *)arg1 ;
-(void)_updateBadgeViewReschedulingTimerIfNecessary:(BOOL)arg1 ;
-(void)_scheduleNextSnapshotAgeUpdateForCaptureDate:(id)arg1 ;
-(void)setSnapshotAgeUpdateTimer:(HUDecayingTimer *)arg1 ;
-(long long)cameraContentMode;
-(void)setErrorContent:(HUCameraErrorContent *)arg1 ;
@end

