/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WebBookmarkCollection, NSDictionary, NSArray;

@interface BookmarkImporter : NSObject {

	WebBookmarkCollection* _collection;
	NSDictionary* _carrierBookmarkInfo;
	NSArray* _oldDeletedStaticBookmarks;

}
-(void)migrateYouTubeBookmarks;
-(void)importBuiltinBookmarks;
-(id)_builtInBookmarkItemWithPath:(id)arg1 forLocale:(id)arg2 ;
-(void)_getCarrierBundleBuiltinBookmarkInfoWithCompletion:(/*^block*/id)arg1 ;
-(id)_carrierBundleBuiltinBookmarkInfo;
-(id)_myAccountBookmarkInfo;
-(void)_appendBuiltinBookmarkWithInfo:(id)arg1 toParent:(int)arg2 asCarrierBookmark:(BOOL)arg3 ;
-(void)_setLastImportedCarrierBookmarkInfo:(id)arg1 ;
-(void)_appendBookmarksFromSource:(id)arg1 toParent:(int)arg2 ;
-(id)_builtinBookmarkWithInfo:(id)arg1 asCarrierBookmark:(BOOL)arg2 ;
-(id)_oldDeletedStaticBookmarks;
-(id)_lastImportedCarrierBookmarkInfo;
-(void)_importCarrierBookmarksIfNecessary;
-(id)_builtinFavoritesForLocale:(id)arg1 ;
-(void)_importCarrierBookmarksIfNecessaryAsync;
-(void)_importRootFolderBuiltinBookmarks;
-(void)_importFavoritesFolderBuiltinBookmarks;
-(void)_clearOldDeletedStaticBookmarks;
-(id)_uniqueYouTubeBookmarkFolderName;
-(id)initWithBookmarkCollection:(id)arg1 ;
@end

