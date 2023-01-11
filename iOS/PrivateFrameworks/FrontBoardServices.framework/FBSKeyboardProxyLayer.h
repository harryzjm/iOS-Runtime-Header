//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FBSSceneIdentityToken;

@interface FBSKeyboardProxyLayer
{
    FBSSceneIdentityToken *_keyboardOwner;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) FBSSceneIdentityToken *keyboardOwner; // @synthesize keyboardOwner=_keyboardOwner;
- (_Bool)isKeyboardProxyLayer;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)_succinctDescription;
- (long long)alignment;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithLevel:(double)arg1 keyboardOwner:(id)arg2;

@end
