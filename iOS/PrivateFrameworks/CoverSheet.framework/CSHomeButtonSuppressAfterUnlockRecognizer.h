//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoverSheet/SBHomeButtonSuppressAfterUnlockRecognizer-Protocol.h>

@class BSTimer, NSString;
@protocol SBHomeButtonSuppressAfterUnlockRecognizerDelegate;

@interface CSHomeButtonSuppressAfterUnlockRecognizer : NSObject <SBHomeButtonSuppressAfterUnlockRecognizer>
{
    id <SBHomeButtonSuppressAfterUnlockRecognizerDelegate> _delegate;
    BSTimer *_timer;
    _Bool _done;
}

@property(nonatomic) __weak id <SBHomeButtonSuppressAfterUnlockRecognizerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_timerFired;
- (void)_invalidateTimer;
- (void)_startTimer;
- (void)_requestEndOfSuppression;
- (void)handleBiometricEvent:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
