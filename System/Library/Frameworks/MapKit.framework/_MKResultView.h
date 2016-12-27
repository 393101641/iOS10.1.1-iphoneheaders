/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:11 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/MKLocationManagerObserver.h>

@protocol _MKResultViewDelegate;
@class NSArray, CLLocation, NSMutableArray, MKLocationManager, NSString, NSTimer, _MKUILabel, UIColor, UIImageView, MKMapItem;

@interface _MKResultView : UIView <MKLocationManagerObserver> {

	NSArray* _mapItems;
	CLLocation* _referenceLocation;
	BOOL _alwaysUsesBusinessLayout;
	int _layoutType;
	id<_MKResultViewDelegate> delegate;
	BOOL _selected;
	BOOL _showsDistance;
	NSMutableArray* _resultConstraints;
	MKLocationManager* _locManager;
	NSString* _primaryLabelText;
	NSString* _secondaryLabelText;
	NSTimer* _refLocationTimer;
	BOOL _useSpotlightVibrancy;
	int _iconFormat;
	_MKUILabel* _nameLabel;
	_MKUILabel* _secondaryLabel;
	_MKUILabel* _tertiaryLabel;
	id<_MKResultViewDelegate> _delegate;
	double _fallbackDistance;
	UIColor* _primaryTextColor;
	UIColor* _secondaryTextColor;
	UIImageView* _imageView;

}

@property (nonatomic,retain) _MKUILabel * nameLabel;                                 //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) _MKUILabel * secondaryLabel;                            //@synthesize secondaryLabel=_secondaryLabel - In the implementation block
@property (nonatomic,retain) _MKUILabel * tertiaryLabel;                             //@synthesize tertiaryLabel=_tertiaryLabel - In the implementation block
@property (assign,nonatomic) BOOL useSpotlightVibrancy;                              //@synthesize useSpotlightVibrancy=_useSpotlightVibrancy - In the implementation block
@property (assign,nonatomic) double fallbackDistance;                                //@synthesize fallbackDistance=_fallbackDistance - In the implementation block
@property (assign,nonatomic) BOOL alwaysUsesBusinessLayout;                          //@synthesize alwaysUsesBusinessLayout=_alwaysUsesBusinessLayout - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) int iconFormat;                                         //@synthesize iconFormat=_iconFormat - In the implementation block
@property (assign,nonatomic,__weak) id<_MKResultViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double preferredHeight; 
@property (nonatomic,retain) UIColor * primaryTextColor;                             //@synthesize primaryTextColor=_primaryTextColor - In the implementation block
@property (nonatomic,retain) UIColor * secondaryTextColor;                           //@synthesize secondaryTextColor=_secondaryTextColor - In the implementation block
@property (nonatomic,retain) MKMapItem * mapItem; 
@property (nonatomic,retain) NSString * primaryLabelText; 
@property (nonatomic,retain) NSString * secondaryLabelText; 
@property (nonatomic,retain) NSArray * mapItems; 
@property (nonatomic,retain) CLLocation * referenceLocation;                         //@synthesize referenceLocation=_referenceLocation - In the implementation block
@property (assign,nonatomic) BOOL selected; 
@property (assign,nonatomic) BOOL showsDistance; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)requiresConstraintBasedLayout;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(void)setDelegate:(id<_MKResultViewDelegate>)arg1 ;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<_MKResultViewDelegate>)delegate;
-(CGSize)intrinsicContentSize;
-(void)setNeedsUpdateConstraints;
-(void)updateConstraints;
-(void)setSelected:(BOOL)arg1 ;
-(UIImageView *)imageView;
-(void)updateLayout;
-(double)preferredHeight;
-(BOOL)selected;
-(void)commonInit;
-(_MKUILabel *)secondaryLabel;
-(void)setSecondaryLabel:(_MKUILabel *)arg1 ;
-(void)handleTap:(id)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(CLLocation *)referenceLocation;
-(void)setNameLabel:(_MKUILabel *)arg1 ;
-(_MKUILabel *)nameLabel;
-(id)initWithMapItem:(id)arg1 ;
-(void)_contentSizeCategoryDidChange;
-(void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2 ;
-(void)locationManagerDidReset:(id)arg1 ;
-(BOOL)locationManagerShouldPauseLocationUpdates:(id)arg1 ;
-(void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3 ;
-(void)locationManagerUpdatedLocation:(id)arg1 ;
-(void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3 ;
-(void)_locationApprovalDidChange;
-(id)initWithMapItems:(id)arg1 primaryLabelText:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 highlightsOnTouch:(BOOL)arg2 ;
-(id)_labelWithFontSize:(double)arg1 ;
-(_MKUILabel *)tertiaryLabel;
-(BOOL)showsDistance;
-(void)setShowsDistance:(BOOL)arg1 ;
-(void)_updateColors;
-(void)_updatePrimaryColors;
-(void)_updateSecondaryColors;
-(void)_updateFontSizing;
-(void)setIconFormat:(int)arg1 ;
-(void)updateImageView;
-(void)addLabelIfNecessary:(id)arg1 ;
-(void)_updateLayoutForBusinessOrCategory;
-(void)_updateLayoutForAddress;
-(id)_defaultPrimaryLabel;
-(unsigned long long)_maxSecondaryStringLengthForEndingString:(id)arg1 ;
-(unsigned long long)_maxNameLengthForEndingString:(id)arg1 ;
-(id)_defaultSecondaryCategoryLabel;
-(double)_expectedHeightForLabels;
-(void)updateSubviews;
-(void)setMapItems:(NSArray *)arg1 ;
-(void)_fireReferenceLocationTimer;
-(void)_cancelReferenceLocationTimer;
-(void)setReferenceLocation:(CLLocation *)arg1 ;
-(void)setTertiaryLabel:(_MKUILabel *)arg1 ;
-(BOOL)alwaysUsesBusinessLayout;
-(void)setAlwaysUsesBusinessLayout:(BOOL)arg1 ;
-(double)fallbackDistance;
-(void)setFallbackDistance:(double)arg1 ;
-(BOOL)useSpotlightVibrancy;
-(void)setUseSpotlightVibrancy:(BOOL)arg1 ;
-(int)iconFormat;
-(UIColor *)primaryTextColor;
-(void)setPrimaryTextColor:(UIColor *)arg1 ;
-(UIColor *)secondaryTextColor;
-(void)setSecondaryTextColor:(UIColor *)arg1 ;
-(CGSize)_imageSize;
-(void)locationManagerDidPauseLocationUpdates:(id)arg1 ;
-(void)locationManagerDidResumeLocationUpdates:(id)arg1 ;
-(MKMapItem *)mapItem;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(NSArray *)mapItems;
-(NSString *)primaryLabelText;
-(NSString *)secondaryLabelText;
-(void)setPrimaryLabelText:(NSString *)arg1 ;
-(void)setSecondaryLabelText:(NSString *)arg1 ;
@end
