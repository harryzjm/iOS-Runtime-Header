//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIWindowScene.h>

@interface UIWindowScene (AVAdditions)
+ (_Bool)avkit_supportsInteractiveCounterRotationDismissals;
- (void)avkit_disableTouchCancellation:(_Bool)arg1 forRotationActions:(CDUnknownBlockType)arg2;
- (void)_avkit_setPreferredRefreshRate:(double)arg1 HDRMode:(long long)arg2 overscanCompensation:(long long)arg3;
- (_Bool)avkit_screenHasWindowsExcludingWindow:(id)arg1;
- (long long)avkit_screenType;
- (id)avkit_asWindowScene;
@end

