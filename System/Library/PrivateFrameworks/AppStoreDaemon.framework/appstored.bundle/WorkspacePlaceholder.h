/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, Download;

@interface WorkspacePlaceholder : NSObject {

	NSData* _appArtworkData;
	Download* _download;
	NSData* _extensionArtworkData;

}
-(id)createPlaceholderError:(id*)arg1 ;
-(id)installationOptionsForBundleID:(id)arg1 ;
-(void)setAppArtworkData:(id)arg1 ;
-(void)setExtensionArtworkData:(id)arg1 ;
-(id)initWithDownload:(id)arg1 inSession:(id)arg2 ;
-(id)_makePlaceholderDirectoryForDownload:(id)arg1 error:(id*)arg2 ;
-(id)_newITunesMetadataWithDownload:(id)arg1 ;
-(id)_placeholdersContainerDirectoryPath;
-(id)_newAppInfoPlistWithDownload:(id)arg1 ;
-(id)_makeBundleWithName:(id)arg1 atPath:(id)arg2 withIconData:(id)arg3 infoPlist:(id)arg4 error:(id*)arg5 ;
-(id)_newExtensionInfoPlistWithDownload:(id)arg1 ;
-(id)_newInfoPlistWithDownload:(id)arg1 ;
-(BOOL)hasArtworkData;
@end

