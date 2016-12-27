/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSData, NSURL;

@interface DownloadArtworkCacheOperation : ISOperation {

	NSData* _artworkData;
	long long _downloadID;
	BOOL _isStoreDownload;
	NSURL* _thumbnailURL;

}

@property (readonly) NSData * artworkData; 
-(void)_setArtworkData:(id)arg1 ;
-(id)initWithDownloadIdentifier:(long long)arg1 thumbnailURL:(id)arg2 ;
-(id)initWithStoreDownloadIdentifier:(long long)arg1 thumbnailURL:(id)arg2 ;
-(void)run;
-(NSData *)artworkData;
@end
