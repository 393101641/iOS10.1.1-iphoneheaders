/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/iBooks.app/Frameworks/IMCommonCore.framework/IMCommonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCommonCore/IMCommonCore-Structs.h>
#import <IMCommonCore/BKSeriesCoverSource.h>
@class NSString;


@protocol BKSeriesCoverSource <NSObject>
@property (nonatomic,readonly) id identifier; 
@property (nonatomic,readonly) NSString * bookId; 
@required
-(NSString *)bookId;
-(id)coverImagesFlags:(int)arg1;
-(id)addSeriesImageObserverWithHandler:(/*^block*/id)arg1 queue:(id)arg2 notifyImmediately:(BOOL)arg3;
-(void)removeSeriesImageObserver:(id)arg1;
-(id)coverImages;
-(id)coverSources;
-(id)coverSourcesFlags:(int)arg1;
-(void)updateCoverSourcesFromInfos:(id)arg1;
-(BOOL)coverImagesAllBlankOrAllNonBlank;
-(id)identifier;
-(void)prepareForReuse;

@end


@protocol OS_dispatch_queue, BKSeriesCoverResolving;
@class NSString, NSObject, NSMutableArray, NSArray, NSMutableDictionary, BCCoverCache;

@interface BKSeriesCoverSource : NSObject <BKSeriesCoverSource> {

	os_unfair_lock_s _spinlock;
	unsigned long long _usageCount;
	NSObject*<OS_dispatch_queue> _sync;
	NSMutableArray* _observers;
	NSArray* _childSources;
	NSMutableDictionary* _childSourcesMap;
	NSMutableDictionary* _childObserversMap;
	BCCoverCache* _cache;
	CGSize _size;
	int _options;
	os_unfair_lock_s _stateSpinlock;
	BOOL _stateAllCoversBlank;
	BOOL _stateAllCoversNonBlank;
	BOOL _stateSomeTimedOut;
	BOOL _coverSourcesPending;
	id<BKSeriesCoverResolving> _resolver;
	NSString* _bookId;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id identifier; 
@property (nonatomic,readonly) NSString * bookId;                   //@synthesize bookId=_bookId - In the implementation block
-(NSString *)bookId;
-(void)_waitForCondition:(/*^block*/id)arg1 ;
-(void)decrementUsageCount;
-(id)initWithCache:(id)arg1 info:(id)arg2 resolver:(id)arg3 size:(CGSize)arg4 options:(int)arg5 ;
-(void)refreshCoverSources;
-(void)_setChildSources:(id)arg1 ;
-(void)_notifyObserversAsync;
-(void)_updateCoverSourcesFromInfos:(id)arg1 ;
-(id)_coverSourcesForInfos:(id)arg1 ;
-(void)_setChildSources:(id)arg1 forceNotify:(BOOL)arg2 ;
-(BOOL)_hasCoverSourcesOrPending;
-(id)_coverImagesCondition:(/*^block*/id)arg1 ;
-(id)coverImagesFlags:(int)arg1 ;
-(void)_waitForSourcesCondition:(/*^block*/id)arg1 ;
-(id)addSeriesImageObserverWithHandler:(/*^block*/id)arg1 queue:(id)arg2 notifyImmediately:(BOOL)arg3 ;
-(void)removeSeriesImageObserver:(id)arg1 ;
-(id)coverImages;
-(id)coverSources;
-(id)coverSourcesFlags:(int)arg1 ;
-(void)updateCoverSourcesFromInfos:(id)arg1 ;
-(BOOL)coverImagesAllBlankOrAllNonBlank;
-(void)clearChildSources;
-(void)dealloc;
-(id)identifier;
-(void)prepareForReuse;
-(void)incrementUsageCount;
-(unsigned long long)usageCount;
@end

