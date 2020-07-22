//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface GKRTree : NSObject
{
    struct GKCRTree<NSObject, float __attribute__((ext_vector_type(2)))> *_cRTree;
    unsigned long long _queryReserve;
}

+ (id)treeWithMaxNumberOfChildren:(unsigned long long)arg1;
@property unsigned long long queryReserve; // @synthesize queryReserve=_queryReserve;
- (id)elementsInBoundingRectMin:rectMax: /* Error: Ran out of types for this method. */;
- (void)removeElement:(id)arg1 boundingRectMin:boundingRectMax: /* Error: Ran out of types for this method. */;
- (void)addElement:(id)arg1 boundingRectMin:(long long)arg2 boundingRectMax:splitStrategy: /* Error: Ran out of types for this method. */;
- (id)initWithMaxNumberOfChildren:(unsigned long long)arg1;
- (id)init;
- (void)dealloc;

@end

