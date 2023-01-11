//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface GKOctree : NSObject
{
    struct GKCOctree<NSObject> *_cOctree;
}

+ (id)octreeWithBoundingBox:(struct GKBox)arg1 minimumCellSize:(float)arg2;
- (_Bool)removeElement:(id)arg1 withNode:(id)arg2;
- (_Bool)removeElement:(id)arg1;
- (id)elementsInBox:(struct GKBox)arg1;
- (id)elementsAtPoint: /* Error: Ran out of types for this method. */;
- (id)addElement:(id)arg1 withBox:(struct GKBox)arg2;
- (id)addElement:(id)arg1 withPoint: /* Error: Ran out of types for this method. */;
- (void)dealloc;
- (id)initWithBoundingBox:(struct GKBox)arg1 minimumCellSize:(float)arg2;
- (id)init;

@end
