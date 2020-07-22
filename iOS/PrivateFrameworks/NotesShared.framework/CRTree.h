//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CRDocument, CROrderedSet, CRTreeNode;

@interface CRTree
{
}

+ (id)CRProperties;
- (void)computeChildren;
- (void)invalidateChildren;
- (void)mergeWith:(id)arg1;
- (void)setDocument:(id)arg1;
@property(readonly, nonatomic) CRDocument *document;
- (void)removeNode:(id)arg1;
- (void)moveNode:(id)arg1 toParent:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)setNodeTree:(id)arg1 insertAtIndex:(unsigned long long)arg2;
- (void)insertNode:(id)arg1 inParent:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)insertNodeWithValue:(id)arg1 inParent:(id)arg2 atIndex:(unsigned long long)arg3;
- (unsigned long long)insertIndexForNode:(id)arg1 childIndex:(unsigned long long)arg2;
@property(readonly, nonatomic) long long count;
@property(readonly, nonatomic) CRTreeNode *root;
@property(readonly, nonatomic) CROrderedSet *nodes;
- (id)initWithCRCoder:(id)arg1;
- (id)init;

@end
