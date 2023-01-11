//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Message/EFLoggable-Protocol.h>
#import <Message/EFPubliclyDescribable-Protocol.h>

@class MFMailMessageLibrary, MailAccount, NSMutableArray, NSString;
@protocol EFScheduler;

@interface MFLocalActionReplayHandler : NSObject <EFLoggable, EFPubliclyDescribable>
{
    _Bool _replayingActions;
    _Bool _needToCheckForNewActions;
    MFMailMessageLibrary *_library;
    MailAccount *_account;
    NSMutableArray *_actionsToReplay;
    id <EFScheduler> _replayScheduler;
}

+ (id)log;
- (void).cxx_destruct;
@property(nonatomic) _Bool needToCheckForNewActions; // @synthesize needToCheckForNewActions=_needToCheckForNewActions;
@property(readonly, nonatomic) id <EFScheduler> replayScheduler; // @synthesize replayScheduler=_replayScheduler;
@property(retain, nonatomic) NSMutableArray *actionsToReplay; // @synthesize actionsToReplay=_actionsToReplay;
@property(nonatomic) __weak MailAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) MFMailMessageLibrary *library; // @synthesize library=_library;
@property _Bool replayingActions; // @synthesize replayingActions=_replayingActions;
@property(readonly, copy, nonatomic) NSString *ef_publicDescription;
- (void)_checkForNewActions;
- (void)_replayAllActions;
- (void)addNewAction:(id)arg1;
- (void)newActionsAdded;
- (void)connectionEstablished;
- (id)initWithLibrary:(id)arg1 account:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
