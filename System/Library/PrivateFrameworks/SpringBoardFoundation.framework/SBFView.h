/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:49 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <UIKit/UIView.h>

@class NSArray;

@interface SBFView : UIView {

	NSArray* _animatedLayerProperties;
	/*^block*/id _didMoveToWindowHandler;
	CGSize _intrinsicContentSize;

}

@property (assign,nonatomic) CGSize intrinsicContentSize;                  //@synthesize intrinsicContentSize=_intrinsicContentSize - In the implementation block
@property (nonatomic,copy) NSArray * animatedLayerProperties;              //@synthesize animatedLayerProperties=_animatedLayerProperties - In the implementation block
@property (nonatomic,copy) id didMoveToWindowHandler;                      //@synthesize didMoveToWindowHandler=_didMoveToWindowHandler - In the implementation block
-(void)didMoveToWindow;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setIntrinsicContentSize:(CGSize)arg1 ;
-(id)didMoveToWindowHandler;
-(NSArray *)animatedLayerProperties;
-(void)setAnimatedLayerProperties:(NSArray *)arg1 ;
-(void)setDidMoveToWindowHandler:(id)arg1 ;
@end
