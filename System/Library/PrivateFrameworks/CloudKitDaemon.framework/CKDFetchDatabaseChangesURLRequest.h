/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:09 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>
#import <libobjc.A.dylib/CKDURLRequestPipelining.h>

@class NSMutableArray, NSData, CKRecordZoneID, NSArray, NSString;

@interface CKDFetchDatabaseChangesURLRequest : CKDURLRequest <CKDURLRequestPipelining> {

	NSMutableArray* _changedZoneIDs;
	NSMutableArray* _deletedZoneIDs;
	unsigned long long _resultsLimit;
	NSData* _serverChangeTokenData;
	long long _status;
	/*^block*/id _zoneChangedBlock;
	/*^block*/id _zoneDeletedBlock;
	CKRecordZoneID* _recordZoneID;
	NSData* _previousServerChangeTokenData;

}

@property (nonatomic,retain) CKRecordZoneID * recordZoneID;                       //@synthesize recordZoneID=_recordZoneID - In the implementation block
@property (nonatomic,retain) NSData * previousServerChangeTokenData;              //@synthesize previousServerChangeTokenData=_previousServerChangeTokenData - In the implementation block
@property (nonatomic,retain) NSData * serverChangeTokenData;                      //@synthesize serverChangeTokenData=_serverChangeTokenData - In the implementation block
@property (assign,nonatomic) long long status;                                    //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) unsigned long long resultsLimit;                     //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (nonatomic,readonly) NSArray * changedZoneIDs;                          //@synthesize changedZoneIDs=_changedZoneIDs - In the implementation block
@property (nonatomic,readonly) NSArray * deletedZoneIDs;                          //@synthesize deletedZoneIDs=_deletedZoneIDs - In the implementation block
@property (nonatomic,copy) id zoneChangedBlock;                                   //@synthesize zoneChangedBlock=_zoneChangedBlock - In the implementation block
@property (nonatomic,copy) id zoneDeletedBlock;                                   //@synthesize zoneDeletedBlock=_zoneDeletedBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)status;
-(void)setStatus:(long long)arg1 ;
-(id)requestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(id)requestOperationClasses;
-(NSData *)previousServerChangeTokenData;
-(id)zoneChangedBlock;
-(id)zoneDeletedBlock;
-(void)setServerChangeTokenData:(NSData *)arg1 ;
-(id)initWithPreviousServerChangeTokenData:(id)arg1 ;
-(NSArray *)changedZoneIDs;
-(NSArray *)deletedZoneIDs;
-(NSData *)serverChangeTokenData;
-(void)setZoneChangedBlock:(id)arg1 ;
-(void)setZoneDeletedBlock:(id)arg1 ;
-(void)setPreviousServerChangeTokenData:(NSData *)arg1 ;
-(int)operationType;
-(CKRecordZoneID *)recordZoneID;
-(void)setRecordZoneID:(CKRecordZoneID *)arg1 ;
-(unsigned long long)resultsLimit;
-(void)setResultsLimit:(unsigned long long)arg1 ;
@end

