/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:57 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UILabel, UIImage;

@interface SKUIStarRatingView : UIView {

	double _elementSpacing;
	UIImageView* _ratingStarsImageView;
	UILabel* _textLabel;

}

@property (assign,nonatomic) double elementSpacing;                   //@synthesize elementSpacing=_elementSpacing - In the implementation block
@property (nonatomic,retain) UIImage * ratingStarsImage; 
@property (nonatomic,readonly) UILabel * textLabel; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)textLabel;
-(void)setElementSpacing:(double)arg1 ;
-(UIImage *)ratingStarsImage;
-(void)setRatingStarsImage:(UIImage *)arg1 ;
-(double)elementSpacing;
@end

