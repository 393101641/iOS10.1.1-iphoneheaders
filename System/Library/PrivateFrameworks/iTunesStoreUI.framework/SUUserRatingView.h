/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:57 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView;

@interface SUUserRatingView : UIView {

	float _value;
	UIImageView* _foregroundImageView;
	UIImageView* _backgroundImageView;

}
+(id)copyImageForRating:(float)arg1 backgroundColor:(id)arg2 style:(long long)arg3 ;
+(double)reflectionHeight;
-(id)init;
-(void)layoutSubviews;
-(void)setValue:(float)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(CGRect)_foregroundImageClipBounds;
-(id)initWithForeground:(id)arg1 background:(id)arg2 ;
-(float)heightWithoutReflection;
@end

