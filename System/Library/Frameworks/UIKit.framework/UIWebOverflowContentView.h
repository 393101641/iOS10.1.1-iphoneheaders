/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class CALayer;

@interface UIWebOverflowContentView : UIView {

	CALayer* _webLayer;

}

@property (nonatomic,retain) CALayer * webLayer;              //@synthesize webLayer=_webLayer - In the implementation block
-(void)dealloc;
-(id)superview;
-(id)initWithLayer:(id)arg1 ;
-(void)replaceLayer:(id)arg1 ;
-(void)willBeRemoved;
-(void)fixUpViewAfterInsertion;
-(void)_setCachedSubviews:(id)arg1 ;
-(void)setWebLayer:(CALayer *)arg1 ;
-(CALayer *)webLayer;
@end

