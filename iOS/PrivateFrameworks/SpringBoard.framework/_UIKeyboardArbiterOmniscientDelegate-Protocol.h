//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class FBSSceneIdentityToken;
@protocol _UIKeyboardArbiterAdvisor;

@protocol _UIKeyboardArbiterOmniscientDelegate <NSObject>
- (FBSSceneIdentityToken *)keyboardArbiterAdvisor:(id <_UIKeyboardArbiterAdvisor>)arg1 requestedSceneFocusDeliberationForFocusedPid:(int)arg2;

@optional
- (_Bool)shouldKeyboardBeWindowSizedForHostWithIdentity:(FBSSceneIdentityToken *)arg1;
@end

