/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <QuickLook/QLItemViewController.h>

@class QLFileIconImageView, UIStackView, UIButton, UIView, QLDetailItemViewControllerState, NSArray;

@interface QLDetailItemViewController : QLItemViewController {

	QLFileIconImageView* _filePreviewImageView;
	UIStackView* _informationStackView;
	UIButton* _actionIconButton;
	UIButton* _actionButton;
	BOOL _isSettingStateAnimated;
	UIView* _currentActionButtonView;
	QLDetailItemViewControllerState* _state;
	NSArray* _information;

}

@property (nonatomic,retain) QLDetailItemViewControllerState * state;              //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSArray * information;                                //@synthesize information=_information - In the implementation block
@property (assign,nonatomic) CGRect fileThumbnailFrame; 
-(QLDetailItemViewControllerState *)state;
-(void)setState:(QLDetailItemViewControllerState *)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)setFileThumbnailFrame:(CGRect)arg1 ;
-(void)loadPreviewControllerWithPreviewItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)canPinchToDismiss;
-(BOOL)canEnterFullScreen;
-(void)_setActionButtonView:(id)arg1 animated:(BOOL)arg2 actionButtonLabel:(id)arg3 informationVisible:(BOOL)arg4 ;
-(void)_updateInformation;
-(CGRect)fileThumbnailFrame;
-(void)performAction;
-(BOOL)canSwipeToDismiss;
-(void)setInformation:(NSArray *)arg1 ;
-(NSArray *)information;
-(void)setState:(id)arg1 animated:(BOOL)arg2 ;
@end

