/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:29 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Messages/iMessageBalloons/AssetExplorer.bundle/AssetExplorer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXAssetsDataSourceManager.h>
#import <libobjc.A.dylib/PUAssetsDataSourceManagerDelegate.h>

@class PUAssetsDataSourceManager, NSString;

@interface AEWrappedDataSourceManager : PXAssetsDataSourceManager <PUAssetsDataSourceManagerDelegate> {

	PUAssetsDataSourceManager* __attachedDataSourceManager;

}

@property (setter=_setAttachedDataSourceManager:,nonatomic,retain) PUAssetsDataSourceManager * _attachedDataSourceManager;              //@synthesize _attachedDataSourceManager=__attachedDataSourceManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)attachDataSourceManager:(id)arg1 ;
-(void)_setAttachedDataSourceManager:(id)arg1 ;
-(PUAssetsDataSourceManager *)_attachedDataSourceManager;
-(void)_createDataSourceFromAssetsDataSource:(id)arg1 ;
-(void)detachCurrentDataSourceManager;
-(id)assetsDataSourceManagerInterestingAssetReferences:(id)arg1 ;
-(void)assetsDataSourceManager:(id)arg1 didChangeAssetsDataSource:(id)arg2 ;
@end
