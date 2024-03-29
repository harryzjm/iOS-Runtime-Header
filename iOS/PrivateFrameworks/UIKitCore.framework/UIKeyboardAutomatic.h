//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIKeyboard.h"

@class _UIStringAndPositionPair;
@protocol UITextCursorAssertion;

__attribute__((visibility("hidden")))
@interface UIKeyboardAutomatic : UIKeyboard
{
    _Bool showsCandidateBar;
    _Bool showsCandidateInline;
    _Bool receivedCandidatesInCurrentInputMode;
    id <UITextCursorAssertion> _blinkAssertion;
    _UIStringAndPositionPair *_lastMatchedSupplementalCandidate;
    _UIStringAndPositionPair *_pendingSupplementalCandidateToInsert;
    unsigned long long _lastChooseSupplementalItemToInsertCallbackIdentifier;
}

+ (id)activeInstance;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long lastChooseSupplementalItemToInsertCallbackIdentifier; // @synthesize lastChooseSupplementalItemToInsertCallbackIdentifier=_lastChooseSupplementalItemToInsertCallbackIdentifier;
@property(retain, nonatomic) _UIStringAndPositionPair *pendingSupplementalCandidateToInsert; // @synthesize pendingSupplementalCandidateToInsert=_pendingSupplementalCandidateToInsert;
@property(retain, nonatomic) _UIStringAndPositionPair *lastMatchedSupplementalCandidate; // @synthesize lastMatchedSupplementalCandidate=_lastMatchedSupplementalCandidate;
@property(retain, nonatomic) id <UITextCursorAssertion> blinkAssertion; // @synthesize blinkAssertion=_blinkAssertion;
@property(nonatomic) _Bool receivedCandidatesInCurrentInputMode; // @synthesize receivedCandidatesInCurrentInputMode;
@property(nonatomic) _Bool showsCandidateInline; // @synthesize showsCandidateInline;
@property(nonatomic) _Bool showsCandidateBar; // @synthesize showsCandidateBar;
- (void)activate;
- (_Bool)_isAutomaticKeyboard;
- (void)didSuspend:(id)arg1;
- (void)willResume:(id)arg1;
- (void)implBoundsHeightChangeDone:(double)arg1 suppressNotification:(_Bool)arg2;
- (void)prepareForImplBoundsHeightChange:(double)arg1 suppressNotification:(_Bool)arg2;
- (struct UIPeripheralAnimationGeometry)geometryForHeightDelta:(double)arg1;
- (_Bool)isAutomatic;
- (_Bool)isActive;
- (void)maximize;
- (void)minimize;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

