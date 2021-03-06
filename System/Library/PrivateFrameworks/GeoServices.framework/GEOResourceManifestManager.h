/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOResourceManifestServerProxyDelegate.h>

@protocol GEOResourceManifestServerProxy, OS_dispatch_source;
@class NSHashTable, GEOActiveTileGroup, NSLock, NSDictionary, NSSet, NSMutableArray, GEOLocalizationRegionsInfo, GEOResourceManifestConfiguration, NSObject, NSString;

@interface GEOResourceManifestManager : NSObject <GEOResourceManifestServerProxyDelegate> {

	id<GEOResourceManifestServerProxy> _serverProxy;
	NSHashTable* _serverProxyObservers;
	GEOActiveTileGroup* _activeTileGroup;
	NSLock* _activeTileGroupLock;
	NSDictionary* _resourceNamesToPaths;
	NSSet* _allResourceNames;
	NSSet* _allRegionalResourceNames;
	BOOL _needsToLoadTileGroupFromDisk;
	NSMutableArray* _tileGroupObservers;
	NSLock* _tileGroupObserversLock;
	NSLock* _closedCountLock;
	long long _closedCount;
	BOOL _constantlyChangeTileGroup;
	GEOLocalizationRegionsInfo* _localizationRegionsInfo;
	NSMutableArray* _networkActivityHandlers;
	BOOL _isUpdatingManifest;
	BOOL _isLoadingResources;
	NSLock* _resourceNamesToPathsLock;
	GEOResourceManifestConfiguration* _configuration;
	NSObject*<OS_dispatch_source> _cachedResourceInfoPurgeTimer;

}

@property (nonatomic,readonly) id<GEOResourceManifestServerProxy> serverProxy;              //@synthesize serverProxy=_serverProxy - In the implementation block
@property (nonatomic,readonly) BOOL hasActiveTileGroup; 
@property (nonatomic,readonly) GEOActiveTileGroup * activeTileGroup; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setServerProxyClass:(Class)arg1 ;
+(void)useLocalProxy;
+(void)useRemoteProxy;
+(void)disableServerConnection;
+(void)setHiDPI:(BOOL)arg1 ;
+(id)modernManager;
+(id)modernManagerForTileGroupIdentifier:(unsigned)arg1 ;
+(id)modernManagerForConfiguration:(id)arg1 ;
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(id)initWithConfiguration:(id)arg1 ;
-(void)_localeChanged:(id)arg1 ;
-(id)authToken;
-(id)allResourceNames;
-(oneway void)serverProxyWillStartUpdatingResourceManifest:(id)arg1 ;
-(oneway void)serverProxyDidStopUpdatingResourceManifest:(id)arg1 ;
-(oneway void)serverProxyWillStartLoadingResources:(id)arg1 ;
-(oneway void)serverProxyDidStopLoadingResources:(id)arg1 ;
-(oneway void)serverProxy:(id)arg1 didChangeActiveTileGroup:(id)arg2 finishedCallback:(/*^block*/id)arg3 ;
-(void)serverProxyNeedsWiFiResourceActivity:(id)arg1 ;
-(id)_loadActiveTileGroupIfNecessary:(BOOL)arg1 ;
-(GEOActiveTileGroup *)activeTileGroup;
-(void)openServerConnection;
-(void)closeServerConnection;
-(void)addServerProxyObserver:(id)arg1 ;
-(void)removeServerProxyObserver:(id)arg1 ;
-(void)addTileGroupObserver:(id)arg1 queue:(id)arg2 ;
-(void)removeTileGroupObserver:(id)arg1 ;
-(int)mapMatchingTileSetStyle;
-(unsigned)mapMatchingZoomLevel;
-(BOOL)hasActiveTileGroup;
-(id)_activeTileSetForKey:(const GEOTileKey*)arg1 ;
-(id)baseURLStringForTileKey:(const GEOTileKey*)arg1 ;
-(id)localizationURLStringIfNecessaryForTileKey:(const GEOTileKey*)arg1 overrideLocale:(id)arg2 ;
-(unsigned)versionForTileKey:(const GEOTileKey*)arg1 ;
-(double)timeToLiveForTileKey:(const GEOTileKey*)arg1 ;
-(BOOL)isAvailableForTileKey:(const GEOTileKey*)arg1 ;
-(id)languageForTileKey:(const GEOTileKey*)arg1 ;
-(id)languageForTileKey:(const GEOTileKey*)arg1 overrideLocale:(id)arg2 ;
-(BOOL)isDisputedBordersWhitelistedForTileKey:(const GEOTileKey*)arg1 country:(id)arg2 region:(id)arg3 ;
-(id)disputedBordersQueryStringForTileKey:(const GEOTileKey*)arg1 country:(id)arg2 region:(id)arg3 ;
-(BOOL)supportsTileStyle:(int)arg1 size:(int)arg2 scale:(int)arg3 ;
-(void)_scheduleCachedResourceInfoPurgeTimer;
-(id)allRegionalResourceNames;
-(id)allResourcePaths;
-(void)_buildResourceNamesToPaths;
-(id)pathForResourceWithName:(id)arg1 ;
-(void)addNetworkActivityHandler:(/*^block*/id)arg1 ;
-(void)setConstantlyChangeTileGroup:(BOOL)arg1 ;
-(void)fakeTileGroupChange;
-(void)setManifestToken:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateManifestIfNecessary:(/*^block*/id)arg1 ;
-(void)updateManifest:(/*^block*/id)arg1 ;
-(void)activateResourceScale:(int)arg1 ;
-(void)activateResourceScenario:(int)arg1 ;
-(void)deactivateResourceScale:(int)arg1 ;
-(void)deactivateResourceScenario:(int)arg1 ;
-(id)detailedDescription;
-(id)detailedDescriptionDictionaryRepresentation;
-(BOOL)hasResourceManifest;
-(void)getResourceManifestWithHandler:(/*^block*/id)arg1 ;
-(unsigned)activeTileGroupIdentifier;
-(void)setActiveTileGroupIdentifier:(unsigned)arg1 ;
-(void)resetActiveTileGroup;
-(void)forceUpdate;
-(void)startObservingDevResources;
-(void)stopObservingDevResources;
-(void)_notifyObserversOfResourcesChange;
-(void)devResourcesFolderDidChange;
-(id<GEOResourceManifestServerProxy>)serverProxy;
@end

