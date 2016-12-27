/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKit/UIView.h>

@class PKPaymentSetupInfoView;

@interface PKPaymentSetupIntroView : UIView {

	long long _context;
	BOOL _hasSupportingHardware;
	PKPaymentSetupInfoView* _infoView;

}

@property (nonatomic,retain) PKPaymentSetupInfoView * infoView;              //@synthesize infoView=_infoView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(void)stopAnimation;
-(void)startAnimation;
-(id)initWithContext:(long long)arg1 ;
-(id)initWithContext:(long long)arg1 heroImageController:(id)arg2 ;
-(id)initWithContext:(long long)arg1 heroImageController:(id)arg2 hasSupportingHardware:(BOOL)arg3 ;
-(void)_createSubviewsWithHeroImageController:(id)arg1 ;
-(PKPaymentSetupInfoView *)infoView;
-(void)setInfoView:(PKPaymentSetupInfoView *)arg1 ;
@end
