//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUIUserActionDiscoveringEnvironment-Protocol.h>

@class CNContactStore, CNUIIDSContactPropertyResolver, NSString;
@protocol CNCapabilities, CNLSApplicationWorkspace, CNMCProfileConnection, CNSchedulerProvider, CNTUCallProviderManager, CNUIDefaultUserActionFetcher;

@interface CNUIUserActionDiscoveringEnvironment : NSObject <CNUIUserActionDiscoveringEnvironment>
{
    id <CNLSApplicationWorkspace> _applicationWorkspace;
    id <CNTUCallProviderManager> _callProviderManager;
    CNUIIDSContactPropertyResolver *_idsContactPropertyResolver;
    id <CNMCProfileConnection> _profileConnection;
    id <CNCapabilities> _capabilities;
    CNContactStore *_contactStore;
    id <CNSchedulerProvider> _schedulerProvider;
    id <CNSchedulerProvider> _highLatencySchedulerProvider;
    id <CNUIDefaultUserActionFetcher> _defaultUserActionFetcher;
}

@property(retain, nonatomic) id <CNUIDefaultUserActionFetcher> defaultUserActionFetcher; // @synthesize defaultUserActionFetcher=_defaultUserActionFetcher;
@property(retain, nonatomic) id <CNSchedulerProvider> highLatencySchedulerProvider; // @synthesize highLatencySchedulerProvider=_highLatencySchedulerProvider;
@property(retain, nonatomic) id <CNSchedulerProvider> schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(retain, nonatomic) id <CNCapabilities> capabilities; // @synthesize capabilities=_capabilities;
@property(retain, nonatomic) id <CNMCProfileConnection> profileConnection; // @synthesize profileConnection=_profileConnection;
@property(retain, nonatomic) CNUIIDSContactPropertyResolver *idsContactPropertyResolver; // @synthesize idsContactPropertyResolver=_idsContactPropertyResolver;
@property(retain, nonatomic) id <CNTUCallProviderManager> callProviderManager; // @synthesize callProviderManager=_callProviderManager;
@property(retain, nonatomic) id <CNLSApplicationWorkspace> applicationWorkspace; // @synthesize applicationWorkspace=_applicationWorkspace;
- (void).cxx_destruct;
- (id)copyWithContactStore:(id)arg1;
- (id)initWithApplicationWorkspace:(id)arg1 callProviderManager:(id)arg2 idsContactPropertyResolver:(id)arg3 profileConnection:(id)arg4 contactStore:(id)arg5 schedulerProvider:(id)arg6 highLatencySchedulerProvider:(id)arg7 capabilities:(id)arg8 defaultUserActionFetcher:(id)arg9;
- (id)initWithIDSAvailablilityProvider:(id)arg1 schedulerProvider:(id)arg2 capabilities:(id)arg3 defaultUserActionFetcher:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
