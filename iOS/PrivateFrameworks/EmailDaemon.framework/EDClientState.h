//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EDClientStateReporting-Protocol.h>
#import <EmailDaemon/EFLoggable-Protocol.h>

@class NSArray, NSString;

@interface EDClientState : NSObject <EDClientStateReporting, EFLoggable>
{
    _Bool _isForeground;
    _Bool _isRunningTests;
    NSArray *_visibleMailboxesObjectIds;
}

+ (id)sharedInstance;
+ (id)log;
- (void).cxx_destruct;
@property(nonatomic) _Bool isRunningTests; // @synthesize isRunningTests=_isRunningTests;
@property(readonly, nonatomic) NSArray *visibleMailboxesObjectIds; // @synthesize visibleMailboxesObjectIds=_visibleMailboxesObjectIds;
@property(readonly, nonatomic) _Bool isForeground; // @synthesize isForeground=_isForeground;
- (void)setClientIsRunningTests:(_Bool)arg1;
- (id)giveBoostWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)setClientIsInForeground:(_Bool)arg1;
- (void)setCurrentlyVisibleMailboxObjectIDs:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
