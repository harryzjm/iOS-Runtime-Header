//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface AVKitGlobalSettings : NSObject
{
    _Bool _secondGenerationPlayerEnabled;
    _Bool _playbackSpeedControlEnabled;
    _Bool _visualAnalysisEnabled;
    _Bool _visualAnalysisSupported;
    _Bool _isQuickLook;
    _Bool _isAVKitMacPlayer;
    _Bool _isPhotosApp;
    _Bool _isTVApp;
    _Bool _extendedVisualAnalysisEnabled;
    _Bool _subjectLiftGestureEnabled;
    _Bool _contentTabsEnabled;
    _Bool _fluidSliderEnabled;
    _Bool _overVideoScrubbingGestureEnabled;
    _Bool _attributedContentTitlesSupported;
}

+ (_Bool)_overVideoScrubbingGestureEnabled;
+ (id)shared;
@property(readonly, nonatomic) _Bool attributedContentTitlesSupported; // @synthesize attributedContentTitlesSupported=_attributedContentTitlesSupported;
@property(readonly, nonatomic) _Bool overVideoScrubbingGestureEnabled; // @synthesize overVideoScrubbingGestureEnabled=_overVideoScrubbingGestureEnabled;
@property(readonly, nonatomic) _Bool fluidSliderEnabled; // @synthesize fluidSliderEnabled=_fluidSliderEnabled;
@property(readonly, nonatomic) _Bool contentTabsEnabled; // @synthesize contentTabsEnabled=_contentTabsEnabled;
@property(readonly, nonatomic) _Bool subjectLiftGestureEnabled; // @synthesize subjectLiftGestureEnabled=_subjectLiftGestureEnabled;
@property(readonly, nonatomic) _Bool extendedVisualAnalysisEnabled; // @synthesize extendedVisualAnalysisEnabled=_extendedVisualAnalysisEnabled;
@property(readonly, nonatomic) _Bool isTVApp; // @synthesize isTVApp=_isTVApp;
@property(readonly, nonatomic) _Bool isPhotosApp; // @synthesize isPhotosApp=_isPhotosApp;
@property(readonly, nonatomic) _Bool isAVKitMacPlayer; // @synthesize isAVKitMacPlayer=_isAVKitMacPlayer;
@property(readonly, nonatomic) _Bool isQuickLook; // @synthesize isQuickLook=_isQuickLook;
@property(readonly, nonatomic) _Bool visualAnalysisSupported; // @synthesize visualAnalysisSupported=_visualAnalysisSupported;
@property(readonly, nonatomic) _Bool visualAnalysisEnabled; // @synthesize visualAnalysisEnabled=_visualAnalysisEnabled;
@property(readonly, nonatomic) _Bool playbackSpeedControlEnabled; // @synthesize playbackSpeedControlEnabled=_playbackSpeedControlEnabled;
@property(nonatomic) _Bool secondGenerationPlayerEnabled; // @synthesize secondGenerationPlayerEnabled=_secondGenerationPlayerEnabled;
- (id)init;

@end

