/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLDaemonJob.h>

@class NSString, NSArray;

@interface PLUserActivityDaemonJob : PLDaemonJob {

	long long _actionType;
	NSString* _albumUUID;
	NSArray* _assetUUIDs;
	long long _cloudFeedContent;

}

@property (assign) long long actionType;                              //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,copy) NSString * albumUUID;                      //@synthesize albumUUID=_albumUUID - In the implementation block
@property (nonatomic,retain) NSArray * assetUUIDs;                    //@synthesize assetUUIDs=_assetUUIDs - In the implementation block
@property (assign,nonatomic) long long cloudFeedContent;              //@synthesize cloudFeedContent=_cloudFeedContent - In the implementation block
+(void)userDidDeleteSharedAlbum:(id)arg1 ;
+(void)userDidDeleteSharedAssets:(id)arg1 ;
+(void)userDidNavigateIntoImagePickerSharedAlbum:(id)arg1 ;
+(void)userDidNavigateAwayFromAllSharedAlbums;
+(void)userDidReadCommentOnSharedAsset:(id)arg1 ;
+(void)userDidLeavePhotosApplication;
+(void)userDidNavigateIntoSharedAlbum:(id)arg1 ;
+(void)userDidNavigateAwayFromSharedAlbum:(id)arg1 ;
+(void)userDidViewCloudFeedContent:(long long)arg1 ;
-(void)dealloc;
-(void)run;
-(void)setActionType:(long long)arg1 ;
-(void)setAlbumUUID:(NSString *)arg1 ;
-(void)encodeToXPCObject:(id)arg1 ;
-(id)initFromXPCObject:(id)arg1 connection:(id)arg2 ;
-(void)runDaemonSide;
-(long long)daemonOperation;
-(void)setCloudFeedContent:(long long)arg1 ;
-(long long)cloudFeedContent;
-(long long)actionType;
-(NSString *)albumUUID;
-(NSArray *)assetUUIDs;
-(void)setAssetUUIDs:(NSArray *)arg1 ;
@end

