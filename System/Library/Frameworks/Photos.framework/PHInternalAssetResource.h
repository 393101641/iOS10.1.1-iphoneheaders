/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHAssetResource.h>

@class NSString, PHSandboxExtensionWrapper;

@interface PHInternalAssetResource : PHAssetResource {

	NSString* _assetLocalIdentifier;
	unsigned long long _cplResourceType;
	id _fileReservation;
	PHSandboxExtensionWrapper* _sandboxExtensionWrapper;

}

@property (nonatomic,retain) id fileReservation;                                                                                   //@synthesize fileReservation=_fileReservation - In the implementation block
@property (setter=_setSandboxExtensionWrapper:,nonatomic,retain) PHSandboxExtensionWrapper * sandboxExtensionWrapper;              //@synthesize sandboxExtensionWrapper=_sandboxExtensionWrapper - In the implementation block
@property (nonatomic,readonly) unsigned long long cplResourceType;                                                                 //@synthesize cplResourceType=_cplResourceType - In the implementation block
+(id)resourceForType:(long long)arg1 fromAsset:(id)arg2 managedAsset:(id)arg3 ;
+(BOOL)_isResourceFileCreatedOnDemandWithType:(long long)arg1 asset:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(void)_setAssetLocalIdentifier:(id)arg1 ;
-(BOOL)isLibraryAssetResource;
-(long long)analysisType;
-(BOOL)_fileExists;
-(BOOL)_populateFromManagedAsset:(id)arg1 usingCPLType:(unsigned long long)arg2 ;
-(void)_populateFromAsset:(id)arg1 ;
-(void)_populateFromManagedAssetSidecar:(id)arg1 utiHint:(id)arg2 ;
-(void)_populateFromAssetAlternatePath:(id)arg1 alternatePath:(id)arg2 assetResourceType:(long long)arg3 ;
-(void)_fixupOriginalFilename;
-(void)_fixupUTI;
-(BOOL)_inconsistentTypeAndUTIOrMissingFileWithShouldCheckFileExistence:(BOOL)arg1 ;
-(/*^block*/id)_onDemandFileLoaderForResourceType:(long long)arg1 asset:(id)arg2 ;
-(id)initWithResourceType:(long long)arg1 fromAsset:(id)arg2 managedAsset:(id)arg3 ;
-(void)_unpin;
-(id)fileReservation;
-(void)setFileReservation:(id)arg1 ;
-(unsigned long long)cplResourceType;
-(PHSandboxExtensionWrapper *)sandboxExtensionWrapper;
-(void)_setSandboxExtensionWrapper:(id)arg1 ;
-(id)assetLocalIdentifier;
-(BOOL)pin;
-(void)_acquireSandboxExtensionIfNeeded;
@end

