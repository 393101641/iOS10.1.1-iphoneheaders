/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKit/UIView.h>

@class CALayer;

@interface CAMZoomDialDotsView : UIView {

	double _dotSpacingAngle;
	CALayer* __dotLayer;

}

@property (nonatomic,readonly) CALayer * _dotLayer;               //@synthesize _dotLayer=__dotLayer - In the implementation block
@property (assign,nonatomic) long long dotCount; 
@property (assign,nonatomic) CGPoint dotCenter; 
@property (assign,nonatomic) double dotSpacingAngle;              //@synthesize dotSpacingAngle=_dotSpacingAngle - In the implementation block
+(Class)layerClass;
-(id)initWithDotImage:(id)arg1 ;
-(void)setDotCount:(long long)arg1 ;
-(void)setDotSpacingAngle:(double)arg1 ;
-(double)dotSpacingAngle;
-(void)setDotCenter:(CGPoint)arg1 ;
-(long long)dotCount;
-(id)_replicatorLayer;
-(CALayer *)_dotLayer;
-(CGPoint)dotCenter;
@end

