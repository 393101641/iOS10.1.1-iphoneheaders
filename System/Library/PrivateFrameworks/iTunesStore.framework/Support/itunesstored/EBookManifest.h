/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSString;

@interface EBookManifest : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSMutableDictionary* _manifest;
	NSString* _manifestPath;

}

@property (readonly) NSString * manifestPath; 
+(id)purchasedBookManifest;
+(id)sharedPurchasedBookManifest;
+(id)syncedBookManifest;
-(void)synchronizeData;
-(id)_manifest;
-(void)addManifestEntries:(id)arg1 ;
-(id)manifestEntriesWithProperty:(id)arg1 equalToValue:(id)arg2 limitCount:(long long)arg3 ;
-(id)_entries;
-(void)addManifestEntry:(id)arg1 ;
-(id)bookPathPermalink:(id)arg1 ;
-(id)bookPathForAdamID:(id)arg1 withPublicationVersion:(id)arg2 ;
-(void)removeManifestEntryWithStoreItemID:(id)arg1 ;
-(void)removeManifestEntryWithDownloadPermalink:(id)arg1 ;
-(void)_invalidateAfterExternalChange;
-(id)init;
-(void)dealloc;
-(id)initWithManifestPath:(id)arg1 ;
-(NSString *)manifestPath;
@end

