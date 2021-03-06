/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:34 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Assistant/UIPlugins/Movies.siriUIBundle/Movies
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Movies/Movies-Structs.h>
#import <SiriUI/SiriUISnippetViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@protocol SiriUIViewController;
@class UICollectionView, UICollectionViewFlowLayout, NSArray, UIImage, MKMapView, SiriUIMapDetailsContainerView, MKPlacemark, SAMovieV2ShowtimeSnippet, NSString;

@interface SiriMoviesShowtimesViewController : SiriUISnippetViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {

	UICollectionView* _collectionView;
	UICollectionViewFlowLayout* _flowLayout;
	NSArray* _showtimesArray;
	UIImage* _attributionImage;
	long long _selectedShowtimeIndex;
	BOOL _supportMapView;
	BOOL _zeroSelectableShowtimes;
	BOOL _hasPunchOut;
	MKMapView* _mapView;
	SiriUIMapDetailsContainerView* _container;
	SCD_Struct_Si2 _visibleMapRect;
	MKPlacemark* _placemark;
	int _style;
	id<SiriUIViewController> _viewControllerForPushingSnippets;

}

@property (nonatomic,retain) SAMovieV2ShowtimeSnippet * snippet; 
@property (assign,nonatomic,__weak) id<SiriUIViewController> viewControllerForPushingSnippets;              //@synthesize viewControllerForPushingSnippets=_viewControllerForPushingSnippets - In the implementation block
@property (assign,nonatomic) int style;                                                                     //@synthesize style=_style - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)_showtimeCellHorizontalPadding;
+(double)_showtimeCellVerticalPadding;
-(void)_handleMapTapGesture:(id)arg1 ;
-(void)setupMap;
-(id)_buyTicketsPunchoutForShowtimeAtIndex:(long long)arg1 ;
-(BOOL)_showtimeAtIndexPathIsTicketable:(id)arg1 ;
-(id)_fontColorForTicketableShowtime:(BOOL)arg1 ;
-(id<SiriUIViewController>)viewControllerForPushingSnippets;
-(void)setViewControllerForPushingSnippets:(id<SiriUIViewController>)arg1 ;
-(id)initWithShowtimesSnippet:(id)arg1 supportMapView:(BOOL)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3 ;
-(int)style;
-(void)loadView;
-(void)setStyle:(int)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(double)desiredHeightForWidth:(double)arg1 ;
-(double)_buttonWidth;
-(BOOL)isMemoryIntensive;
@end

