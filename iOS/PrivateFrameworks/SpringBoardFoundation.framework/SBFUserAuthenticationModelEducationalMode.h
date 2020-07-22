//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardFoundation/SBFUserAuthenticationModel-Protocol.h>

@class NSString, SBFMobileKeyBag;
@protocol SBFUserAuthenticationModelDelegate;

@interface SBFUserAuthenticationModelEducationalMode : NSObject <SBFUserAuthenticationModel>
{
    SBFMobileKeyBag *_keybag;
    _Bool _pendingWipe;
    id <SBFUserAuthenticationModelDelegate> _delegate;
}

@property(nonatomic) id <SBFUserAuthenticationModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_refreshStateForMkbState:(id)arg1 notify:(_Bool)arg2;
- (id)_refreshStateAndNotify:(_Bool)arg1;
- (void)performPasswordTest:(CDUnknownBlockType)arg1;
- (void)noteNewMkbDeviceLockState:(id)arg1;
- (void)notePasscodeUnlockFailedWithError:(id)arg1;
- (void)notePasscodeUnlockSucceeded;
- (void)notePasscodeEntryCancelled;
- (void)notePasscodeEntryBegan;
- (void)synchronize;
@property(readonly, nonatomic) double timeUntilUnblockedSinceReferenceDate;
@property(readonly, nonatomic, getter=isPermanentlyBlocked) _Bool permanentlyBlocked;
@property(readonly, nonatomic, getter=isTemporarilyBlocked) _Bool temporarilyBlocked;
- (id)initWithKeyBag:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

