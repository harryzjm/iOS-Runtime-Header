//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SBAppLayout;

@interface SBBlurItemContainerSwitcherModifierAction
{
    _Bool _shouldBlur;
    SBAppLayout *_appLayout;
}

@property(readonly, nonatomic) _Bool shouldBlur; // @synthesize shouldBlur=_shouldBlur;
@property(readonly, nonatomic) SBAppLayout *appLayout; // @synthesize appLayout=_appLayout;
- (void).cxx_destruct;
- (id)description;
- (long long)type;
- (id)initWithAppLayout:(id)arg1 shouldBlur:(_Bool)arg2;

@end
