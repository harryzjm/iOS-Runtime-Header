//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionStreamable-Protocol.h>
#import <SpringBoard/NSCopying-Protocol.h>
#import <SpringBoard/NSMutableCopying-Protocol.h>

@class BKSHIDEventDeferringTarget, FBSSceneIdentityToken, NSString, _SBRecentlyUsedSceneIdentityCache;

@interface _SBKeyboardFocusPolicy : NSObject <BSDescriptionStreamable, NSCopying, NSMutableCopying>
{
    BKSHIDEventDeferringTarget *_keyboardFocusTarget;
    FBSSceneIdentityToken *_overrideSceneIdentityToken;
    _SBRecentlyUsedSceneIdentityCache *_recentlyUsedScenes;
    long long _selectionPolicy;
    unsigned long long _policyGeneration;
    _Bool _shouldSuppressRemoteDeferring;
    _Bool _cameraIsHosted;
}

+ (id)new;
+ (id)build:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long policyGeneration; // @synthesize policyGeneration=_policyGeneration;
@property(readonly, nonatomic) _Bool cameraIsHosted;
@property(readonly, nonatomic) _Bool shouldSuppressRemoteDeferring;
@property(readonly, nonatomic) long long advicePolicy;
@property(readonly, copy, nonatomic) _SBRecentlyUsedSceneIdentityCache *recentlyUsedScenes;
@property(readonly, nonatomic) FBSSceneIdentityToken *overrideSceneIdentityToken;
@property(readonly, nonatomic) BKSHIDEventDeferringTarget *keyboardFocusTarget;
- (void)appendDescriptionToFormatter:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
