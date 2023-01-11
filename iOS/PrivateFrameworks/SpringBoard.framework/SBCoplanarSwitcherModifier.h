//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SBAppLayout;

@interface SBCoplanarSwitcherModifier
{
    double _scale;
    long long _spacingType;
    SBAppLayout *_activeAppLayout;
}

- (void).cxx_destruct;
@property(nonatomic) long long spacingType; // @synthesize spacingType=_spacingType;
@property(nonatomic) double scale; // @synthesize scale=_scale;
- (double)_offscreenSpacing;
- (long long)_indexOfActiveAppLayout;
- (double)scaleForIndex:(unsigned long long)arg1;
- (struct CGRect)frameForIndex:(unsigned long long)arg1;
- (id)initWithActiveAppLayout:(id)arg1;

@end
