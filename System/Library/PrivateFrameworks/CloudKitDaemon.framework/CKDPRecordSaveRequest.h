/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:07 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPRecordSaveRequestConflictLoserUpdate, NSMutableArray, NSString, CKDPRecordSaveRequestShareSaveInfo, CKDPRecord, CKDPRecordSaveRequestShareIdUpdate;

@interface CKDPRecordSaveRequest : PBRequest <NSCopying> {

	CKDPRecordSaveRequestConflictLoserUpdate* _conflictLoserUpdate;
	NSMutableArray* _conflictLosersToResolves;
	NSString* _etag;
	NSMutableArray* _fieldsToDeleteIfExistOnMerges;
	CKDPRecordSaveRequestShareSaveInfo* _oBSOLETEShareSaveInfo;
	NSString* _parentChainProtectionInfoTag;
	CKDPRecord* _record;
	NSString* _recordProtectionInfoTag;
	int _saveSemantics;
	NSString* _shareEtag;
	CKDPRecordSaveRequestShareIdUpdate* _shareIDUpdate;
	NSString* _zoneProtectionInfoTag;
	BOOL _merge;
	SCD_Struct_CK5 _has;

}

@property (nonatomic,readonly) BOOL hasRecord; 
@property (nonatomic,retain) CKDPRecord * record;                                                         //@synthesize record=_record - In the implementation block
@property (assign,nonatomic) BOOL hasMerge; 
@property (assign,nonatomic) BOOL merge;                                                                  //@synthesize merge=_merge - In the implementation block
@property (nonatomic,retain) NSMutableArray * fieldsToDeleteIfExistOnMerges;                              //@synthesize fieldsToDeleteIfExistOnMerges=_fieldsToDeleteIfExistOnMerges - In the implementation block
@property (nonatomic,readonly) BOOL hasEtag; 
@property (nonatomic,retain) NSString * etag;                                                             //@synthesize etag=_etag - In the implementation block
@property (nonatomic,readonly) BOOL hasConflictLoserUpdate; 
@property (nonatomic,retain) CKDPRecordSaveRequestConflictLoserUpdate * conflictLoserUpdate;              //@synthesize conflictLoserUpdate=_conflictLoserUpdate - In the implementation block
@property (assign,nonatomic) BOOL hasSaveSemantics; 
@property (assign,nonatomic) int saveSemantics;                                                           //@synthesize saveSemantics=_saveSemantics - In the implementation block
@property (nonatomic,readonly) BOOL hasZoneProtectionInfoTag; 
@property (nonatomic,retain) NSString * zoneProtectionInfoTag;                                            //@synthesize zoneProtectionInfoTag=_zoneProtectionInfoTag - In the implementation block
@property (nonatomic,readonly) BOOL hasRecordProtectionInfoTag; 
@property (nonatomic,retain) NSString * recordProtectionInfoTag;                                          //@synthesize recordProtectionInfoTag=_recordProtectionInfoTag - In the implementation block
@property (nonatomic,retain) NSMutableArray * conflictLosersToResolves;                                   //@synthesize conflictLosersToResolves=_conflictLosersToResolves - In the implementation block
@property (nonatomic,readonly) BOOL hasShareEtag; 
@property (nonatomic,retain) NSString * shareEtag;                                                        //@synthesize shareEtag=_shareEtag - In the implementation block
@property (nonatomic,readonly) BOOL hasShareIDUpdate; 
@property (nonatomic,retain) CKDPRecordSaveRequestShareIdUpdate * shareIDUpdate;                          //@synthesize shareIDUpdate=_shareIDUpdate - In the implementation block
@property (nonatomic,readonly) BOOL hasParentChainProtectionInfoTag; 
@property (nonatomic,retain) NSString * parentChainProtectionInfoTag;                                     //@synthesize parentChainProtectionInfoTag=_parentChainProtectionInfoTag - In the implementation block
@property (nonatomic,readonly) BOOL hasOBSOLETEShareSaveInfo; 
@property (nonatomic,retain) CKDPRecordSaveRequestShareSaveInfo * oBSOLETEShareSaveInfo;                  //@synthesize oBSOLETEShareSaveInfo=_oBSOLETEShareSaveInfo - In the implementation block
+(id)options;
+(Class)fieldsToDeleteIfExistOnMergeType;
+(Class)conflictLosersToResolveType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(NSString *)etag;
-(BOOL)hasEtag;
-(void)setEtag:(NSString *)arg1 ;
-(CKDPRecord *)record;
-(void)setShareEtag:(NSString *)arg1 ;
-(void)setZoneProtectionInfoTag:(NSString *)arg1 ;
-(BOOL)hasZoneProtectionInfoTag;
-(NSString *)zoneProtectionInfoTag;
-(void)addFieldsToDeleteIfExistOnMerge:(id)arg1 ;
-(void)addConflictLosersToResolve:(id)arg1 ;
-(unsigned long long)fieldsToDeleteIfExistOnMergesCount;
-(void)clearFieldsToDeleteIfExistOnMerges;
-(id)fieldsToDeleteIfExistOnMergeAtIndex:(unsigned long long)arg1 ;
-(void)setConflictLoserUpdate:(CKDPRecordSaveRequestConflictLoserUpdate *)arg1 ;
-(void)setRecordProtectionInfoTag:(NSString *)arg1 ;
-(unsigned long long)conflictLosersToResolvesCount;
-(void)clearConflictLosersToResolves;
-(id)conflictLosersToResolveAtIndex:(unsigned long long)arg1 ;
-(void)setShareIDUpdate:(CKDPRecordSaveRequestShareIdUpdate *)arg1 ;
-(void)setParentChainProtectionInfoTag:(NSString *)arg1 ;
-(void)setOBSOLETEShareSaveInfo:(CKDPRecordSaveRequestShareSaveInfo *)arg1 ;
-(void)setHasMerge:(BOOL)arg1 ;
-(BOOL)hasMerge;
-(BOOL)hasConflictLoserUpdate;
-(int)saveSemantics;
-(void)setSaveSemantics:(int)arg1 ;
-(void)setHasSaveSemantics:(BOOL)arg1 ;
-(BOOL)hasSaveSemantics;
-(id)saveSemanticsAsString:(int)arg1 ;
-(int)StringAsSaveSemantics:(id)arg1 ;
-(BOOL)hasRecordProtectionInfoTag;
-(BOOL)hasShareEtag;
-(BOOL)hasShareIDUpdate;
-(BOOL)hasParentChainProtectionInfoTag;
-(BOOL)hasOBSOLETEShareSaveInfo;
-(NSMutableArray *)fieldsToDeleteIfExistOnMerges;
-(void)setFieldsToDeleteIfExistOnMerges:(NSMutableArray *)arg1 ;
-(CKDPRecordSaveRequestConflictLoserUpdate *)conflictLoserUpdate;
-(NSString *)recordProtectionInfoTag;
-(NSMutableArray *)conflictLosersToResolves;
-(void)setConflictLosersToResolves:(NSMutableArray *)arg1 ;
-(NSString *)shareEtag;
-(CKDPRecordSaveRequestShareIdUpdate *)shareIDUpdate;
-(NSString *)parentChainProtectionInfoTag;
-(CKDPRecordSaveRequestShareSaveInfo *)oBSOLETEShareSaveInfo;
-(void)setRecord:(CKDPRecord *)arg1 ;
-(BOOL)merge;
-(void)setMerge:(BOOL)arg1 ;
-(BOOL)hasRecord;
@end
