//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <KeyboardArbiter/_UIKBArbiterDelegateProtocol-Protocol.h>

@class FBSSceneIdentityToken;

@protocol _UIKBArbiterDelegateInputDestination <_UIKBArbiterDelegateProtocol>
- (void)queue_activeProcessResignWithCompletion:(void (^)(void))arg1;
- (void)queue_sceneBecameFocused:(FBSSceneIdentityToken *)arg1 withCompletion:(void (^)(void))arg2;
- (void)queue_setKeyboardDisabled:(_Bool)arg1 withCompletion:(void (^)(void))arg2;
@end

