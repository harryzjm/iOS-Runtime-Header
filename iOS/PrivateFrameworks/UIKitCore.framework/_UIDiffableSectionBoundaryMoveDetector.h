//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet;
@protocol _UIDiffableDataSourceState, _UIIdentifierDiffer;

__attribute__((visibility("hidden")))
@interface _UIDiffableSectionBoundaryMoveDetector : NSObject
{
    id <_UIIdentifierDiffer> _differ;
    id <_UIDiffableDataSourceState> _beforeState;
    id <_UIDiffableDataSourceState> _afterState;
    NSSet *_movePairs;
    _Bool _didShortCircuit;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool didShortCircuit; // @synthesize didShortCircuit=_didShortCircuit;
@property(readonly, nonatomic) NSSet *movePairs; // @synthesize movePairs=_movePairs;
- (id)_computeMovePairsFoundation;
- (id)initWithItemDiffer:(id)arg1 beforeDataSourceState:(id)arg2 afterDataSourceState:(id)arg3;

@end

