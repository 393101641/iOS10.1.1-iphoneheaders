/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:04 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSMutableDictionary, NSString, NSSet, NSArray, BRCSyncOperationThrottleParams;

@interface BRCUserDefaults : NSObject {

	BRCUserDefaults* _globalUserDefault;
	NSDictionary* _serverContainerConfigurationDict;
	NSMutableDictionary* _cache;
	NSString* _clientZoneIdentifier;

}

@property (nonatomic,readonly) unsigned long long maxXattrBlobSize; 
@property (nonatomic,readonly) BOOL shouldFetchAllChanges; 
@property (nonatomic,readonly) unsigned maxRecordCountInFetchRecordsOperation; 
@property (nonatomic,readonly) unsigned maxRecordCountInModifyRecordsOperation; 
@property (nonatomic,readonly) float modifyRecordsCountMultiplicativeDecrease; 
@property (nonatomic,readonly) float modifyRecordsCountAdditiveIncreaseFraction; 
@property (nonatomic,readonly) unsigned maxRecordCountInClientZoneModifyRecordsOperation; 
@property (nonatomic,readonly) unsigned maxRecordCountInQuerySharedRecordsOperation; 
@property (nonatomic,readonly) unsigned maxRelativePathDepth; 
@property (nonatomic,readonly) unsigned maxSyncPathDepth; 
@property (nonatomic,readonly) unsigned treeEnumeratorBatchSize; 
@property (nonatomic,readonly) NSSet * packageExtensions; 
@property (nonatomic,readonly) NSSet * blacklistedPackageExtensions; 
@property (nonatomic,readonly) NSSet * shareableExtensions; 
@property (nonatomic,readonly) NSSet * nonEvictableExtensions; 
@property (nonatomic,readonly) NSSet * nonAutoEvictableExtensions; 
@property (nonatomic,readonly) NSSet * nonAutoEvictableUTIs; 
@property (nonatomic,readonly) NSSet * autoEvictableUTIs; 
@property (nonatomic,readonly) unsigned short stageFileUmask; 
@property (nonatomic,readonly) unsigned short stageDirectoryUmask; 
@property (nonatomic,readonly) unsigned short stageInPackageDirectoryUmask; 
@property (nonatomic,readonly) unsigned short stageInPackageFileUmask; 
@property (nonatomic,readonly) NSObject*<OS_xpc_object> configurationUpdateXPCActivity; 
@property (nonatomic,readonly) NSObject*<OS_xpc_object> forcedSyncXPCActivity; 
@property (nonatomic,readonly) NSArray * syncThrottles; 
@property (nonatomic,readonly) NSDictionary * appLibraryScanThrottleParams; 
@property (nonatomic,readonly) NSDictionary * lostItemThrottleParams; 
@property (nonatomic,readonly) NSDictionary * applyThrottleParams; 
@property (nonatomic,readonly) NSDictionary * downloadThrottleParams; 
@property (nonatomic,readonly) NSDictionary * uploadThrottleParams; 
@property (nonatomic,readonly) double quotaFetchPacerDelay; 
@property (nonatomic,readonly) double appsFetchPacerDelay; 
@property (nonatomic,readonly) unsigned long long availableQuotaComfortSize; 
@property (nonatomic,readonly) BRCSyncOperationThrottleParams * syncDownThrottle; 
@property (nonatomic,readonly) BRCSyncOperationThrottleParams * syncUpThrottle; 
@property (nonatomic,readonly) NSDictionary * syncClientZoneThrottleParams; 
@property (nonatomic,readonly) NSDictionary * syncClientZoneErrorThrottleParams; 
@property (nonatomic,readonly) float syncUpMinimalBudget; 
@property (nonatomic,readonly) float syncUpDailyBudget; 
@property (nonatomic,readonly) float syncUpHourlyBudget; 
@property (nonatomic,readonly) float syncUpMinutelyBudget; 
@property (nonatomic,readonly) float syncUpInitialItemCost; 
@property (nonatomic,readonly) float syncUpStructureCreateCost; 
@property (nonatomic,readonly) float syncUpStructureEditCost; 
@property (nonatomic,readonly) float syncUpStructureDeleteCost; 
@property (nonatomic,readonly) float syncUpDataCreateCost; 
@property (nonatomic,readonly) float syncUpDataEditCost; 
@property (nonatomic,readonly) float syncUpDataDeleteCost; 
@property (nonatomic,readonly) float syncUpDocumentCreateCost; 
@property (nonatomic,readonly) float syncUpDocumentEditCost; 
@property (nonatomic,readonly) float syncUpDocumentDeleteCost; 
@property (nonatomic,readonly) unsigned long long sharedDbSyncDownCoalesceNanoseconds; 
@property (nonatomic,readonly) NSDictionary * operationFailureThrottleParams; 
@property (nonatomic,readonly) NSDictionary * appLibraryResetThrottleParams; 
@property (nonatomic,readonly) NSDictionary * sharedAppLibraryResetThrottleParams; 
@property (nonatomic,readonly) NSDictionary * appLibraryAliasRemovalThrottleParams; 
@property (nonatomic,readonly) BOOL dbTraced; 
@property (nonatomic,readonly) BOOL dbProfiled; 
@property (nonatomic,readonly) int dbBatchSize; 
@property (nonatomic,readonly) double dbBatchDelay; 
@property (nonatomic,readonly) BOOL allowReadOnlyDBInIPC; 
@property (nonatomic,readonly) BOOL skipServerSideThrottling; 
@property (nonatomic,readonly) BOOL shouldAppLibraryBeGreedy; 
@property (nonatomic,readonly) unsigned long long maxTotalFilesCount; 
@property (nonatomic,readonly) unsigned long long maxNumberOfFilesInAFolder; 
@property (nonatomic,readonly) long long uploadMaxFileSize; 
@property (nonatomic,readonly) long long uploadMaxInPkgFileSize; 
@property (nonatomic,readonly) unsigned long long uploadBatchRecordsCount; 
@property (nonatomic,readonly) unsigned long long uploadBatchCount; 
@property (nonatomic,readonly) unsigned long long downloadBatchRecordsCount; 
@property (nonatomic,readonly) unsigned long long downloadBatchCount; 
@property (nonatomic,readonly) unsigned long long downloadWillRetryProgressMaxCount; 
@property (nonatomic,readonly) unsigned long long zoneHealthSyncDownBatchRecordsCount; 
@property (nonatomic,readonly) unsigned long long sharedDBSyncDownBatchRecordsCount; 
@property (nonatomic,readonly) double systemReachabilityLatency; 
@property (nonatomic,readonly) double systemPowerLatency; 
@property (nonatomic,readonly) double systemLowDiskLatency; 
@property (nonatomic,readonly) double writerIOsCancelDelay; 
@property (nonatomic,readonly) double readerIOsCancelDelay; 
@property (nonatomic,readonly) int readerMaxConcurrentIOs; 
@property (nonatomic,readonly) int writerMaxConcurrentIOs; 
@property (nonatomic,readonly) NSDictionary * readerThrottleParams; 
@property (nonatomic,readonly) int writerApplyBatchSize; 
@property (nonatomic,readonly) int readerScanBatchSize; 
@property (nonatomic,readonly) double readerPackageProcessingDelay; 
@property (nonatomic,readonly) double readerLostItemBackoff; 
@property (nonatomic,readonly) double fseventsLatency; 
@property (nonatomic,readonly) double fseventsResetBackoff; 
@property (nonatomic,readonly) int transferQueueMinBatchSize; 
@property (nonatomic,readonly) int transferQueueMinConcurrentOperations; 
@property (nonatomic,readonly) int transferQueueMaxConcurrentOperations; 
@property (nonatomic,readonly) double transferQueueTransferBudget; 
@property (nonatomic,readonly) BOOL sessionZombiesEnabled; 
@property (nonatomic,readonly) BOOL nsurlsessiondEnabled; 
@property (nonatomic,readonly) NSObject*<OS_xpc_object> stageGCXPCActivity; 
@property (nonatomic,readonly) NSObject*<OS_xpc_object> cacheDeletePushXPCActivity; 
@property (nonatomic,readonly) NSString * serverConfigurationURL; 
@property (nonatomic,readonly) unsigned publishURLTimeout; 
@property (nonatomic,readonly) long long minFileSizeForGraveyard; 
@property (nonatomic,readonly) long long minAutomaticallyEvictableFilesize; 
@property (nonatomic,readonly) unsigned logoutTimeout; 
@property (nonatomic,readonly) double foregroundGracePeriod; 
@property (nonatomic,readonly) double forceForegroundGracePeriod; 
@property (nonatomic,readonly) BOOL forceBatchFailureWhenReceivingAssetTokenExpiration; 
@property (nonatomic,readonly) BOOL shouldFixupBundleBitOnPackages; 
@property (nonatomic,readonly) NSSet * extensionsSkippingBundleBitFixup; 
@property (nonatomic,readonly) double accessTimeDeltaInLowUrgency; 
@property (nonatomic,readonly) double accessTimeDeltaInMedUrgency; 
@property (nonatomic,readonly) double accessTimeDeltaInHighUrgency; 
@property (nonatomic,readonly) double accessTimeDeltaInVeryHighUrgency; 
@property (nonatomic,readonly) double defaultTimeDeltaForEviction; 
@property (nonatomic,readonly) double graveyardAgeDeltaInLowUrgency; 
@property (nonatomic,readonly) double graveyardAgeDeltaInMedUrgency; 
@property (nonatomic,readonly) double cacheDeleteRecomputeInterval; 
@property (nonatomic,readonly) double purgePacerInterval; 
@property (nonatomic,readonly) long long dbReclaimableSpaceThreshold; 
@property (nonatomic,readonly) double maximumDocumentAgeToBeGreedy; 
@property (nonatomic,readonly) unsigned long long statementCacheMaxCountForServerTruth; 
@property (nonatomic,readonly) unsigned long long statementCacheMaxCountForClientTruth; 
@property (nonatomic,readonly) unsigned long long copyShareIDsBatchSize; 
@property (nonatomic,readonly) unsigned long long aliasDeletionBatchSize; 
@property (nonatomic,readonly) unsigned long long minimumDiskSpaceRequiredToBeFunctional; 
@property (nonatomic,readonly) unsigned long long minimumDiskSpaceRequiredToDownload; 
@property (nonatomic,readonly) unsigned long long minimumDiskSpaceRequiredToDownloadUserInitiated; 
@property (nonatomic,readonly) unsigned long long minimumDiskSpaceRequiredToBeGreedy; 
@property (nonatomic,readonly) unsigned long long diskSpaceRequiredToReturnToGreedyState; 
@property (nonatomic,readonly) float relativeDiskSpaceRequiredToReturnToGreedyState; 
@property (nonatomic,readonly) double diskSpaceCheckInterval; 
@property (nonatomic,readonly) double activeDownloadSizeRefreshInterval; 
@property (nonatomic,readonly) unsigned long long maximumAccountSizeToBeAlwaysGreedy; 
@property (nonatomic,readonly) BOOL shouldDisplayUploadNotification; 
@property (nonatomic,readonly) BOOL spotlightIndexingEnabled; 
@property (nonatomic,readonly) double spotlightIndexerPacerInterval; 
@property (nonatomic,readonly) unsigned long long spotlightIndexerBatchSize; 
@property (nonatomic,readonly) unsigned long long spotlightIndexerMaxHierarchyDepth; 
@property (nonatomic,readonly) NSDictionary * spotlightIndexerFailureThrottleParams; 
@property (nonatomic,readonly) double shortcutServicePacerInterval; 
@property (nonatomic,readonly) unsigned long long maxRecentDocumentCount; 
@property (nonatomic,readonly) NSDictionary * migrationThrottleParams; 
@property (nonatomic,readonly) double intervalToWaitBeforeShowingAdditionalDescription; 
@property (nonatomic,readonly) long long minimalSizeToShowAdditionalDescription; 
@property (nonatomic,readonly) double documentAccessHighPriorityInterval; 
@property (nonatomic,readonly) double packageExtensionPlistWriteInterval; 
@property (nonatomic,readonly) long long minFileSizeForThumbnailTransfer; 
@property (nonatomic,readonly) unsigned thumbnailTransferQueueWidth; 
@property (nonatomic,readonly) NSSet * blacklistedThumbnailExtensions; 
@property (nonatomic,readonly) unsigned long long notifOverflowLimit; 
@property (nonatomic,readonly) unsigned long long notifGatherUpTo; 
@property (nonatomic,readonly) unsigned long long notifBatchSize; 
@property (nonatomic,readonly) double periodicSyncTimeInterval; 
@property (nonatomic,readonly) unsigned long long zoneHealthReportedRecordNamesCount; 
@property (nonatomic,readonly) BOOL onlyTreatCaughtUpAsConsistent; 
@property (nonatomic,readonly) NSSet * blacklistPCSPrep; 
@property (nonatomic,readonly) BOOL shouldPreparePCSMigration; 
@property (nonatomic,readonly) unsigned long long pcsChainingMaxPathDepth; 
@property (nonatomic,readonly) unsigned long long pcsChainingBatchSize; 
@property (nonatomic,readonly) BOOL destroyiWorkShares; 
@property (nonatomic,readonly) unsigned long long readerMarkChildrenLostBatchSize; 
@property (nonatomic,readonly) unsigned long long lostScanDeepScanFirstThreshold; 
@property (nonatomic,readonly) NSSet * excludedFilenamesWorthPreserving; 
@property (nonatomic,readonly) NSSet * excludedExtensionsWorthPreserving; 
@property (nonatomic,readonly) unsigned ignoredQuarantineMask; 
+(void)reset;
+(id)defaultsForAppLibraryName:(id)arg1 ;
+(void)loadCachedServerConfigFromDB:(id)arg1 ;
+(void)setServerConfigurationURL:(id)arg1 whenLoaded:(/*^block*/id)arg2 ;
+(void)saveServerConfigToDB:(id)arg1 ;
+(id)defaultsForAppLibraryIdentifier:(id)arg1 ;
+(id)_userDefaultsManager;
+(id)defaultsForMetadataContainer;
-(BOOL)dbTraced;
-(BOOL)nsurlsessiondEnabled;
-(unsigned long long)sharedDBSyncDownBatchRecordsCount;
-(unsigned long long)statementCacheMaxCountForServerTruth;
-(unsigned long long)statementCacheMaxCountForClientTruth;
-(BOOL)dbProfiled;
-(double)dbBatchDelay;
-(int)dbBatchSize;
-(long long)minAutomaticallyEvictableFilesize;
-(NSDictionary *)migrationThrottleParams;
-(unsigned)logoutTimeout;
-(unsigned long long)zoneHealthSyncDownBatchRecordsCount;
-(NSSet *)shareableExtensions;
-(long long)minFileSizeForThumbnailTransfer;
-(unsigned)maxRelativePathDepth;
-(BOOL)shouldFixupBundleBitOnPackages;
-(NSSet *)extensionsSkippingBundleBitFixup;
-(unsigned long long)maxXattrBlobSize;
-(unsigned long long)notifBatchSize;
-(unsigned long long)notifOverflowLimit;
-(unsigned long long)notifGatherUpTo;
-(unsigned long long)minimumDiskSpaceRequiredToBeFunctional;
-(int)writerApplyBatchSize;
-(int)writerMaxConcurrentIOs;
-(BOOL)shouldAppLibraryBeGreedy;
-(unsigned long long)minimumDiskSpaceRequiredToBeGreedy;
-(double)readerIOsCancelDelay;
-(double)writerIOsCancelDelay;
-(unsigned long long)readerMarkChildrenLostBatchSize;
-(unsigned long long)downloadWillRetryProgressMaxCount;
-(unsigned long long)minimumDiskSpaceRequiredToDownload;
-(unsigned long long)minimumDiskSpaceRequiredToDownloadUserInitiated;
-(unsigned long long)aliasDeletionBatchSize;
-(unsigned)maxSyncPathDepth;
-(BRCSyncOperationThrottleParams *)syncUpThrottle;
-(float)syncUpMinimalBudget;
-(NSObject*<OS_xpc_object>)forcedSyncXPCActivity;
-(double)periodicSyncTimeInterval;
-(NSString *)serverConfigurationURL;
-(unsigned long long)sharedDbSyncDownCoalesceNanoseconds;
-(double)defaultTimeDeltaForEviction;
-(NSSet *)nonEvictableExtensions;
-(NSSet *)nonAutoEvictableExtensions;
-(NSSet *)autoEvictableUTIs;
-(NSSet *)nonAutoEvictableUTIs;
-(double)maximumDocumentAgeToBeGreedy;
-(NSSet *)blacklistedThumbnailExtensions;
-(unsigned long long)spotlightIndexerMaxHierarchyDepth;
-(unsigned)maxRecordCountInFetchRecordsOperation;
-(float)syncUpStructureDeleteCost;
-(float)syncUpInitialItemCost;
-(float)syncUpStructureEditCost;
-(float)syncUpStructureCreateCost;
-(float)syncUpDocumentDeleteCost;
-(float)syncUpDataDeleteCost;
-(float)syncUpDocumentEditCost;
-(float)syncUpDataEditCost;
-(float)syncUpDocumentCreateCost;
-(float)syncUpDataCreateCost;
-(float)syncUpDailyBudget;
-(float)syncUpHourlyBudget;
-(float)syncUpMinutelyBudget;
-(BRCSyncOperationThrottleParams *)syncDownThrottle;
-(unsigned)maxRecordCountInModifyRecordsOperation;
-(float)modifyRecordsCountMultiplicativeDecrease;
-(float)modifyRecordsCountAdditiveIncreaseFraction;
-(NSArray *)syncThrottles;
-(BOOL)onlyTreatCaughtUpAsConsistent;
-(double)intervalToWaitBeforeShowingAdditionalDescription;
-(long long)minimalSizeToShowAdditionalDescription;
-(unsigned short)stageInPackageFileUmask;
-(unsigned short)stageInPackageDirectoryUmask;
-(unsigned)maxRecordCountInQuerySharedRecordsOperation;
-(unsigned long long)uploadBatchCount;
-(double)transferQueueTransferBudget;
-(unsigned short)stageDirectoryUmask;
-(unsigned short)stageFileUmask;
-(long long)minFileSizeForGraveyard;
-(double)graveyardAgeDeltaInLowUrgency;
-(double)graveyardAgeDeltaInMedUrgency;
-(NSObject*<OS_xpc_object>)stageGCXPCActivity;
-(NSSet *)blacklistedPackageExtensions;
-(double)packageExtensionPlistWriteInterval;
-(double)spotlightIndexerPacerInterval;
-(NSDictionary *)spotlightIndexerFailureThrottleParams;
-(unsigned long long)spotlightIndexerBatchSize;
-(unsigned)thumbnailTransferQueueWidth;
-(int)transferQueueMinBatchSize;
-(double)quotaFetchPacerDelay;
-(long long)uploadMaxInPkgFileSize;
-(long long)uploadMaxFileSize;
-(int)readerScanBatchSize;
-(BOOL)shouldPreparePCSMigration;
-(NSSet *)blacklistPCSPrep;
-(NSSet *)packageExtensions;
-(NSDictionary *)appLibraryScanThrottleParams;
-(NSDictionary *)appLibraryResetThrottleParams;
-(NSDictionary *)sharedAppLibraryResetThrottleParams;
-(NSDictionary *)appLibraryAliasRemovalThrottleParams;
-(NSDictionary *)lostItemThrottleParams;
-(NSDictionary *)operationFailureThrottleParams;
-(NSDictionary *)syncClientZoneThrottleParams;
-(NSDictionary *)syncClientZoneErrorThrottleParams;
-(BOOL)spotlightIndexingEnabled;
-(double)diskSpaceCheckInterval;
-(BOOL)sessionZombiesEnabled;
-(NSSet *)excludedFilenamesWorthPreserving;
-(NSSet *)excludedExtensionsWorthPreserving;
-(unsigned long long)zoneHealthReportedRecordNamesCount;
-(unsigned)ignoredQuarantineMask;
-(unsigned)treeEnumeratorBatchSize;
-(int)readerMaxConcurrentIOs;
-(double)readerPackageProcessingDelay;
-(unsigned long long)lostScanDeepScanFirstThreshold;
-(double)readerLostItemBackoff;
-(BOOL)allowReadOnlyDBInIPC;
-(unsigned)publishURLTimeout;
-(BOOL)destroyiWorkShares;
-(unsigned long long)copyShareIDsBatchSize;
-(NSDictionary *)readerThrottleParams;
-(NSDictionary *)applyThrottleParams;
-(NSDictionary *)downloadThrottleParams;
-(NSDictionary *)uploadThrottleParams;
-(unsigned long long)uploadBatchRecordsCount;
-(unsigned long long)downloadBatchCount;
-(unsigned long long)downloadBatchRecordsCount;
-(double)foregroundGracePeriod;
-(id)initAsGlobalWithServerConfiguration:(id)arg1 ;
-(id)initWithServerConfiguration:(id)arg1 globalUserDefaults:(id)arg2 clientZoneIdentifier:(id)arg3 ;
-(NSObject*<OS_xpc_object>)configurationUpdateXPCActivity;
-(id)objectForKey:(id)arg1 inheritFromGlobal:(BOOL)arg2 validateWithBlock:(/*^block*/id)arg3 ;
-(float)floatForKey:(id)arg1 inheritFromGlobal:(BOOL)arg2 min:(float)arg3 max:(float)arg4 byDefault:(float)arg5 ;
-(BOOL)boolForKey:(id)arg1 inheritFromGlobal:(BOOL)arg2 byDefault:(BOOL)arg3 ;
-(unsigned long long)unsignedLongLongForKey:(id)arg1 min:(unsigned long long)arg2 max:(unsigned long long)arg3 byDefault:(unsigned long long)arg4 ;
-(BOOL)boolForKey:(id)arg1 byDefault:(BOOL)arg2 ;
-(unsigned)unsignedIntForKey:(id)arg1 min:(unsigned)arg2 max:(unsigned)arg3 byDefault:(unsigned)arg4 ;
-(float)floatForKey:(id)arg1 min:(float)arg2 max:(float)arg3 byDefault:(float)arg4 ;
-(id)_extensionSetForKey:(id)arg1 startingWithExtensions:(id)arg2 ;
-(id)_UTISetFor:(id)arg1 startingWithExtensions:(id)arg2 ;
-(int)intForKey:(id)arg1 min:(int)arg2 max:(int)arg3 byDefault:(int)arg4 ;
-(unsigned short)_umaskForKey:(id)arg1 ;
-(id)xpcActivityDictionaryForKey:(id)arg1 byDefault:(id)arg2 ;
-(double)doubleForKey:(id)arg1 min:(double)arg2 max:(double)arg3 byDefault:(double)arg4 ;
-(float)_defaultSyncUpDailyBudget;
-(float)_defaultSyncUpHourlyBudget;
-(float)_defaultSyncUpMinutelyBudget;
-(BOOL)shouldFetchAllChanges;
-(unsigned)maxRecordCountInClientZoneModifyRecordsOperation;
-(unsigned long long)availableQuotaComfortSize;
-(double)appsFetchPacerDelay;
-(BOOL)skipServerSideThrottling;
-(unsigned long long)maxTotalFilesCount;
-(unsigned long long)maxNumberOfFilesInAFolder;
-(double)systemReachabilityLatency;
-(double)systemPowerLatency;
-(double)systemLowDiskLatency;
-(double)fseventsLatency;
-(double)fseventsResetBackoff;
-(int)transferQueueMinConcurrentOperations;
-(int)transferQueueMaxConcurrentOperations;
-(NSObject*<OS_xpc_object>)cacheDeletePushXPCActivity;
-(double)forceForegroundGracePeriod;
-(BOOL)forceBatchFailureWhenReceivingAssetTokenExpiration;
-(double)accessTimeDeltaInLowUrgency;
-(double)accessTimeDeltaInMedUrgency;
-(double)accessTimeDeltaInHighUrgency;
-(double)accessTimeDeltaInVeryHighUrgency;
-(double)purgePacerInterval;
-(long long)dbReclaimableSpaceThreshold;
-(double)cacheDeleteRecomputeInterval;
-(unsigned long long)diskSpaceRequiredToReturnToGreedyState;
-(float)relativeDiskSpaceRequiredToReturnToGreedyState;
-(unsigned long long)maximumAccountSizeToBeAlwaysGreedy;
-(double)activeDownloadSizeRefreshInterval;
-(BOOL)shouldDisplayUploadNotification;
-(double)shortcutServicePacerInterval;
-(unsigned long long)maxRecentDocumentCount;
-(double)documentAccessHighPriorityInterval;
-(unsigned long long)pcsChainingMaxPathDepth;
-(unsigned long long)pcsChainingBatchSize;
@end

