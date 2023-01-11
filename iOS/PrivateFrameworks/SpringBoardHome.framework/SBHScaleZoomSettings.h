//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SBFAnimationSettings;

@interface SBHScaleZoomSettings
{
    _Bool _crossfadeWithZoom;
    _Bool _fadesIconGrid;
    SBFAnimationSettings *_outerFolderFadeSettings;
    SBFAnimationSettings *_crossfadeSettings;
    SBFAnimationSettings *_iconGridFadeSettings;
}

+ (id)settingsControllerModule;
@property(retain, nonatomic) SBFAnimationSettings *iconGridFadeSettings; // @synthesize iconGridFadeSettings=_iconGridFadeSettings;
@property(nonatomic) _Bool fadesIconGrid; // @synthesize fadesIconGrid=_fadesIconGrid;
@property(retain, nonatomic) SBFAnimationSettings *crossfadeSettings; // @synthesize crossfadeSettings=_crossfadeSettings;
@property(nonatomic) _Bool crossfadeWithZoom; // @synthesize crossfadeWithZoom=_crossfadeWithZoom;
@property(retain, nonatomic) SBFAnimationSettings *outerFolderFadeSettings; // @synthesize outerFolderFadeSettings=_outerFolderFadeSettings;
- (void).cxx_destruct;
- (id)effectiveCrossfadeAnimationSettings;
- (void)setDefaultValues;

@end
