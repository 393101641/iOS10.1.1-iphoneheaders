/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:30 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BBRemoteDataProviderClientProxy <NSObject>
@required
-(void)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 completion:(/*^block*/id)arg3;
-(void)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 completion:(/*^block*/id)arg3;
-(void)clearedInfoForClearingAllBulletinsWithLastClearedInfo:(id)arg1 completion:(/*^block*/id)arg2;
-(void)clearedInfoForClearingBulletinsFromDate:(id)arg1 toDate:(id)arg2 lastClearedInfo:(id)arg3 completion:(/*^block*/id)arg4;
-(void)deliverBulletinActionResponse:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)getDataForAttachmentUUID:(id)arg1 recordID:(id)arg2 isPrimary:(BOOL)arg3 withHandler:(/*^block*/id)arg4;
-(void)getPNGDataForAttachmentUUID:(id)arg1 recordID:(id)arg2 isPrimary:(BOOL)arg3 sizeConstraints:(id)arg4 withHandler:(/*^block*/id)arg5;
-(void)getAspectRatioForAttachmentUUID:(id)arg1 recordID:(id)arg2 isPrimary:(BOOL)arg3 withHandler:(/*^block*/id)arg4;
-(void)deliverMessageWithName:(id)arg1 userInfo:(id)arg2;
-(void)dataProviderDidLoad;
-(void)noteSectionInfoDidChange:(id)arg1;

@end

