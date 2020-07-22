//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeSharing/NSNetServiceBrowserDelegate-Protocol.h>
#import <HomeSharing/NSNetServiceDelegate-Protocol.h>

@class NSMutableArray, NSNetServiceBrowser, NSString;
@protocol HSBrowserDelegate, OS_dispatch_queue;

@interface HSBrowser : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate>
{
    long long _browserType;
    NSString *_homeSharingGroupID;
    id <HSBrowserDelegate> _delegate;
    NSMutableArray *_availableLibraries;
    NSMutableArray *_resolvingServices;
    NSMutableArray *_librariesPendingRemoval;
    NSObject<OS_dispatch_queue> *_serviceBrowserQueue;
    NSString *_serviceType;
    NSNetServiceBrowser *_serviceBrowser;
}

+ (id)homeSharingBrowserWithGroupID:(id)arg1;
@property(retain, nonatomic) NSNetServiceBrowser *serviceBrowser; // @synthesize serviceBrowser=_serviceBrowser;
@property(readonly, copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serviceBrowserQueue; // @synthesize serviceBrowserQueue=_serviceBrowserQueue;
@property(retain, nonatomic) NSMutableArray *librariesPendingRemoval; // @synthesize librariesPendingRemoval=_librariesPendingRemoval;
@property(retain, nonatomic) NSMutableArray *resolvingServices; // @synthesize resolvingServices=_resolvingServices;
@property(retain, nonatomic) NSMutableArray *availableLibraries; // @synthesize availableLibraries=_availableLibraries;
@property(nonatomic) __weak id <HSBrowserDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *homeSharingGroupID; // @synthesize homeSharingGroupID=_homeSharingGroupID;
@property(readonly, nonatomic) long long browserType; // @synthesize browserType=_browserType;
- (void).cxx_destruct;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)netServiceDidResolveAddress:(id)arg1;
- (void)_removalTimerFired:(id)arg1;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(_Bool)arg3;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(_Bool)arg3;
- (void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2;
- (void)stop;
- (void)start;
- (id)initWithBrowserType:(long long)arg1 groupID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
