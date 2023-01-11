//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSUUID;

@interface SBTetheredRemovalSwitcherModifierEvent
{
    NSUUID *_tetheredRemovalID;
    unsigned long long _phase;
}

@property(readonly, nonatomic) unsigned long long phase; // @synthesize phase=_phase;
@property(readonly, nonatomic) NSUUID *tetheredRemovalID; // @synthesize tetheredRemovalID=_tetheredRemovalID;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (long long)type;
- (id)initWithTetheredRemovalID:(id)arg1 phase:(unsigned long long)arg2;

@end
