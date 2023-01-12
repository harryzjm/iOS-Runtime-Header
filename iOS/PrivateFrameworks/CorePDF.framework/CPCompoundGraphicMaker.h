//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPChunk, CPCluster;

__attribute__((visibility("hidden")))
@interface CPCompoundGraphicMaker : NSObject
{
    CPChunk *parentChunk;
    _Bool shapesAreVectorGraphics;
    unsigned int shapeCount;
    id *shapes;
    double pageSpread;
    CPCluster *cluster;
    unsigned int groupInfoCount;
    struct {
        unsigned int _field1;
        struct CGRect _field2;
    } *groupInfoArray;
    _Bool disposed;
}

+ (_Bool)makeCompoundGraphicsInZonesOf:(id)arg1;
- (_Bool)makeCompoundGraphics;
- (_Bool)groupOverlappingGraphics;
- (_Bool)makeCompoundGraphicsFromShapeGroups;
- (void)coalesceShapeGroups;
- (void)makeCompoundGraphicFromShapesAtIndex:(unsigned int)arg1 count:(unsigned int)arg2;
- (void)addGroupInfoWithIndex:(unsigned int)arg1 bounds:(struct CGRect)arg2;
- (_Bool)findClusterLevel;
- (void)dealloc;
- (void)finalize;
- (void)dispose;
- (id)initWithGraphicsIn:(id)arg1 ofClass:(Class)arg2;

@end

