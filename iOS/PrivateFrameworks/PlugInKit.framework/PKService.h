//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PlugInKit/NSXPCListenerDelegate-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, NSXPCListener, PKServicePersonality;
@protocol OS_dispatch_queue, PKServiceDelegate;

@interface PKService : NSObject <NSXPCListenerDelegate>
{
    _Bool _shared;
    id <PKServiceDelegate> _delegate;
    NSXPCListener *_serviceListener;
    NSMutableDictionary *_personalities;
    PKServicePersonality *_solePersonality;
    NSObject<OS_dispatch_queue> *__sync;
    NSArray *_subsystems;
}

+ (int)_defaultRun:(int)arg1 arguments:(const char **)arg2;
+ (id)defaultService;
+ (void)main;
@property _Bool shared; // @synthesize shared=_shared;
@property(retain) NSArray *subsystems; // @synthesize subsystems=_subsystems;
@property(retain) NSObject<OS_dispatch_queue> *_sync; // @synthesize _sync=__sync;
@property(retain) PKServicePersonality *solePersonality; // @synthesize solePersonality=_solePersonality;
@property(retain) NSMutableDictionary *personalities; // @synthesize personalities=_personalities;
@property(retain) NSXPCListener *serviceListener; // @synthesize serviceListener=_serviceListener;
@property(retain) id <PKServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)checkEnvironment:(id)arg1;
- (_Bool)unregisterPersonality:(id)arg1;
- (void)registerPersonality:(id)arg1;
- (id)personalityNamed:(id)arg1 forHostPid:(int)arg2;
- (id)personalityNamed:(id)arg1;
- (id)connectionForPlugInNamed:(id)arg1;
- (id)embeddedPrincipalForPlugInNamed:(id)arg1;
- (id)hostPrincipalForPlugInNamed:(id)arg1;
- (id)plugInPrincipalForPlugInNamed:(id)arg1;
- (id)defaultsForPlugInNamed:(id)arg1;
- (void)copyAppStoreReceipt:(CDUnknownBlockType)arg1;
- (void)launchContainingApplicationForPlugInNamed:(id)arg1;
- (id)discoverSubsystemNamed:(id)arg1 logMissing:(_Bool)arg2;
- (void)mergeSubsystemList:(id)arg1 from:(id)arg2;
- (void)mergeSubsystems:(id)arg1 from:(id)arg2;
- (id)configuredSubsystemList;
- (void)discoverSubsystems;
- (_Bool)_processDefaultSubsystemName:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)run;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

