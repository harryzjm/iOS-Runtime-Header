//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSDHobbyPathGenerator : NSObject
{
    _Bool mClosed;
    struct vector<CGPoint, std::__1::allocator<CGPoint>> *mPoints;
    struct vector<CGPoint, std::__1::allocator<CGPoint>> *mMorphedPoints;
}

- (void)adjustRotationalSymmetry:(id)arg1;
- (void)adjustRatio:(id)arg1;
- (void)adjustNodeTypes:(id)arg1;
- (void)adjustRemoveStraightNodes:(id)arg1;
- (void)adjustStraightenUp:(id)arg1;
- (void)adjustStraightEdges:(id)arg1;
- (void)calculateClosings;
- (id)calculateHobbyPath;
- (void)morphPointsTo:(id)arg1;
- (double)distanceForSegment:(unsigned long long)arg1 overRange:(struct _NSRange)arg2 furthestNode:(unsigned long long *)arg3 inSubpath:(id)arg4;
- (id)hobbyPathFrom:(id)arg1 morphedPath:(id *)arg2;
- (_Bool)pathWillClose:(id)arg1;
- (void)dealloc;
- (id)init;

@end

