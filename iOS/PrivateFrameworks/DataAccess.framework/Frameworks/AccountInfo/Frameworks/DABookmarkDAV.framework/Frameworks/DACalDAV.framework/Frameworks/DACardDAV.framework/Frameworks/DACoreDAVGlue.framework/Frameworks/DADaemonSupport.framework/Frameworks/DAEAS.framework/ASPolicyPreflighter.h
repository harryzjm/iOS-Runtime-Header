//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class ASAccount, ASPolicy, ASTaskManager, NSString;
@protocol ASPolicyPreflighterDelegate;

@interface ASPolicyPreflighter : NSObject
{
    _Bool _invalidated;
    ASAccount *_account;
    id <ASPolicyPreflighterDelegate> _delegate;
    id _contextInfo;
    ASPolicy *_policy;
    ASPolicy *_acknowledgedPolicy;
    NSString *_originalKey;
    ASTaskManager *_taskManager;
}

@property(nonatomic) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(retain, nonatomic) ASTaskManager *taskManager; // @synthesize taskManager=_taskManager;
@property(copy, nonatomic) NSString *originalKey; // @synthesize originalKey=_originalKey;
@property(retain, nonatomic) ASPolicy *acknowledgedPolicy; // @synthesize acknowledgedPolicy=_acknowledgedPolicy;
@property(retain, nonatomic) ASPolicy *policy; // @synthesize policy=_policy;
@property(nonatomic) __weak id contextInfo; // @synthesize contextInfo=_contextInfo;
@property(nonatomic) __weak id <ASPolicyPreflighterDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak ASAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)cancelPendingPreflightRequest;
- (void)acknowledgeAccountOnlyRemoteWipeWithSuccess:(_Bool)arg1;
- (void)acknowledgeIntentionToRemoteWipe;
- (void)acknowledgePolicyCompliance;
- (void)startPreflight;
- (void)provisionTask:(id)arg1 wipeRequested:(_Bool)arg2 accountOnlyRipeRequested:(_Bool)arg3 policies:(id)arg4 status:(int)arg5;
- (void)provisionTask:(id)arg1 failedWithError:(id)arg2;
- (id)_originalKey;
- (id)initWithAccount:(id)arg1 policyKey:(id)arg2;
- (void)dealloc;
- (void)invalidate;

@end
