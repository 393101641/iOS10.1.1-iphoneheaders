/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/Support/softwareupdateservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SUManagerServerInterface.h>
#import <softwareupdateservicesd/SUManagerDelegate.h>
#import <softwareupdateservicesd/SUAutoInstallManagerDelegate.h>

@class SUAutoInstallManager, SUManager, NSMutableArray, NSString;

@interface SUManagerServer : NSObject <SUManagerServerInterface, SUManagerDelegate, SUAutoInstallManagerDelegate> {

	SUAutoInstallManager* _autoInstallManager;
	SUManager* _manager;
	NSMutableArray* _clients;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)runUntilIdleExit;
-(id)autoInstallManager;
-(void)_clientMessagabilityDidChange:(id)arg1 ;
-(void)_clientForegroundnessDidChange:(id)arg1 ;
-(BOOL)deviceHasSufficientSpaceForDownload:(id*)arg1 includeAppPurging:(BOOL)arg2 error:(id*)arg3 ;
-(void)_sendLatestStatusForClient:(id)arg1 ;
-(void)_evaluateForegroundness;
-(id)_clientForCurrentConnection;
-(void)autoInstallManager:(id)arg1 operationWasConsented:(id)arg2 ;
-(void)autoInstallManager:(id)arg1 didCancelOperation:(id)arg2 ;
-(void)autoInstallManager:(id)arg1 didExpireOperation:(id)arg2 ;
-(void)autoInstallManager:(id)arg1 isReadyToInstall:(id)arg2 ;
-(void)_notifyServerStart;
-(void)downloadDidFinish:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)_run;
-(void)addClient:(id)arg1 ;
-(void)resumeDownload:(/*^block*/id)arg1 ;
-(void)removeClient:(id)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)download:(/*^block*/id)arg1 ;
-(void)isUpdateReadyForInstallation:(/*^block*/id)arg1 ;
-(void)isScanning:(/*^block*/id)arg1 ;
-(void)startDownloadWithMetadata:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(void)updateDownloadMetadata:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(void)currentAutoInstallOperation:(BOOL)arg1 withResult:(/*^block*/id)arg2 ;
-(void)installUpdate:(/*^block*/id)arg1 ;
-(void)scanForUpdates:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(void)deviceHasSufficientSpaceForDownload:(/*^block*/id)arg1 ;
-(void)setClientType:(int)arg1 withResult:(/*^block*/id)arg2 ;
-(void)isDownloading:(/*^block*/id)arg1 ;
-(void)startDownload:(/*^block*/id)arg1 ;
-(void)pauseDownload:(/*^block*/id)arg1 ;
-(void)purgeDownload:(/*^block*/id)arg1 ;
-(void)extraSpaceNeededForDownloadWithoutAppPurging:(/*^block*/id)arg1 ;
-(void)createInstallationKeybag:(id)arg1 forUnattendedInstall:(BOOL)arg2 withResult:(/*^block*/id)arg3 ;
-(void)isInstallationKeybagRequired:(/*^block*/id)arg1 ;
-(void)slaVersion:(/*^block*/id)arg1 ;
-(void)consentToAutoInstallOperation:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(void)cancelAutoInstallOperation:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(void)scanRequestDidStartForOptions:(id)arg1 ;
-(void)scanRequestDidFinishForOptions:(id)arg1 update:(id)arg2 error:(id)arg3 ;
-(void)scanDidCompleteWithNewUpdateAvailable:(id)arg1 error:(id)arg2 ;
-(void)automaticDownloadDidFailToStartForNewUpdateAvailable:(id)arg1 withError:(id)arg2 ;
-(void)downloadWasInvalidatedForNewUpdateAvailable:(id)arg1 ;
-(void)downloadDidStart:(id)arg1 ;
-(void)downloadProgressDidChange:(id)arg1 ;
-(void)downloadDidFail:(id)arg1 withError:(id)arg2 ;
-(void)installDidStart:(id)arg1 ;
-(void)installDidFail:(id)arg1 withError:(id)arg2 ;
-(void)installDidFinish:(id)arg1 ;
-(id)manager;
-(void)cancelDownload:(/*^block*/id)arg1 ;
-(id)clients;
@end
