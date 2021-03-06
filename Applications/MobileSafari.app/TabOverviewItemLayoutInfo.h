/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MobileSafari/MobileSafari-Structs.h>
@class TabOverview, TabOverviewItem, UIView, TabOverviewItemView, TabOverviewInterpolatedLocation;

@interface TabOverviewItemLayoutInfo : NSObject {

	BOOL _closeSynchronized;
	BOOL _visibleInTabOverview;
	TabOverview* _tabOverview;
	TabOverviewItem* _tabOverviewItem;
	UIView* _borrowedContentView;
	TabOverviewItemView* _itemView;
	double _alpha;
	double _snapshotAlpha;
	double _titleAlpha;
	TabOverviewInterpolatedLocation* _interpolatedLocation;
	TabOverviewInterpolatedLocation* _interpolatedStackLocation;
	CGRect _snapshotFrame;
	CGRect _frame;
	SCD_Struct_Ta3 _closeLastLayoutLocation;
	SCD_Struct_Ta3 _closeStartLocation;

}

@property (nonatomic,__weak,readonly) TabOverview * tabOverview;                                       //@synthesize tabOverview=_tabOverview - In the implementation block
@property (nonatomic,__weak,readonly) TabOverviewItem * tabOverviewItem;                               //@synthesize tabOverviewItem=_tabOverviewItem - In the implementation block
@property (nonatomic,retain) UIView * borrowedContentView;                                             //@synthesize borrowedContentView=_borrowedContentView - In the implementation block
@property (assign,nonatomic) BOOL closeSynchronized;                                                   //@synthesize closeSynchronized=_closeSynchronized - In the implementation block
@property (nonatomic,retain) TabOverviewItemView * itemView;                                           //@synthesize itemView=_itemView - In the implementation block
@property (assign,nonatomic) BOOL visibleInTabOverview;                                                //@synthesize visibleInTabOverview=_visibleInTabOverview - In the implementation block
@property (assign,nonatomic) CGRect snapshotFrame;                                                     //@synthesize snapshotFrame=_snapshotFrame - In the implementation block
@property (assign,nonatomic) double alpha;                                                             //@synthesize alpha=_alpha - In the implementation block
@property (assign,nonatomic) double snapshotAlpha;                                                     //@synthesize snapshotAlpha=_snapshotAlpha - In the implementation block
@property (assign,nonatomic) double titleAlpha;                                                        //@synthesize titleAlpha=_titleAlpha - In the implementation block
@property (assign,nonatomic) CGRect frame;                                                             //@synthesize frame=_frame - In the implementation block
@property (nonatomic,readonly) CGRect bounds; 
@property (assign,nonatomic) SCD_Struct_Ta4 closeLastLayoutLocation;                                   //@synthesize closeLastLayoutLocation=_closeLastLayoutLocation - In the implementation block
@property (assign,nonatomic) SCD_Struct_Ta4 closeStartLocation;                                        //@synthesize closeStartLocation=_closeStartLocation - In the implementation block
@property (nonatomic,retain) TabOverviewInterpolatedLocation * interpolatedLocation;                   //@synthesize interpolatedLocation=_interpolatedLocation - In the implementation block
@property (nonatomic,retain) TabOverviewInterpolatedLocation * interpolatedStackLocation;              //@synthesize interpolatedStackLocation=_interpolatedStackLocation - In the implementation block
-(void)_clearViews;
-(void)updateItemView;
-(void)_insertBorrowedContentView;
-(void)_ensureViews;
-(void)_removeBorrowedContentView;
-(void)_clearViewsIfNeeded;
-(id)initWithTabOverview:(id)arg1 item:(id)arg2 ;
-(void)setBorrowedContentView:(UIView *)arg1 ;
-(void)setDimmingAlpha:(double)arg1 animated:(BOOL)arg2 ;
-(void)setVisibleInTabOverview:(BOOL)arg1 ;
-(void)updateSnapshot;
-(void)setSnapshotAlpha:(double)arg1 ;
-(void)removeAllSnapshotLayerAnimations;
-(TabOverview *)tabOverview;
-(TabOverviewItem *)tabOverviewItem;
-(UIView *)borrowedContentView;
-(BOOL)closeSynchronized;
-(void)setCloseSynchronized:(BOOL)arg1 ;
-(BOOL)visibleInTabOverview;
-(double)snapshotAlpha;
-(SCD_Struct_Ta4)closeLastLayoutLocation;
-(void)setCloseLastLayoutLocation:(SCD_Struct_Ta4)arg1 ;
-(SCD_Struct_Ta4)closeStartLocation;
-(void)setCloseStartLocation:(SCD_Struct_Ta4)arg1 ;
-(TabOverviewInterpolatedLocation *)interpolatedLocation;
-(void)setInterpolatedLocation:(TabOverviewInterpolatedLocation *)arg1 ;
-(TabOverviewInterpolatedLocation *)interpolatedStackLocation;
-(void)setInterpolatedStackLocation:(TabOverviewInterpolatedLocation *)arg1 ;
-(id)init;
-(CGRect)bounds;
-(void)setFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setAlpha:(double)arg1 ;
-(CGRect)frame;
-(double)alpha;
-(CGRect)snapshotFrame;
-(void)setSnapshotFrame:(CGRect)arg1 ;
-(void)_updateSnapshotImage;
-(void)setItemView:(TabOverviewItemView *)arg1 ;
-(TabOverviewItemView *)itemView;
-(void)setTitleAlpha:(double)arg1 ;
-(double)titleAlpha;
@end

