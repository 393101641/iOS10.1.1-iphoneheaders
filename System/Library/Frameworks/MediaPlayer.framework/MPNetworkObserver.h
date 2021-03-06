/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface MPNetworkObserver : NSObject {

	int _musicCellularNetworkingAllowedNotifyToken;
	long long _networkUsageCount;
	NSObject*<OS_dispatch_queue> _networkUsageQueue;
	BOOL _isMusicCellularDownloadingAllowed;

}

@property (nonatomic,readonly) BOOL isUsingNetwork; 
@property (nonatomic,readonly) BOOL isMusicCellularStreamingAllowed; 
@property (nonatomic,readonly) BOOL isMusicCellularDownloadingAllowed;              //@synthesize isMusicCellularDownloadingAllowed=_isMusicCellularDownloadingAllowed - In the implementation block
@property (nonatomic,readonly) BOOL isStoreCellularNetworkingAllowed; 
+(id)sharedNetworkObserver;
-(id)init;
-(void)dealloc;
-(id)_init;
-(BOOL)isMusicCellularStreamingAllowed;
-(BOOL)isStoreCellularNetworkingAllowed;
-(void)_cellularNetworkAllowedDidChangeNotification:(id)arg1 ;
-(void)beginUsingNetwork;
-(void)endUsingNetwork;
-(BOOL)isMusicCellularDownloadsAllowed;
-(BOOL)isUsingNetwork;
-(BOOL)isMusicCellularDownloadingAllowed;
@end

