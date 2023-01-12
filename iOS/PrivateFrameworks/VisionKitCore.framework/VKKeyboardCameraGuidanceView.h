//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, UILabel, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface VKKeyboardCameraGuidanceView : UIView
{
    _Bool _didAddConstraints;
    UIVisualEffectView *_blurView;
    UILabel *_label;
    struct UIEdgeInsets _contentEdgeInsets;
    double _visibleStartTime;
    double _lastVisibleTime;
    unsigned long long _state;
    NSString *_text;
    double _preferredMaxLayoutWidth;
}

- (void).cxx_destruct;
@property(nonatomic) double preferredMaxLayoutWidth; // @synthesize preferredMaxLayoutWidth=_preferredMaxLayoutWidth;
- (void)_reallyHideGuidance;
- (void)_reallyShowGuidance;
- (void)hideGuidance;
- (void)showGuidanceWithText:(id)arg1;
- (void)didMoveToSuperview;
- (id)viewForFirstBaselineLayout;
- (id)initWithFrame:(struct CGRect)arg1;

@end
