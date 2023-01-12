//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface OADGroup
{
    struct CGRect mLogicalBounds;
    NSMutableArray *mChildren;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)removeUnnecessaryOverrides;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)arg1;
- (void)setParentTextListStyle:(id)arg1;
- (void)removeChild:(id)arg1;
- (void)replaceChild:(id)arg1 with:(id)arg2;
- (id)children;
- (id)childAtIndex:(unsigned long long)arg1;
- (void)addChildren:(id)arg1;
- (void)addChild:(id)arg1;
- (unsigned long long)childCount;
- (void)setLogicalBounds:(struct CGRect)arg1;
- (struct CGRect)logicalBounds;
- (id)groupProperties;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

