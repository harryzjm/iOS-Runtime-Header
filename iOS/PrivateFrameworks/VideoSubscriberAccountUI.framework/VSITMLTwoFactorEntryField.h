//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideoSubscriberAccountUI/IKAppKeyboardDelegate-Protocol.h>

@class IKTextFieldElement, NSString;

__attribute__((visibility("hidden")))
@interface VSITMLTwoFactorEntryField <IKAppKeyboardDelegate>
{
    IKTextFieldElement *_associatedTextFieldElement;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IKTextFieldElement *associatedTextFieldElement; // @synthesize associatedTextFieldElement=_associatedTextFieldElement;
- (void)textDidChangeForKeyboard:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
