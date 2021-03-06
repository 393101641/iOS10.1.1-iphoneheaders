/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:29 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, WBSSiteMetadataImageCacheDelegate;
#import <SafariShared/SafariShared-Structs.h>
@class NSObject, NSMutableDictionary, NSCountedSet, NSMutableSet, NSURL;

@interface WBSSiteMetadataImageCache : NSObject {

	NSObject*<OS_dispatch_queue> _diskAccessQueue;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSMutableDictionary* _imagesForKeyStrings;
	NSCountedSet* _imageRetainCounts;
	NSCountedSet* _negativeImageRetainCounts;
	NSMutableSet* _pendingKeyStringRequests;
	NSMutableSet* _missingImageKeyStrings;
	NSMutableDictionary* _cacheSettings;
	unique_ptr<SafariShared::CoalescedAsynchronousWriter, std::__1::default_delete<SafariShared::CoalescedAsynchronousWriter> >* _cacheSettingsWriter;
	BOOL _terminating;
	NSURL* _imageDirectoryURL;
	long long _imageType;
	id<WBSSiteMetadataImageCacheDelegate> _delegate;

}

@property (nonatomic,readonly) NSURL * imageDirectoryURL;                                        //@synthesize imageDirectoryURL=_imageDirectoryURL - In the implementation block
@property (nonatomic,readonly) long long imageType;                                              //@synthesize imageType=_imageType - In the implementation block
@property (getter=isTerminating,nonatomic,readonly) BOOL terminating;                            //@synthesize terminating=_terminating - In the implementation block
@property (assign,nonatomic,__weak) id<WBSSiteMetadataImageCacheDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)setDelegate:(id<WBSSiteMetadataImageCacheDelegate>)arg1 ;
-(id<WBSSiteMetadataImageCacheDelegate>)delegate;
-(void)removeAllImages;
-(long long)imageType;
-(void)savePendingChangesBeforeTermination;
-(id)initWithImageDirectoryURL:(id)arg1 imageType:(long long)arg2 ;
-(id)_internalQueueName;
-(void)_notifyDidFinishLoadingSettings;
-(void)_internalQueueDispatchBarrierAsync:(/*^block*/id)arg1 ;
-(void)_internalSetUpImageCache;
-(id)_diskAccessQueueName;
-(id)_cacheSettingsFileURL;
-(void)_internalQueueDispatchSync:(/*^block*/id)arg1 ;
-(void)_dispatchDiskAccessBlock:(/*^block*/id)arg1 ;
-(void)_internalPurgeUnneededImages;
-(void)_internalQueueDispatchAsync:(/*^block*/id)arg1 ;
-(id)_fileNameForKeyString:(id)arg1 ;
-(void)_removeImagesPassingTest:(/*^block*/id)arg1 ;
-(void)_emptyCacheDirectory;
-(void)_didLoadImage:(id)arg1 forKeyString:(id)arg2 ;
-(id)_loadImageFromDiskForKeyString:(id)arg1 ;
-(id)_fileLocationForKeyString:(id)arg1 ;
-(long long)_internalImageStateForKeyString:(id)arg1 ;
-(void)_internalSetImageState:(long long)arg1 forKeyString:(id)arg2 ;
-(id)_internalImageForKeyString:(id)arg1 ;
-(void)_requestImageForKeyString:(id)arg1 ;
-(void)_internalSaveImageToDisk:(id)arg1 forKeyString:(id)arg2 ;
-(void)_internalRemoveAllImages;
-(void)_internalRetainImageForKeyString:(id)arg1 ;
-(void)_internalRemoveImagesFromCacheForKeyStrings:(id)arg1 ;
-(void)_internalReleaseImageForKeyString:(id)arg1 ;
-(id)_internalSettingForKey:(id)arg1 ;
-(void)_internalSetSetting:(id)arg1 forKey:(id)arg2 ;
-(void)_saveCacheSettingsSoon;
-(void)setUpImageCache;
-(void)purgeUnneededImages;
-(void)emptyCache;
-(id)imageForKeyString:(id)arg1 ;
-(void)saveImageToDisk:(id)arg1 forKeyString:(id)arg2 ;
-(long long)imageStateForKeyString:(id)arg1 ;
-(void)setImageState:(long long)arg1 forKeyString:(id)arg2 ;
-(void)retainImageWithKeyStringProvider:(/*^block*/id)arg1 ;
-(void)retainImageForKeyString:(id)arg1 ;
-(void)retainImagesForKeyStrings:(id)arg1 ;
-(void)releaseImageWithKeyStringProvider:(/*^block*/id)arg1 ;
-(void)releaseImageForKeyString:(id)arg1 ;
-(void)releaseImagesForKeyStrings:(id)arg1 ;
-(BOOL)isImageRetainedForKeyString:(id)arg1 ;
-(void)removeImagesFromCacheForKeyStrings:(id)arg1 ;
-(id)settingForKey:(id)arg1 ;
-(void)setSetting:(id)arg1 forKey:(id)arg2 ;
-(NSURL *)imageDirectoryURL;
-(BOOL)isTerminating;
@end

