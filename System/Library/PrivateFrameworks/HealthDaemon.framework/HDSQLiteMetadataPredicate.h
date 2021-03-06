/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDSQLitePredicate.h>

@class HDSQLitePredicate;

@interface HDSQLiteMetadataPredicate : HDSQLitePredicate {

	HDSQLitePredicate* _keyPredicate;
	HDSQLitePredicate* _valuePredicate;
	BOOL _includeNullPredicate;

}
+(id)predicateWithMetadataKey:(id)arg1 allowedValues:(id)arg2 ;
+(id)predicateWithMetadataKey:(id)arg1 value:(id)arg2 operatorType:(unsigned long long)arg3 ;
-(id)_valuePredicateForValue:(id)arg1 operatorType:(unsigned long long)arg2 ;
-(id)SQLForEntityClass:(Class)arg1 ;
-(void)bindToStatement:(sqlite3_stmtRef)arg1 bindingIndex:(inout int*)arg2 ;
@end

