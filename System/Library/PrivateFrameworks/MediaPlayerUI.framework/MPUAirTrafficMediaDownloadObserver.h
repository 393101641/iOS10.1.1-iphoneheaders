/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:16 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayerUI/MPUMediaDownloadObserver.h>

@class NSString;

@interface MPUAirTrafficMediaDownloadObserver : MPUMediaDownloadObserver {

	NSString* _assetIdentifier;
	double _lastDownloadProgress;

}
+(void)initialize;
+(void)registerObserver:(id)arg1 forAssetID:(id)arg2 ;
+(void)unregisterObserver:(id)arg1 forAssetID:(id)arg2 ;
+(void)connection:(id)arg1 updatedProgress:(id)arg2 ;
-(void)dealloc;
-(BOOL)isPurchasing;
-(double)downloadProgress;
-(void)_onQueue_invalidate;
-(id)initWithAssetIdentifier:(id)arg1 ;
@end
