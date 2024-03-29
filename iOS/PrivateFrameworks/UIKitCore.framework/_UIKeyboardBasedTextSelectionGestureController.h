//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UIKeyboardBasedTextSelectionGestureController
{
    _Bool _delayForceMagnify;
    _Bool _didLongForcePress;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool didLongForcePress; // @synthesize didLongForcePress=_didLongForcePress;
@property(nonatomic) _Bool delayForceMagnify; // @synthesize delayForceMagnify=_delayForceMagnify;
- (_Bool)allowOneFingerDeepPress;
- (_Bool)oneFingerForcePressShouldCancelTouchesInView;
- (_Bool)oneFingerForcePressShouldFailWithoutForce;
- (double)oneFingerForcePressMinimumDuration;
- (void)_cleanupDeadGesturesIfNecessary;
- (Class)textInteractionClass;

@end

