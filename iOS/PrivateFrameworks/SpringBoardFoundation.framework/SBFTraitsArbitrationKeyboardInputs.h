//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardFoundation/BSDescriptionProviding-Protocol.h>
#import <SpringBoardFoundation/NSCopying-Protocol.h>

@class NSString;

@interface SBFTraitsArbitrationKeyboardInputs : NSObject <NSCopying, BSDescriptionProviding>
{
    NSString *_keyboardOwningParticipantUniqueIdentifier;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *keyboardOwningParticipantUniqueIdentifier; // @synthesize keyboardOwningParticipantUniqueIdentifier=_keyboardOwningParticipantUniqueIdentifier;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithKeyboardOwningParticipantUniqueIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
