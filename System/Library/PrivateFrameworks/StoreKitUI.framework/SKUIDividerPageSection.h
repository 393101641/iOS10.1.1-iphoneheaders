/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:00 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIStorePageSection.h>
#import <libobjc.A.dylib/SKUIArtworkRequestDelegate.h>

@class SKUIViewElementLayoutContext, SKUIDividerPageComponent, NSString;

@interface SKUIDividerPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate> {

	SKUIViewElementLayoutContext* _layoutContext;

}

@property (nonatomic,readonly) SKUIDividerPageComponent * pageComponent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(id)initWithPageComponent:(id)arg1 ;
-(id)backgroundColorForIndexPath:(id)arg1 ;
-(void)willAppearInContext:(id)arg1 ;
-(id)cellForIndexPath:(id)arg1 ;
-(CGSize)cellSizeForIndexPath:(id)arg1 ;
-(long long)numberOfCells;
-(BOOL)updateCellWithIndexPath:(id)arg1 itemState:(id)arg2 animated:(BOOL)arg3 ;
-(void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2 ;
-(void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1 ;
-(void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1 ;
-(void)willTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_enumerateVisibleCellsUsingBlock:(/*^block*/id)arg1 ;
-(void)_requestCellLayout;
-(UIEdgeInsets)sectionContentInset;
@end

