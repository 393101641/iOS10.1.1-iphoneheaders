/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:58 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKit/UIView.h>

@class SUMaskProvider;

@interface SUMaskedView : UIView {

	SUMaskProvider* _maskProvider;

}

@property (nonatomic,retain) SUMaskProvider * maskProvider;              //@synthesize maskProvider=_maskProvider - In the implementation block
-(void)setFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setMaskProvider:(SUMaskProvider *)arg1 ;
-(SUMaskProvider *)maskProvider;
-(CGPathRef)copyMaskPath;
-(void)_reloadMask;
@end
