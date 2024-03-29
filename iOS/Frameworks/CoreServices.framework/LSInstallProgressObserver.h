//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface LSInstallProgressObserver : NSObject
{
    NSXPCConnection *_connection;
}

- (void).cxx_destruct;
@property(nonatomic) __weak NSXPCConnection *connection; // @synthesize connection=_connection;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (void)installationFailedForApplication:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)installationEndedForApplication:(id)arg1 withState:(unsigned long long)arg2;
- (void)setProgressProportionsByPhase:(id)arg1 forInstallOfApplicationWithIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendNotification:(int)arg1 forApplicationWithBundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendNotification:(int)arg1 forApplications:(id)arg2 withPlugins:(_Bool)arg3;
- (void)createInstallProgressForApplication:(id)arg1 withPhase:(unsigned long long)arg2 andPublishingString:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)_lsPing:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)removeObserver;
- (void)addObserver;
- (id)initWithConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

