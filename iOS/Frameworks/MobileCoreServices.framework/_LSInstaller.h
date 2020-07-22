//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <MobileCoreServices/LSInstallationServiceProtocol-Protocol.h>

@class NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _LSInstaller : NSObject <LSInstallationServiceProtocol>
{
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_databaseQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *databaseQueue; // @synthesize databaseQueue=_databaseQueue;
- (void)sendCallbackDeliveryComplete;
- (void)sendCallbackWithDictionary:(id)arg1;
- (void)installApplication:(id)arg1 atURL:(id)arg2 withOptions:(id)arg3 installType:(unsigned long long)arg4 reply:(CDUnknownBlockType)arg5;
- (void)_doinstallApplication:(id)arg1 atURL:(id)arg2 withOptions:(id)arg3 installType:(unsigned long long)arg4 reply:(CDUnknownBlockType)arg5;
- (id)installPackage:(id)arg1 withIdentifier:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (_Bool)registerBundle:(id)arg1 withOptions:(id)arg2;
- (_Bool)dispatchRegistration:(id)arg1;
- (void)uninstallApplication:(id)arg1 withOptions:(id)arg2 uninstallType:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;
- (void)_douninstallApplication:(id)arg1 withOptions:(id)arg2 uninstallType:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;
- (_Bool)unregisterBundle:(id)arg1 placeholderOnly:(_Bool)arg2 notification:(int *)arg3;
- (id)uninstallBundle:(id)arg1 withOptions:(id)arg2 error:(id *)arg3;
- (void)_postProcessingForApp:(id)arg1 notification:(int)arg2;
- (void)_preflightAppDeletion:(id)arg1;
- (int)getNotificationTypeForOperation:(unsigned long long)arg1;
- (_Bool)validateEntitlementsForInstall:(_Bool)arg1 options:(id)arg2 error:(id *)arg3;
@property(nonatomic) __weak NSXPCConnection *xpcConnection;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
