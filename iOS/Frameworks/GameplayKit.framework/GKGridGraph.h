//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface GKGridGraph
{
    struct GKCGridGraph *_cGridGraph;
    _Bool _diagonalsAllowed;
}

+ (id)graphFromGridStartingAt:(int)arg1 width:(int)arg2 height:(_Bool)arg3 diagonalsAllowed:(Class)arg4 nodeClass: /* Error: Ran out of types for this method. */;
+ (id)graphFromGridStartingAt:(int)arg1 width:(int)arg2 height:(_Bool)arg3 diagonalsAllowed: /* Error: Ran out of types for this method. */;
@property(readonly, nonatomic) _Bool diagonalsAllowed; // @synthesize diagonalsAllowed=_diagonalsAllowed;
- (Class)classForGenericArgumentAtIndex:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)removeNodes:(id)arg1;
- (void)connectNodeToAdjacentNodes:(id)arg1;
- (id)nodeAtGridPositionNoNilCheck: /* Error: Ran out of types for this method. */;
- (id)nodeAtGridPosition: /* Error: Ran out of types for this method. */;
- (id)initFromGridStartingAt:(int)arg1 width:(int)arg2 height:(_Bool)arg3 diagonalsAllowed:(Class)arg4 nodeClass: /* Error: Ran out of types for this method. */;
- (id)initFromGridStartingAt:(int)arg1 width:(int)arg2 height:(_Bool)arg3 diagonalsAllowed: /* Error: Ran out of types for this method. */;
- (struct GKCGridGraph *)cGridGraph;
@property(readonly, nonatomic) unsigned long long gridHeight;
@property(readonly, nonatomic) unsigned long long gridWidth;
@property(readonly, nonatomic) MISSING_TYPE *gridOrigin;
- (struct GKCGraph *)makeCGraph;

@end
