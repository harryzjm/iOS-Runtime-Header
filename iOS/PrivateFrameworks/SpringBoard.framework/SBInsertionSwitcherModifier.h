//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SBAppLayout;

@interface SBInsertionSwitcherModifier
{
    SBAppLayout *_appLayout;
    _Bool _isSimulatingPreInsertionState;
    struct CGPoint _contentOffsetBeforeInsertion;
    unsigned long long _phase;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long phase; // @synthesize phase=_phase;
- (void)_performBlockBySimulatingPreInsertionState:(CDUnknownBlockType)arg1;
- (double)opacityForIndex:(unsigned long long)arg1;
- (_Bool)clipsToUnobscuredMarginAtIndex:(unsigned long long)arg1;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (id)visibleAppLayouts;
- (struct CGPoint)scrollViewContentOffset;
- (id)handleInsertionEvent:(id)arg1;
- (id)initWithAppLayout:(id)arg1;

@end
