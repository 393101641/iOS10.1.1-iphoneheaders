/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUGridCell.h>
#import <libobjc.A.dylib/HUAccessoryViewCellProtocol.h>

@protocol NACancelable;
@class HFItem, UIView, HUIconView, HUGridServiceCellTextView, UILabel, UIActivityIndicatorView, HUVisualEffectContainerView, HUGridServiceCellLayoutOptions, NSString;

@interface HUGridServiceCell : HUGridCell <HUAccessoryViewCellProtocol> {

	BOOL _shouldColorDescription;
	BOOL _shouldShowLoadingState;
	BOOL _hasUpdatedUISinceLastReuse;
	BOOL _showingUpdatingState;
	BOOL _showingProgressIndicator;
	HFItem* _serviceItem;
	UIView* _accessoryView;
	HUIconView* _iconView;
	HUGridServiceCellTextView* _serviceTextView;
	UILabel* _coloredDescriptionLabel;
	id<NACancelable> _showUpdatingStateAfterDelayToken;
	id<NACancelable> _showProgressIndicatorAfterDelayToken;
	UIView* _overrideAccessoryView;
	UIActivityIndicatorView* _activityIndicator;
	HUVisualEffectContainerView* _exclamationView;

}

@property (nonatomic,retain) HUIconView * iconView;                                              //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) HUGridServiceCellTextView * serviceTextView;                        //@synthesize serviceTextView=_serviceTextView - In the implementation block
@property (nonatomic,retain) UILabel * coloredDescriptionLabel;                                  //@synthesize coloredDescriptionLabel=_coloredDescriptionLabel - In the implementation block
@property (assign,nonatomic) BOOL hasUpdatedUISinceLastReuse;                                    //@synthesize hasUpdatedUISinceLastReuse=_hasUpdatedUISinceLastReuse - In the implementation block
@property (assign,nonatomic) BOOL showingUpdatingState;                                          //@synthesize showingUpdatingState=_showingUpdatingState - In the implementation block
@property (assign,nonatomic) BOOL showUpdatingStateAfterDelay; 
@property (nonatomic,retain) id<NACancelable> showUpdatingStateAfterDelayToken;                  //@synthesize showUpdatingStateAfterDelayToken=_showUpdatingStateAfterDelayToken - In the implementation block
@property (assign,nonatomic) BOOL showingProgressIndicator;                                      //@synthesize showingProgressIndicator=_showingProgressIndicator - In the implementation block
@property (assign,nonatomic) BOOL showProgressIndicatorAfterDelay; 
@property (nonatomic,retain) id<NACancelable> showProgressIndicatorAfterDelayToken;              //@synthesize showProgressIndicatorAfterDelayToken=_showProgressIndicatorAfterDelayToken - In the implementation block
@property (nonatomic,retain) UIView * overrideAccessoryView;                                     //@synthesize overrideAccessoryView=_overrideAccessoryView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;                        //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,retain) HUVisualEffectContainerView * exclamationView;                      //@synthesize exclamationView=_exclamationView - In the implementation block
@property (nonatomic,retain) HFItem * serviceItem;                                               //@synthesize serviceItem=_serviceItem - In the implementation block
@property (nonatomic,retain) HUGridServiceCellLayoutOptions * layoutOptions; 
@property (nonatomic,retain) UIView * accessoryView;                                             //@synthesize accessoryView=_accessoryView - In the implementation block
@property (assign,nonatomic) BOOL shouldColorDescription;                                        //@synthesize shouldColorDescription=_shouldColorDescription - In the implementation block
@property (assign,nonatomic) BOOL disableContinuousIconAnimation; 
@property (assign,nonatomic) BOOL shouldShowLoadingState;                                        //@synthesize shouldShowLoadingState=_shouldShowLoadingState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)layoutOptionsClass;
+(id)_iconTintColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(id)item;
-(void)prepareForReuse;
-(void)_updateAccessoryView;
-(void)setItem:(id)arg1 ;
-(UIView *)accessoryView;
-(void)setAccessoryView:(UIView *)arg1 ;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(HUIconView *)iconView;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(void)layoutOptionsDidChange;
-(void)displayStyleDidChange;
-(void)setShouldShowLoadingState:(BOOL)arg1 ;
-(BOOL)shouldShowLoadingState;
-(void)_setupServiceCell;
-(void)_setServiceItem:(id)arg1 updateUI:(BOOL)arg2 ;
-(void)setShowProgressIndicatorAfterDelay:(BOOL)arg1 ;
-(void)setShowUpdatingStateAfterDelay:(BOOL)arg1 ;
-(void)setShouldColorDescription:(BOOL)arg1 ;
-(void)setHasUpdatedUISinceLastReuse:(BOOL)arg1 ;
-(void)setServiceTextView:(HUGridServiceCellTextView *)arg1 ;
-(HUGridServiceCellTextView *)serviceTextView;
-(void)setColoredDescriptionLabel:(UILabel *)arg1 ;
-(UILabel *)coloredDescriptionLabel;
-(void)setOverrideAccessoryView:(UIView *)arg1 ;
-(BOOL)showingUpdatingState;
-(id<NACancelable>)showUpdatingStateAfterDelayToken;
-(void)setShowingUpdatingState:(BOOL)arg1 ;
-(void)setShowUpdatingStateAfterDelayToken:(id<NACancelable>)arg1 ;
-(BOOL)showingProgressIndicator;
-(id<NACancelable>)showProgressIndicatorAfterDelayToken;
-(void)setShowingProgressIndicator:(BOOL)arg1 ;
-(void)setShowProgressIndicatorAfterDelayToken:(id<NACancelable>)arg1 ;
-(void)_updateTextWithPrimaryState:(long long)arg1 ;
-(HFItem *)serviceItem;
-(void)setServiceItem:(HFItem *)arg1 ;
-(void)_updateUIWithAnimation:(BOOL)arg1 overridePrimaryState:(long long)arg2 ;
-(void)_updateIconWithPrimaryState:(long long)arg1 animated:(BOOL)arg2 ;
-(BOOL)hasUpdatedUISinceLastReuse;
-(HUVisualEffectContainerView *)exclamationView;
-(void)_updateSecondaryContentDisplayStyle;
-(void)_getDescription:(id*)arg1 nameTextColor:(id*)arg2 descriptionTextColor:(id*)arg3 forPrimaryState:(long long)arg4 ;
-(BOOL)shouldColorDescription;
-(UIView *)overrideAccessoryView;
-(void)_createExclamationViewIfNecessary;
-(void)setExclamationView:(HUVisualEffectContainerView *)arg1 ;
-(BOOL)showUpdatingStateAfterDelay;
-(BOOL)showProgressIndicatorAfterDelay;
-(BOOL)disableContinuousIconAnimation;
-(void)setDisableContinuousIconAnimation:(BOOL)arg1 ;
-(void)setIconView:(HUIconView *)arg1 ;
@end

