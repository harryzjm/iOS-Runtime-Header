//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol OS_nw_activity;

@interface SiriCoreNetworkActivity : NSObject
{
    NSObject<OS_nw_activity> *_activity;
    long long _state;
    long long _parentLabel;
    NSMutableSet *_connections;
    _Bool _hasStarted;
}

- (void).cxx_destruct;
- (int)_completionReasonToNWActivityCompletionReason:(long long)arg1;
- (void)_networkActivityRestart;
- (void)_networkActivityAbort;
- (void)_networkActivityState:(long long)arg1;
- (void)setHasStarted:(_Bool)arg1;
- (_Bool)hasStarted;
- (long long)parentLabel;
- (id)nwActivityToken;
- (id)nwActivity;
- (void)stopWithCompletionReason:(long long)arg1;
- (void)removeConnection:(id)arg1;
- (void)addConnection:(id)arg1;
- (void)activate;
- (id)initWithLabel:(long long)arg1 parent:(id)arg2;

@end
