/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/CarKitSettings.bundle/CarKitSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarKitSettings/CarKitSettings-Structs.h>
#import <CarKitSettings/CRReorderingDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@protocol CRHomeScreenDelegate, CRHomeScreenPersisting, CRHomeScreenState;
@class CRCollectionViewReorderManager, CRHomeScreenTableCell, CRAppDrawerTableCell, NSString;

@interface CRHomeScreenManager : NSObject <CRReorderingDelegate, UICollectionViewDelegateFlowLayout> {

	BOOL _animating;
	id<CRHomeScreenDelegate> _delegate;
	CRCollectionViewReorderManager* _reorderManager;
	id<CRHomeScreenPersisting> _persistenceManager;
	id<CRHomeScreenState> _homeScreenState;
	CRHomeScreenTableCell* _homeScreenCell;
	CRAppDrawerTableCell* _appDrawerCell;

}

@property (assign,nonatomic) BOOL animating;                                               //@synthesize animating=_animating - In the implementation block
@property (assign,nonatomic,__weak) id<CRHomeScreenDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CRCollectionViewReorderManager * reorderManager;              //@synthesize reorderManager=_reorderManager - In the implementation block
@property (nonatomic,readonly) id<CRHomeScreenPersisting> persistenceManager;              //@synthesize persistenceManager=_persistenceManager - In the implementation block
@property (nonatomic,readonly) id<CRHomeScreenState> homeScreenState;                      //@synthesize homeScreenState=_homeScreenState - In the implementation block
@property (assign,nonatomic,__weak) CRHomeScreenTableCell * homeScreenCell;                //@synthesize homeScreenCell=_homeScreenCell - In the implementation block
@property (assign,nonatomic,__weak) CRAppDrawerTableCell * appDrawerCell;                  //@synthesize appDrawerCell=_appDrawerCell - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_reflowIconsWithCompletion:(/*^block*/id)arg1 ;
-(void)_fetchHomeScreenWithCompletion:(/*^block*/id)arg1 ;
-(void)setReorderManager:(CRCollectionViewReorderManager *)arg1 ;
-(void)_commitVisibilityOfItem:(id)arg1 ;
-(void)setHomeScreenCell:(CRHomeScreenTableCell *)arg1 ;
-(void)collectionView:(id)arg1 didCommitItem:(id)arg2 ;
-(void)fetchHomeScreenWithCompletion:(/*^block*/id)arg1 ;
-(id<CRHomeScreenState>)homeScreenState;
-(CRHomeScreenTableCell *)homeScreenCell;
-(void)setAppDrawerCell:(CRAppDrawerTableCell *)arg1 ;
-(CRAppDrawerTableCell *)appDrawerCell;
-(CRCollectionViewReorderManager *)reorderManager;
-(BOOL)collectionView:(id)arg1 shouldBeginReorderingAtIndexPath:(id)arg2 ;
-(unsigned long long)numberOfColumnsInCollectionView:(id)arg1 ;
-(BOOL)collectionView:(id)arg1 shouldAllowCollectionViewSwapForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didUpdateReorderingGestureToIndexPath:(id)arg2 ;
-(void)resetHomeScreenInParentView:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_addPlaceholderViewsForCollectionView:(id)arg1 atIndexPaths:(id)arg2 inParentView:(id)arg3 ;
-(void)_swapIconFromCollectionView:(id)arg1 indexPath:(id)arg2 ;
-(void)reorderingCollectionViewDidChange:(id)arg1 ;
-(void)setDelegate:(id<CRHomeScreenDelegate>)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id<CRHomeScreenDelegate>)delegate;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)setAnimating:(BOOL)arg1 ;
-(BOOL)animating;
-(id<CRHomeScreenPersisting>)persistenceManager;
-(id)initWithPersistenceManager:(id)arg1 ;
@end

