/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:41:39 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/DataClassMigrators/DAAccountLegacy.migrator/DAAccountLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAAccountLegacy/DALegacyAccount.h>

@interface ASAccount_Legacy : DALegacyAccount
-(id)usernameWithoutDomain;
-(int)asAccountVersion;
-(BOOL)upgradeAccountWithParent:(id)arg1 ;
-(id)_oldURLsForKeychain;
-(BOOL)_needsNewAccountIDForOldVersion:(int)arg1 ;
-(BOOL)_upgradeSelfFromVersion:(int)arg1 superClassUpgraded:(BOOL)arg2 ;
@end
