/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:10 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDictionary;


@protocol TSKImportExportDelegate <NSObject>
@property (nonatomic,readonly) NSDictionary * incompatibleMediaContainersWithDataUnsupportedOnThisDevice; 
@property (nonatomic,readonly) NSDictionary * incompatibleMediaContainersWithDataUnsupportedOnAllDevices; 
@property (nonatomic,readonly) BOOL isBrowsingVersions; 
@optional
-(void)addIncompatibleMediaContainer:(id)arg1 incompatibleData:(id)arg2 compatibilityLevel:(long long)arg3;
-(void)replaceIncompatibleMediaContainer:(id)arg1 withNewMediaContainer:(id)arg2;
-(void)showDownloadPermissionAlertIfNeededForDownloadingAssetsWithEstimatedDownloadSize:(long long)arg1 isPrecise:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(NSDictionary *)incompatibleMediaContainersWithDataUnsupportedOnThisDevice;
-(NSDictionary *)incompatibleMediaContainersWithDataUnsupportedOnAllDevices;
-(BOOL)isBrowsingVersions;

@required
-(void)removeWarning:(id)arg1;
-(void)addWarning:(id)arg1;
-(id)warnings;

@end

