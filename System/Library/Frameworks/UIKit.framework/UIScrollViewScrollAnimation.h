/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:49 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIAnimation.h>

@interface UIScrollViewScrollAnimation : UIAnimation {

	CGPoint _originalOffset;
	CGPoint _targetOffset;
	double _accuracy;
	BOOL _adjustsForContentOffsetDelta;

}
-(void)dealloc;
-(void)adjustForContentOffsetDelta:(CGPoint)arg1 ;
-(void)setProgress:(float)arg1 ;
@end
