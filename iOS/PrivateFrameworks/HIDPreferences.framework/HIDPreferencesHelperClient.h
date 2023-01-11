//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HIDPreferences/HIDPreferencesProtocol-Protocol.h>

@class HIDPreferencesHelperListener, NSString;
@protocol OS_xpc_object;

@interface HIDPreferencesHelperClient : NSObject <HIDPreferencesProtocol>
{
    NSObject<OS_xpc_object> *_connection;
    HIDPreferencesHelperListener *_listener;
}

- (void).cxx_destruct;
- (void)setDomain:(id)arg1 value:(id)arg2 domain:(id)arg3;
- (void)copyDomain:(id)arg1 domain:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)setMultiple:(id)arg1 keysToRemove:(id)arg2 user:(id)arg3 host:(id)arg4 domain:(id)arg5;
- (void)copyMultiple:(id)arg1 user:(id)arg2 host:(id)arg3 domain:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)synchronize:(id)arg1 host:(id)arg2 domain:(id)arg3;
- (void)copy:(id)arg1 user:(id)arg2 host:(id)arg3 domain:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)set:(id)arg1 value:(id)arg2 user:(id)arg3 host:(id)arg4 domain:(id)arg5;
- (void)invalidateConnection;
- (id)handleMessage:(id)arg1;
- (_Bool)setupConnection;
- (id)initWithConnection:(id)arg1 listener:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
