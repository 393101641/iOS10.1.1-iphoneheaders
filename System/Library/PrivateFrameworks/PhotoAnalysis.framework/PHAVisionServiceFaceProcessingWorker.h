/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoAnalysis/PHAVisionServiceWorker.h>
#import <libobjc.A.dylib/PVNotificationListener.h>
#import <libobjc.A.dylib/PVCVMLIntegrating.h>
#import <libobjc.A.dylib/PLPhotoAnalysisVisionServiceFaceProcessingProtocol.h>

@class PhotoVision, PHAVisionServicePersistenceDelegate, NSString;

@interface PHAVisionServiceFaceProcessingWorker : PHAVisionServiceWorker <PVNotificationListener, PVCVMLIntegrating, PLPhotoAnalysisVisionServiceFaceProcessingProtocol> {

	PhotoVision* _photoVision;
	PHAVisionServicePersistenceDelegate* _persistenceDelegate;
	BOOL _reclusteringRequired;
	BOOL _disabledByUserDefaults;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(short)workerType;
+(BOOL)runsExclusively;
+(long long)applicationDataFolderIdentifier;
-(BOOL)isEnabled;
-(void)scheduleFaceProcessingOnAssetsWithLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)performFaceProcessingOnAssetWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)performFaceProcessingOnSRGBImageData:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 bytesPerRow:(unsigned long long)arg4 bitmapInfo:(unsigned)arg5 context:(id)arg6 reply:(/*^block*/id)arg7 ;
-(void)suggestFacesForFacesWithLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)suggestFacesForPersonWithLocalIdentifier:(id)arg1 toBeConfirmedFaceLocalIdentifiers:(id)arg2 toBeRejectedFaceLocalIdentifiers:(id)arg3 context:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)suggestPersonForFaceWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)renderFaceTilesForFaceLocalIdentifiers:(id)arg1 inAssetWithLocalIdentifier:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)resetFaceClusteringStateWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)reclusterFacesWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)faceClusteringInformation:(unsigned long long)arg1 withContext:(id)arg2 reply:(/*^block*/id)arg3 ;
-(id)preferredAssetResourcesForAnalyzingAsset:(id)arg1 ;
-(void)shutdown;
-(BOOL)hasAdditionalJobsForScenario:(unsigned long long)arg1 ;
-(id)nextAdditionalJobWithScenario:(unsigned long long)arg1 ;
-(id)initWithPhotoAnalysisManager:(id)arg1 dataLoader:(id)arg2 ;
-(void)_handleNilReplyBlockForSelector:(SEL)arg1 ;
-(void)cooldown;
-(id)newAssetFetchOptions;
-(BOOL)getLocallyAvailableAssetResource:(id*)arg1 forAnalyzingAsset:(id)arg2 error:(id*)arg3 ;
-(unsigned long long)analyzeAssetResourceFileAtURL:(id)arg1 forAsset:(id)arg2 withAttributes:(id)arg3 error:(id*)arg4 ;
-(unsigned long long)analyzeImageData:(id)arg1 forAsset:(id)arg2 withAttributes:(id)arg3 error:(id*)arg4 ;
-(BOOL)processAsset:(id)arg1 error:(id*)arg2 ;
-(void)willCompleteJob:(id)arg1 ;
-(id)_newFacesFetchOptions;
-(id)_newPersonsFetchOptions;
-(id)_newFaceGroupsFetchOptions;
-(BOOL)stopAnalysisJob:(id)arg1 error:(id*)arg2 ;
-(id)_pvImageForAssetResourceFileURL:(id)arg1 assetWidth:(unsigned long long)arg2 assetHeight:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)_pvImageForAssetResource:(id)arg1 assetWidth:(unsigned long long)arg2 assetHeight:(unsigned long long)arg3 error:(id*)arg4 ;
-(BOOL)_validateAsset:(id)arg1 error:(id*)arg2 ;
-(id)_changeAsset:(id)arg1 faceDetectionState:(long long)arg2 error:(id*)arg3 ;
-(int)_performPersistedFaceAnalysisOfPVImage:(id)arg1 withAttributes:(id)arg2 forAsset:(id)arg3 error:(id*)arg4 ;
-(id)_analyzePVImage:(id)arg1 forAsset:(id)arg2 withAttributes:(id)arg3 error:(id*)arg4 ;
-(BOOL)_synchronouslyGenerateFaceTilesForFaces:(id)arg1 fromAsset:(id)arg2 assetImage:(id)arg3 error:(id*)arg4 ;
-(id)_photoVisionAllowingCreation:(BOOL)arg1 error:(id*)arg2 ;
-(id)_faceSuggestionsFromKeyFaceClustSeqNums:(id)arg1 excludeFaceLocalIdentifers:(id)arg2 operation:(id)arg3 ;
-(void)_performIntermediateCVMLCleanup;
-(void)_performFullCVMLCleanup;
-(void)_terminatePhotoVision;
-(void)_interruptPhotoVision;
-(void)_performForcedFaceClustering:(BOOL)arg1 whileKeepingAliveJob:(id)arg2 ;
-(unsigned long long)_analyzeAsset:(id)arg1 withAttributes:(id)arg2 usingPVImageProvidedByBlock:(/*^block*/id)arg3 error:(id*)arg4 ;
-(BOOL)_shouldPerformFaceAnalysisForAsset:(id)arg1 ;
-(int)_performPersistedFaceAnalysisOfResource:(id)arg1 withAttributes:(id)arg2 forAsset:(id)arg3 error:(id*)arg4 ;
-(void)_willPerformFaceClustering;
-(void)_didPerformFaceClustering;
-(BOOL)_scheduleFaceProcessingOnAssetsWithLocalIdentifiers:(id)arg1 priority:(int)arg2 error:(id*)arg3 ;
-(id)_faceDescriptionsOfFacesInImageWithSRGBImageData:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 bytesPerRow:(unsigned long long)arg4 bitmapInfo:(unsigned)arg5 error:(id*)arg6 ;
-(id)_faceSuggestionsForFacesWithLocalIdentifiers:(id)arg1 operation:(id)arg2 error:(id*)arg3 ;
-(id)_faceSuggestionsForPersonWithLocalIdentifier:(id)arg1 toBeConfirmedFaceLocalIdentifiers:(id)arg2 toBeRejectedFaceLocalIdentifiers:(id)arg3 operation:(id)arg4 error:(id*)arg5 ;
-(BOOL)_renderFaceTilesForFaceLocalIdentifiers:(id)arg1 inAssetWithLocalIdentifier:(id)arg2 error:(id*)arg3 ;
-(void)handlePVNotification:(id)arg1 ;
-(id)newPhotoVisionCVMLRequestOptions;
-(id)_pvImageForAsset:(id)arg1 error:(id*)arg2 ;
-(BOOL)_resetFaceClusteringStateWithContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)_performFaceClusteringWithCompletion:(/*^block*/id)arg1 ;
@end

