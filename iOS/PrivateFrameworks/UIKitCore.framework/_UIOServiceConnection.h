//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSServiceConnection, NSHashTable, NSString, UIOServer;
@protocol BSServiceConnectionHost;

__attribute__((visibility("hidden")))
@interface _UIOServiceConnection : NSObject
{
    NSHashTable *_observers;
    BSServiceConnection<BSServiceConnectionHost> *_connection;
    UIOServer *_server;
}

+ (id)connectionWithBSServiceConnection:(id)arg1 toServer:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak UIOServer *server; // @synthesize server=_server;
@property(readonly, nonatomic) __weak BSServiceConnection<BSServiceConnectionHost> *connection; // @synthesize connection=_connection;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)serviceConnectionDidInvalidate;
- (void)removeAllObservers;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)sendAction:(id)arg1;
- (oneway void)performOverlayServerAction:(id)arg1;
@property(readonly, nonatomic) NSString *bundleIdentifier;
@property(readonly, nonatomic) long long pid;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

