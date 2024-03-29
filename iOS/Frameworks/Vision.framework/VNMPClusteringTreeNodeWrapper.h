//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VNMPClusteringTreeNodeWrapper : NSObject
{
    _Bool _freeNodeOnDealloc;
    void *_node;
}

@property _Bool freeNodeOnDealloc; // @synthesize freeNodeOnDealloc=_freeNodeOnDealloc;
@property void *node; // @synthesize node=_node;
- (void)dealloc;
- (id)getLeafNodes;
- (int)leafsCount;
- (float)avgDistance;
- (float)distance;
- (id)right;
- (id)left;
- (id)descriptor;
- (int)nodeId;
- (id)initWithNode:(void *)arg1 freeNodeOnDealloc:(_Bool)arg2;

@end

