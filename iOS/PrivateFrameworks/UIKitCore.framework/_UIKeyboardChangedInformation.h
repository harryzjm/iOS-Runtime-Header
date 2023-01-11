//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>

@class BKSAnimationFenceHandle, NSString;

@interface _UIKeyboardChangedInformation : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _avoidIntersectability;
    _Bool _keyboardOnScreen;
    _Bool _shouldTakeSnapshot;
    NSString *_sourceSceneIdentityString;
    NSString *_sourceDisplayIdentifier;
    NSString *_sourceBundleIdentifier;
    BKSAnimationFenceHandle *_animationFence;
    struct CGRect _keyboardPosition;
    struct CGRect _keyboardPositionWithIAV;
    struct CGRect _keyboardPositionWithRemoteIAV;
}

+ (_Bool)supportsSecureCoding;
+ (id)informationForKeyboardUp:(struct CGRect)arg1 withIAV:(struct CGRect)arg2;
+ (id)informationForKeyboardDown;
+ (id)animationFence;
- (void).cxx_destruct;
@property(nonatomic) _Bool shouldTakeSnapshot; // @synthesize shouldTakeSnapshot=_shouldTakeSnapshot;
@property(readonly) _Bool keyboardOnScreen; // @synthesize keyboardOnScreen=_keyboardOnScreen;
@property struct CGRect keyboardPositionWithRemoteIAV; // @synthesize keyboardPositionWithRemoteIAV=_keyboardPositionWithRemoteIAV;
@property(readonly) struct CGRect keyboardPositionWithIAV; // @synthesize keyboardPositionWithIAV=_keyboardPositionWithIAV;
@property(readonly) struct CGRect keyboardPosition; // @synthesize keyboardPosition=_keyboardPosition;
@property(readonly, copy) BKSAnimationFenceHandle *animationFence; // @synthesize animationFence=_animationFence;
@property(readonly) _Bool avoidIntersectability; // @synthesize avoidIntersectability=_avoidIntersectability;
@property(copy, nonatomic) NSString *sourceBundleIdentifier; // @synthesize sourceBundleIdentifier=_sourceBundleIdentifier;
@property(copy, nonatomic) NSString *sourceDisplayIdentifier; // @synthesize sourceDisplayIdentifier=_sourceDisplayIdentifier;
@property(copy, nonatomic) NSString *sourceSceneIdentityString; // @synthesize sourceSceneIdentityString=_sourceSceneIdentityString;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)resetAnimationFencing;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithIntersectability:(_Bool)arg1;
- (id)copyWithoutFence;
- (id)copyWithoutIAV;
- (id)initWithKeyboardRect:(struct CGRect)arg1 iavPosition:(struct CGRect)arg2 onScreen:(_Bool)arg3 takeSnapshot:(_Bool)arg4 fence:(id)arg5;

@end
