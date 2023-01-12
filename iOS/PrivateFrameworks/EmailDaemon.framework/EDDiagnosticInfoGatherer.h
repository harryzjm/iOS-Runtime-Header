//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EFLoggable-Protocol.h>
#import <EmailDaemon/EMDiagnosticInfoGathererInterface-Protocol.h>

@class EDFetchController, EDPersistence, NSString;
@protocol EDServerRemoteClientsProvider, EFScheduler, EMDiagnosticInfoProvidingXPC;

@interface EDDiagnosticInfoGatherer : NSObject <EFLoggable, EMDiagnosticInfoGathererInterface>
{
    id <EMDiagnosticInfoProvidingXPC> _diagnosticInfoProvider;
    id <EDServerRemoteClientsProvider> _remoteClientsProvider;
    EDFetchController *_fetchController;
    id <EFScheduler> _gathererQueue;
    EDPersistence *_persistence;
}

+ (id)log;
- (void).cxx_destruct;
@property(retain, nonatomic) EDPersistence *persistence; // @synthesize persistence=_persistence;
@property(retain, nonatomic) id <EFScheduler> gathererQueue; // @synthesize gathererQueue=_gathererQueue;
@property(readonly, nonatomic) EDFetchController *fetchController; // @synthesize fetchController=_fetchController;
@property(retain, nonatomic) id <EDServerRemoteClientsProvider> remoteClientsProvider; // @synthesize remoteClientsProvider=_remoteClientsProvider;
@property(retain, nonatomic) id <EMDiagnosticInfoProvidingXPC> diagnosticInfoProvider; // @synthesize diagnosticInfoProvider=_diagnosticInfoProvider;
- (void)indexStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)gatherDiagnosticsWithOptions:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchControllerStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)registerDiagnosticInfoProvider:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithFetchController:(id)arg1 remoteClientsProvider:(id)arg2 persistence:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
