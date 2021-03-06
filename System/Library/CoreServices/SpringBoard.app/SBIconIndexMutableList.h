/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBIconIndexNodeObserver.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@protocol SBIconIndexMutableListObserver;
@class NSMutableArray, NSMapTable, NSString;

@interface SBIconIndexMutableList : NSObject <SBIconIndexNodeObserver, NSFastEnumeration> {

	NSMutableArray* _nodes;
	NSMapTable* _index;
	id<SBIconIndexMutableListObserver> _observer;

}

@property (assign,nonatomic,__weak) id<SBIconIndexMutableListObserver> observer;              //@synthesize observer=_observer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)containsNodeIdentifier:(id)arg1 ;
-(id)containedNodeIdentifiers;
-(id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2 ;
-(id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(unsigned long long)arg2 ;
-(void)node:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2 ;
-(void)node:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2 ;
-(unsigned long long)indexOfNode:(id)arg1 ;
-(void)removeNodesAtIndexes:(id)arg1 ;
-(id)indexDescriptionWithPrefix:(id)arg1 ;
-(void)insertNode:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)replaceNodeAtIndex:(unsigned long long)arg1 withNode:(id)arg2 ;
-(void)removeNodeAtIndex:(unsigned long long)arg1 ;
-(id)init;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_SB36*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)dealloc;
-(unsigned long long)count;
-(void)sortUsingSelector:(SEL)arg1 ;
-(void)removeNode:(id)arg1 ;
-(BOOL)containsNode:(id)arg1 ;
-(void)setObserver:(id<SBIconIndexMutableListObserver>)arg1 ;
-(id<SBIconIndexMutableListObserver>)observer;
-(void)removeAllNodes;
-(id)nodes;
-(void)addNode:(id)arg1 ;
-(void)enumerateNodesUsingBlock:(/*^block*/id)arg1 ;
-(id)nodeAtIndex:(unsigned long long)arg1 ;
@end

