//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SBAppLayout;

@interface SBInsertionSwitcherModifierEvent
{
    SBAppLayout *_appLayout;
    unsigned long long _index;
    unsigned long long _phase;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long phase; // @synthesize phase=_phase;
@property(readonly, nonatomic) unsigned long long index; // @synthesize index=_index;
@property(readonly, nonatomic) SBAppLayout *appLayout; // @synthesize appLayout=_appLayout;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)type;
- (id)initWithAppLayout:(id)arg1 intoIndex:(unsigned long long)arg2 phase:(unsigned long long)arg3;

@end
