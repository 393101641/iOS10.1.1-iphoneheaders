/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <BaseBoardUI/BSUIScrollView.h>

@class NSArray;

@interface SBPagedScrollView : BSUIScrollView {

	BOOL _changingScrollViewLayout;
	NSArray* _pageViews;
	unsigned long long _currentPageIndex;
	NSRange _visiblePageRange;

}

@property (assign,nonatomic) unsigned long long currentPageIndex;              //@synthesize currentPageIndex=_currentPageIndex - In the implementation block
@property (assign,nonatomic) NSRange visiblePageRange;                         //@synthesize visiblePageRange=_visiblePageRange - In the implementation block
@property (nonatomic,copy) NSArray * pageViews;                                //@synthesize pageViews=_pageViews - In the implementation block
-(BOOL)scrollToPageAtIndex:(unsigned long long)arg1 animated:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(BOOL)resetContentOffsetToCurrentPage;
-(NSRange)visiblePageRange;
-(void)setPageViews:(NSArray *)arg1 ;
-(double)pageRelativeScrollOffset;
-(CGPoint)contentOffsetForPageAtIndex:(unsigned long long)arg1 ;
-(SCD_Struct_SB10)currentScrollInterval;
-(BOOL)scrollToPageAtIndex:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)_updateVisiblePages;
-(void)_layoutPages;
-(void)_updateCurrentPageForScrollOffset;
-(void)setVisiblePageRange:(NSRange)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(unsigned long long)currentPageIndex;
-(void)setCurrentPageIndex:(unsigned long long)arg1 ;
-(void)_bs_didScrollWithContext:(SCD_Struct_SB34)arg1 ;
-(void)_bs_willBeginScrolling;
-(void)_bs_didEndScrolling;
-(void)_layoutScrollView;
-(NSArray *)pageViews;
@end

