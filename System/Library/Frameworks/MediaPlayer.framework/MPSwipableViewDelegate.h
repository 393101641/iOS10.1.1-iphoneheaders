/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:14 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPSwipableViewDelegate <NSObject>
@optional
-(void)swipableView:(id)arg1 willMoveToSuperview:(id)arg2;
-(void)swipableView:(id)arg1 didMoveToSuperview:(id)arg2;
-(void)swipableView:(id)arg1 willMoveToWindow:(id)arg2;
-(id)swipableView:(id)arg1 overrideHitTest:(CGPoint)arg2 withEvent:(id)arg3;
-(void)swipableView:(id)arg1 swipedInDirection:(long long)arg2;
-(void)swipableView:(id)arg1 tappedWithCount:(unsigned long long)arg2 atLocation:(CGPoint)arg3;
-(void)swipableView:(id)arg1 tappedWithCount:(unsigned long long)arg2;
-(void)swipableView:(id)arg1 pinchedToScale:(double)arg2 withVelocity:(double)arg3;
-(void)swipableViewHadActivity:(id)arg1;

@end
