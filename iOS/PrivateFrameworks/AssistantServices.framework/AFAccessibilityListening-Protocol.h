//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssistantServices/NSObject-Protocol.h>

@class AFAccessibilityObserver;

@protocol AFAccessibilityListening <NSObject>
- (void)accessibilityObserver:(AFAccessibilityObserver *)arg1 didChangeVibrationDisabledPreference:(_Bool)arg2;
- (void)accessibilityObserver:(AFAccessibilityObserver *)arg1 didChangeVoiceOverTouchEnabledPreference:(_Bool)arg2;
@end
