//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSIndexPath, NSMutableArray;
@protocol WFTreeObserver;

@interface WFTreeNode : NSObject
{
    id _representedObject;
    WFTreeNode *_parentNode;
    id <WFTreeObserver> _observer;
    NSArray *_flattenedDescendents;
    NSMutableArray *_mutableChildNodes;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *mutableChildNodes; // @synthesize mutableChildNodes=_mutableChildNodes;
@property(readonly, nonatomic) NSArray *flattenedDescendents; // @synthesize flattenedDescendents=_flattenedDescendents;
@property(nonatomic) __weak id <WFTreeObserver> observer; // @synthesize observer=_observer;
@property(readonly, nonatomic) __weak WFTreeNode *parentNode; // @synthesize parentNode=_parentNode;
@property(retain, nonatomic) id representedObject; // @synthesize representedObject=_representedObject;
- (id)paddedStringAtDepth:(unsigned long long)arg1;
- (id)debugDescriptionAtDepth:(unsigned long long)arg1;
- (id)debugDescription;
- (id)descendentNodeAtRelativeIndexPath:(id)arg1;
@property(readonly, nonatomic, getter=isLeaf) _Bool leaf;
@property(readonly, nonatomic) NSIndexPath *indexPath;
- (void)setFlattenedDescendents:(id)arg1 changeSource:(id)arg2;
- (void)childDescendentsDidChange:(id)arg1 oldValue:(id)arg2 changeSource:(id)arg3;
- (void)moveNodeFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)removeNodeAtIndex:(unsigned long long)arg1;
- (void)removeNode:(id)arg1;
- (void)insertNode:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addNode:(id)arg1;
@property(copy, nonatomic) NSArray *childNodes;
- (void)setParentNode:(id)arg1;
- (id)init;
- (id)initWithRepresentedObject:(id)arg1;

@end
