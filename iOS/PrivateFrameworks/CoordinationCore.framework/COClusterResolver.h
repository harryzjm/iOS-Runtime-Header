//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class COCluster, NSArray, NSString;
@protocol COClusterResolverDelegate;

__attribute__((visibility("hidden")))
@interface COClusterResolver : NSObject
{
    struct os_unfair_lock_s _lock;
    _Bool _activatedCluster;
    _Bool _bootstrapCompleted;
    COCluster *_cluster;
    id <COClusterResolverDelegate> _delegate;
    NSString *_currentIdentifier;
    NSArray *_waitingForBootstrap;
}

+ (id)resolverForCluster:(id)arg1 delegate:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *waitingForBootstrap; // @synthesize waitingForBootstrap=_waitingForBootstrap;
@property(nonatomic) _Bool bootstrapCompleted; // @synthesize bootstrapCompleted=_bootstrapCompleted;
@property(nonatomic) _Bool activatedCluster; // @synthesize activatedCluster=_activatedCluster;
@property(retain, nonatomic) NSString *currentIdentifier; // @synthesize currentIdentifier=_currentIdentifier;
@property(readonly, nonatomic) __weak id <COClusterResolverDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) COCluster *cluster; // @synthesize cluster=_cluster;
- (void)_withLock:(CDUnknownBlockType)arg1;
- (void)_delegateNotifyClusterIdentifierChanged:(id)arg1;
- (_Bool)_updateIdentifier:(id)arg1;
- (void)_invokeBootstrapBlocks;
- (void)_activate;
- (void)activate;
- (id)description;
- (id)_initWithCluster:(id)arg1 delegate:(id)arg2;

@end

