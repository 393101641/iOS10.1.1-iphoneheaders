/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIFocusUpdateContext;

@interface _UIFocusViewSearchResult : NSObject {

	BOOL _hasSpeedBump;
	UIFocusUpdateContext* _focusCandidate;

}

@property (nonatomic,retain) UIFocusUpdateContext * focusCandidate;              //@synthesize focusCandidate=_focusCandidate - In the implementation block
@property (assign,nonatomic) BOOL hasSpeedBump;                                  //@synthesize hasSpeedBump=_hasSpeedBump - In the implementation block
-(UIFocusUpdateContext *)focusCandidate;
-(void)setFocusCandidate:(UIFocusUpdateContext *)arg1 ;
-(void)setHasSpeedBump:(BOOL)arg1 ;
-(BOOL)hasSpeedBump;
@end
