//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSIndexSet, NSMutableDictionary, NSMutableIndexSet, NSNumber;

@interface TSCH3DActiveLabelsTypeBounds : NSObject
{
    NSMutableIndexSet *_activeIndices;
    NSMutableDictionary *_map;
    NSNumber *_activeType;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSNumber *activeType; // @synthesize activeType=_activeType;
- (_Bool)resetIndex:(long long)arg1;
- (_Bool)hasAnyCachedBoundsAtIndices:(id)arg1;
- (_Bool)hasCachedBoundsAtIndex:(unsigned long long)arg1;
- (id)arrayAtIndex:(long long)arg1;
- (id)active;
- (void)addBounds:(id)arg1;
- (_Bool)setActiveType:(long long)arg1;
@property(readonly, retain, nonatomic) NSIndexSet *activeIndices;
- (id)init;

@end

