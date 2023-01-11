//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSMutableDictionary;
@protocol NRNSXPCConnectionProtocol;

@interface NRRegistryClient
{
    NSMutableDictionary *_diffIndexObservers;
    _Bool _optimizeGetState;
    _Bool _outstandingRegistryQuery;
    int _devicesUpdateCounterNotifyToken_dispatch;
    int _devicesUpdateCounterNotifyToken_check;
    id <NRNSXPCConnectionProtocol> _connection;
    unsigned long long _tokenValue;
    unsigned long long _lastDevicesUpdateCounterNotifyTokenValue;
    unsigned long long _backoffDuration;
    NSMutableArray *_registryQueryCompletionBlockEntries;
}

+ (Class)proxyClass;
+ (Class)xpcConnectionClass;
- (void).cxx_destruct;
- (void)invalidate;
- (void)setCollection:(id)arg1;
- (void)_queryDataAsyncIfNeededWithBlock:(CDUnknownBlockType)arg1;
- (void)removeDiffIndexObserver:(id)arg1;
- (id)addDiffIndexObserverWithWriteBlock:(CDUnknownBlockType)arg1;
- (void)_grabRegistryWithWriteBlockAsync:(CDUnknownBlockType)arg1;
- (void)grabRegistryWithWriteBlockAsync:(CDUnknownBlockType)arg1;
- (void)grabRegistryWithReadBlockAsync:(CDUnknownBlockType)arg1;
- (void)_grabRegistryWithReadBlock:(CDUnknownBlockType)arg1;
- (void)grabRegistryWithReadBlock:(CDUnknownBlockType)arg1;
- (void)syncGrabRegistryWithReadBlock:(CDUnknownBlockType)arg1;
- (void)_connectToDaemon;
@property(readonly, retain, nonatomic) id <NRNSXPCConnectionProtocol> rawConnection;
@property(readonly, retain, nonatomic) id <NRNSXPCConnectionProtocol> connection;
- (_Bool)daemonIdle;
@property(readonly, nonatomic) unsigned long long devicesUpdateCounter;
- (id)initWithParameters:(id)arg1;

@end
