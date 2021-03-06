/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UIView.h>

@class VibrantLabelView, VibrantSeparatorView;

@interface FrequentlyVisitedSitesSectionHeaderView : UIView {

	BOOL _isInLayoutSubviews;
	double _requiredHeight;
	double _labelHeight;
	VibrantLabelView* _frequentlyVisitedSitesLabel;
	VibrantSeparatorView* _separatorView;
	double _labelLeftInset;
	/*^block*/id _updateOnLayout;

}

@property (nonatomic,readonly) VibrantLabelView * frequentlyVisitedSitesLabel;              //@synthesize frequentlyVisitedSitesLabel=_frequentlyVisitedSitesLabel - In the implementation block
@property (nonatomic,readonly) VibrantSeparatorView * separatorView;                        //@synthesize separatorView=_separatorView - In the implementation block
@property (assign,nonatomic) double labelLeftInset;                                         //@synthesize labelLeftInset=_labelLeftInset - In the implementation block
@property (nonatomic,copy) id updateOnLayout;                                               //@synthesize updateOnLayout=_updateOnLayout - In the implementation block
-(void)setLabelLeftInset:(double)arg1 ;
-(void)setUpdateOnLayout:(id)arg1 ;
-(id)updateOnLayout;
-(VibrantLabelView *)frequentlyVisitedSitesLabel;
-(double)labelLeftInset;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(VibrantSeparatorView *)separatorView;
@end

