//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SBScrunchGestureSwitcherModifierEvent
{
    double _absoluteScale;
    struct CGPoint _initialCentroid;
    struct CGPoint _centroid;
    struct CGPoint _translationWithoutScale;
}

@property(nonatomic) struct CGPoint translationWithoutScale; // @synthesize translationWithoutScale=_translationWithoutScale;
@property(nonatomic) double absoluteScale; // @synthesize absoluteScale=_absoluteScale;
@property(nonatomic) struct CGPoint centroid; // @synthesize centroid=_centroid;
@property(nonatomic) struct CGPoint initialCentroid; // @synthesize initialCentroid=_initialCentroid;
- (long long)type;

@end
