/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:50 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunescloudd/CloudLibraryOperation.h>

@class JaliscoAppLibrary, NSArray, NSURLSession;

@interface JaliscoAppArtworkOperation : CloudLibraryOperation {

	JaliscoAppLibrary* _appLibrary;
	NSArray* _adamIDs;
	BOOL _searchResultRequest;
	NSURLSession* _downloadURLSession;

}

@property (assign,getter=isSearchResultRequest,nonatomic) BOOL searchResultRequest;              //@synthesize searchResultRequest=_searchResultRequest - In the implementation block
+(id)cachedBitmapDataForBundleIdentifier:(id)arg1 ;
+(id)pngDataFromCachedBitmap:(id)arg1 scale:(double)arg2 ;
-(id)initWithJaliscoAppLibrary:(id)arg1 ;
-(void)setSpecificAdamIDs:(id)arg1 ;
-(void)setSearchResultRequest:(BOOL)arg1 ;
-(BOOL)isSearchResultRequest;
-(void)downloadEntry:(id)arg1 cache:(id)arg2 ;
-(id)description;
-(void)main;
@end
