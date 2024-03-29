//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet, UnitsInfo;

__attribute__((visibility("hidden")))
@interface UnitRanks : NSObject
{
    _Bool _containsFrom;
    _Bool _containsTo;
    _Bool _containsUnit;
    _Bool _containsCurrency;
    NSMutableArray *_ranks;
    UnitsInfo *_unitsInfo;
    NSMutableSet *_units;
}

+ (id)unitRanksWithUnitsInfo:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *units; // @synthesize units=_units;
@property(nonatomic) __weak UnitsInfo *unitsInfo; // @synthesize unitsInfo=_unitsInfo;
@property(readonly) _Bool containsCurrency; // @synthesize containsCurrency=_containsCurrency;
@property(readonly) _Bool containsUnit; // @synthesize containsUnit=_containsUnit;
@property(readonly) _Bool containsTo; // @synthesize containsTo=_containsTo;
@property(readonly) _Bool containsFrom; // @synthesize containsFrom=_containsFrom;
@property(retain, nonatomic) NSMutableArray *ranks; // @synthesize ranks=_ranks;
- (void)addUnitRank:(id)arg1;
@property(readonly) _Bool isAmbiguous;
- (void)sort;
- (id)init;
- (id)initWithUnitsInfo:(id)arg1;

@end

