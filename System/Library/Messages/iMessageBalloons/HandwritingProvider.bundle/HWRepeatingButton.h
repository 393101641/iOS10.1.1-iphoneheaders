/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:30 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Messages/iMessageBalloons/HandwritingProvider.bundle/HandwritingProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HandwritingProvider/HandwritingProvider-Structs.h>
#import <UIKit/UIButton.h>

@interface HWRepeatingButton : UIButton {

	SEL _repeatingAction;
	unsigned long long _repeatCount;

}

@property (assign,nonatomic) unsigned long long repeatCount;              //@synthesize repeatCount=_repeatCount - In the implementation block
@property (assign,nonatomic) SEL repeatingAction;                         //@synthesize repeatingAction=_repeatingAction - In the implementation block
-(void)setRepeatingAction:(SEL)arg1 ;
-(void)_sendRepeatEvent:(id)arg1 ;
-(void)_touchUp:(id)arg1 ;
-(SEL)repeatingAction;
-(void)_touchDown:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_commonInit;
-(unsigned long long)repeatCount;
-(void)setRepeatCount:(unsigned long long)arg1 ;
@end
