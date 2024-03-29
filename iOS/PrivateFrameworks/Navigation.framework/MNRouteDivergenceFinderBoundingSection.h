//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MNRouteDivergenceFinderBoundingSection : NSObject
{
    MNRouteDivergenceFinderBoundingSection *_left;
    MNRouteDivergenceFinderBoundingSection *_right;
    unsigned long long _leafIndex;
    double _length;
    struct GEOPolylineCoordinateRange _range;
    CDStruct_02837cd9 _boundingRect;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) double length; // @synthesize length=_length;
@property(nonatomic) unsigned long long leafIndex; // @synthesize leafIndex=_leafIndex;
@property(retain, nonatomic) MNRouteDivergenceFinderBoundingSection *right; // @synthesize right=_right;
@property(retain, nonatomic) MNRouteDivergenceFinderBoundingSection *left; // @synthesize left=_left;
@property(nonatomic) CDStruct_02837cd9 boundingRect; // @synthesize boundingRect=_boundingRect;
@property(nonatomic) struct GEOPolylineCoordinateRange range; // @synthesize range=_range;
- (void)_appendDescription:(id)arg1 indent:(unsigned long long)arg2;
- (id)description;
- (id)boundsDescription;
- (id)treeDescription;
- (_Bool)containsCoordinate:(CDStruct_39925896)arg1;
- (void)traverseWithHandler:(CDUnknownBlockType)arg1;
- (id)leafSectionsIntersectingSection:(id)arg1 paddingMapPoints:(double)arg2;
@property(readonly, nonatomic) _Bool isLeaf;

@end

