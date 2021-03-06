/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHObject.h>

@interface PHFaceGroup : PHObject {

	long long _faceGroupType;
	long long _unnamedFaceCount;
	long long _personModelId;

}

@property (assign,nonatomic) long long personModelId;                   //@synthesize personModelId=_personModelId - In the implementation block
@property (nonatomic,readonly) long long faceGroupType;                 //@synthesize faceGroupType=_faceGroupType - In the implementation block
@property (nonatomic,readonly) long long unnamedFaceCount;              //@synthesize unnamedFaceCount=_unnamedFaceCount - In the implementation block
+(id)managedEntityName;
+(id)fetchFaceGroupsWithType:(long long)arg1 options:(id)arg2 ;
+(id)fetchPredicateFromComparisonPredicate:(id)arg1 options:(id)arg2 ;
+(id)identifierCode;
+(id)propertiesToFetchWithHint:(unsigned long long)arg1 ;
+(id)entityKeyForPropertyKey:(id)arg1 ;
+(id)_transformValueExpression:(id)arg1 forKeyPath:(id)arg2 ;
+(id)fetchFaceGroupsWithOptions:(id)arg1 ;
+(id)fetchFaceGroupsWithLocalIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)fetchAlgorithmicFaceGroupsForPerson:(id)arg1 options:(id)arg2 ;
+(id)fetchFaceGroupsWithFace:(id)arg1 type:(long long)arg2 options:(id)arg3 ;
+(id)fetchType;
+(id)fetchRejectedFaceGroupsForPerson:(id)arg1 options:(id)arg2 ;
+(id)fetchAlgorithmicFaceGroupsWithOptions:(id)arg1 ;
+(id)fetchRejectedFaceGroupsWithOptions:(id)arg1 ;
-(long long)faceGroupType;
-(id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3 ;
-(Class)changeRequestClass;
-(long long)getPersonModelId;
-(long long)unnamedFaceCount;
-(long long)personModelId;
-(void)setPersonModelId:(long long)arg1 ;
@end

