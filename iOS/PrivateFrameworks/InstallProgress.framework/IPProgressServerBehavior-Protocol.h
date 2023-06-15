//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <InstallProgress/NSObject-Protocol.h>

@class IPInstallableProgressData, LSApplicationIdentity, NSObject;
@protocol IPProgressServerBehaviorDelegate, OS_dispatch_queue;

@protocol IPProgressServerBehavior <NSObject>
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property(nonatomic) __weak id <IPProgressServerBehaviorDelegate> delegate;
- (void)identityWasUninstalled:(LSApplicationIdentity *)arg1;
- (void)progressForIdentity:(LSApplicationIdentity *)arg1 finishedWithState:(unsigned long long)arg2;
- (void)progressForIdentity:(LSApplicationIdentity *)arg1 changed:(IPInstallableProgressData *)arg2;
- (void)progressForIdentityInitiated:(LSApplicationIdentity *)arg1;
- (void)resume;
@end

