/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BookmarkFavoritesGridViewDelegate <NSObject>
@required
-(void)bookmarkFavoritesGridView:(id)arg1 updatedContentSize:(CGSize)arg2;
-(long long)bookmarkFavoritesGridViewLayoutType:(id)arg1;
-(BOOL)bookmarkFavoritesGridViewShouldReorderBookmarks:(id)arg1;
-(BOOL)bookmarkFavoritesGridView:(id)arg1 canCommitReorderingBookmarkFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
-(BOOL)bookmarkFavoritesGridViewCanPromoteFrequentlyVisitedSiteToFavorite:(id)arg1;
-(void)bookmarkFavoritesGridViewDidReorderBookmarks:(id)arg1;
-(void)bookmarkFavoritesGridView:(id)arg1 didReorderBookmarkFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
-(void)bookmarkFavoritesGridView:(id)arg1 promoteFrequentlyVisitedSite:(id)arg2 toFavoriteAtIndex:(unsigned long long)arg3;
-(void)didTapOutsideBookmarkFavoritesGridView:(id)arg1;
-(void)bookmarkFavoritesGridView:(id)arg1 editBookmark:(id)arg2;
-(void)bookmarkFavoritesGridView:(id)arg1 deleteBookmark:(id)arg2;
-(void)bookmarkFavoritesGridView:(id)arg1 banFrequentlyVisitedSite:(id)arg2;
-(void)bookmarkFavoritesGridView:(id)arg1 didSelectBookmark:(id)arg2;

@end
