//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SilexWeb/SWDatastoreObserver-Protocol.h>
#import <SilexWeb/SWDatastoreSynchronizationManager-Protocol.h>
#import <SilexWeb/SWMessageHandler-Protocol.h>

@class NSString;
@protocol SWDatastoreFactory, SWDatastoreManager, SWLogger, SWScriptsManager, SWSessionManager;

@interface SWDatastoreSynchronizationManager : NSObject <SWMessageHandler, SWDatastoreObserver, SWDatastoreSynchronizationManager>
{
    id <SWDatastoreManager> _datastoreManager;
    id <SWDatastoreFactory> _settingsFactory;
    id <SWScriptsManager> _scriptsManager;
    id <SWSessionManager> _sessionManager;
    id <SWLogger> _logger;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SWLogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SWSessionManager> sessionManager; // @synthesize sessionManager=_sessionManager;
@property(readonly, nonatomic) id <SWScriptsManager> scriptsManager; // @synthesize scriptsManager=_scriptsManager;
@property(readonly, nonatomic) id <SWDatastoreFactory> settingsFactory; // @synthesize settingsFactory=_settingsFactory;
@property(readonly, nonatomic) id <SWDatastoreManager> datastoreManager; // @synthesize datastoreManager=_datastoreManager;
- (void)datastoreManager:(id)arg1 didChangeFromDatastore:(id)arg2 originatingSession:(id)arg3;
- (void)didReceiveMessage:(id)arg1 securityOrigin:(id)arg2;
- (void)dealloc;
- (id)initWithDatastoreManager:(id)arg1 settingsFactory:(id)arg2 scriptsManager:(id)arg3 messageHandlerManager:(id)arg4 sessionManager:(id)arg5 logger:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
