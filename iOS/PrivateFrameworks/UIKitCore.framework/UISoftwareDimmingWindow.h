//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIWindow.h"

__attribute__((visibility("hidden")))
@interface UISoftwareDimmingWindow : UIWindow
{
    float _overlayLevel;
}

@property(nonatomic) float overlayLevel; // @synthesize overlayLevel=_overlayLevel;
- (id)_roleHint;
- (void)updateOverlayColor;
- (_Bool)_ignoresHitTest;
- (id)initWithFrame:(struct CGRect)arg1;

@end

