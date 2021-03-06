/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:03 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIElementProtocol <NSObject>
@required
+(void)applyElementAttributeCacheScheme:(int)arg1;
+(id)uiElementAtCoordinate:(CGPoint)arg1;
+(id)uiElementAtCoordinate:(CGPoint)arg1 hitTestOrientation:(int)arg2;
+(id)uiElementAtCoordinate:(CGPoint)arg1 forApplication:(AXUIElementRef)arg2 contextId:(unsigned)arg3;
-(BOOL)isValid;
-(id)stringWithAXAttribute:(int)arg1;
-(CGRect*)rectWithAXAttribute:(int)arg1;
-(id)numberWithAXAttribute:(int)arg1;
-(CGPoint*)pointWithAXAttribute:(int)arg1;
-(NSRange*)rangeWithAXAttribute:(int)arg1;
-(id)objectWithAXAttribute:(int)arg1 parameter:(void*)arg2;
-(id)objectWithAXAttribute:(int)arg1;
-(BOOL)isMockElement;
-(void)enableCache:(BOOL)arg1;
-(void)disableCache;
-(BOOL)canPerformAXAction:(int)arg1;
-(id)arrayWithAXAttribute:(int)arg1;
-(BOOL)boolWithAXAttribute:(int)arg1;
-(CGPathRef)pathWithAXAttribute:(int)arg1;
-(id)uiElementsWithAttribute:(int)arg1;
-(id)uiElementsWithAttribute:(int)arg1 parameter:(void*)arg2;
-(BOOL)performAXAction:(int)arg1;
-(BOOL)performAXAction:(int)arg1 withValue:(id)arg2;
-(id)previousElementsWithCount:(unsigned long long)arg1;
-(id)nextElementsWithCount:(unsigned long long)arg1;
-(id)uiElementsWithAttribute:(int)arg1 parameter:(void*)arg2 fetchAttributes:(BOOL)arg3;
-(BOOL)isValidForApplication:(id)arg1;
-(void)updateCacheWithAttributes:(id)arg1;
-(void)updateCache:(int)arg1;
-(void)setAXAttribute:(int)arg1 withBOOL:(BOOL)arg2;
-(void)setAXAttribute:(int)arg1 withString:(id)arg2;
-(void)setAXAttribute:(int)arg1 withLong:(long long)arg2;
-(void)setAXAttribute:(int)arg1 withFloat:(float)arg2;
-(void)setAXAttribute:(int)arg1 withNumber:(id)arg2;
-(void)setAXAttribute:(int)arg1 withPoint:(CGPoint)arg2;
-(void)setAXAttribute:(int)arg1 withSize:(CGSize)arg2;
-(void)setAXAttribute:(int)arg1 withRange:(NSRange)arg2;
-(void)setAXAttribute:(int)arg1 withUIElement:(id)arg2;
-(void)setAXAttribute:(int)arg1 withUIElementArray:(id)arg2;
-(void)setAXAttribute:(int)arg1 withArray:(id)arg2;
-(void)setAXAttribute:(int)arg1 withObject:(id)arg2;
-(void)setAXAttribute:(int)arg1 withObject:(id)arg2 synchronous:(BOOL)arg3;
-(BOOL)performAXAction:(int)arg1 withValue:(id)arg2 fencePort:(unsigned)arg3;
-(NSRange*)nextCursorRangeInDirection:(unsigned long long)arg1 unit:(unsigned long long)arg2 outputRange:(NSRange*)arg3 currentCursorRange:(NSRange)arg4;
-(CGColorRef)colorWithAXAttribute:(int)arg1;
-(NSRange*)nextCursorRangeInDirection:(unsigned long long)arg1 unit:(unsigned long long)arg2 outputRange:(NSRange*)arg3;
-(int)pid;

@end

