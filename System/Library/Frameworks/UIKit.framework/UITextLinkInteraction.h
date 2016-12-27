/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:52 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UITextLinkInteraction
@required
-(void)cancelInteractionWithLink;
-(BOOL)mightHaveLinks;
-(void)tapLinkAtPoint:(CGPoint)arg1;
-(BOOL)isInteractingWithLink;
-(void)startInteractionWithLinkAtPoint:(CGPoint)arg1;
-(void)updateInteractionWithLinkAtPoint:(CGPoint)arg1;
-(void)validateInteractionWithLinkAtPoint:(CGPoint)arg1;
-(void)startLongInteractionWithLinkAtPoint:(CGPoint)arg1;
-(BOOL)willInteractWithLinkAtPoint:(CGPoint)arg1;

@end
