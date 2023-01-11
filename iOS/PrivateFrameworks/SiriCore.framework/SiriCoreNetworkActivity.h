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
}

- (void).cxx_destruct;
- (void)_networkActivityRestart;
- (void)_networkActivityAbort;
- (void)_networkActivityState:(long long)arg1;
- (long long)parentLabel;
- (id)nwActivity;
- (void)stop;
- (void)removeConnection:(id)arg1;
- (void)addConnection:(id)arg1;
- (void)activate;
- (id)initWithLabel:(long long)arg1 parent:(id)arg2;

@end

