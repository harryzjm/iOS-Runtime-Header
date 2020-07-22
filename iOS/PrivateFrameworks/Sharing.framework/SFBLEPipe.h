//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CBCentralManager, CBScalablePipe, CBScalablePipeManager, NSData, NSMutableData, NSString, SFBLEData;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SFBLEPipe : NSObject
{
    _Bool _activateCalled;
    CBCentralManager *_btCentral;
    struct channel *_btChannel;
    _Bool _btConnected;
    _Bool _btConnecting;
    _Bool _btEndpointRegistering;
    _Bool _btEndpointRegistered;
    int _btFD;
    unsigned char _btReadHeader[4];
    NSMutableData *_btReadPayload;
    unsigned long long _btReadLen;
    unsigned long long _btReadOffset;
    struct channel_ring_desc *_btReadRing;
    NSObject<OS_dispatch_source> *_btReadSource;
    NSData *_btWriteData;
    SFBLEData *_btWriteItem;
    unsigned long long _btWriteLen;
    unsigned long long _btWriteOffset;
    const char *_btWritePtr;
    struct NSMutableArray *_btWriteQueue;
    struct channel_ring_desc *_btWriteRing;
    NSObject<OS_dispatch_source> *_btWriteSource;
    _Bool _btWriteSuspended;
    CBScalablePipe *_btPipe;
    CBScalablePipeManager *_btPipeManager;
    struct NSMutableDictionary *_frameHandlers;
    _Bool _invalidateCalled;
    struct LogCategory *_ucat;
    _Bool _manualConnect;
    CDUnknownBlockType _bluetoothStateChangedHandler;
    CDUnknownBlockType _connectionStateChangedHandler;
    CDUnknownBlockType _frameHandler;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_identifier;
    CDUnknownBlockType _invalidationHandler;
}

@property(nonatomic) _Bool manualConnect; // @synthesize manualConnect=_manualConnect;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) CDUnknownBlockType frameHandler; // @synthesize frameHandler=_frameHandler;
@property(copy, nonatomic) CDUnknownBlockType connectionStateChangedHandler; // @synthesize connectionStateChangedHandler=_connectionStateChangedHandler;
@property(copy, nonatomic) CDUnknownBlockType bluetoothStateChangedHandler; // @synthesize bluetoothStateChangedHandler=_bluetoothStateChangedHandler;
- (void).cxx_destruct;
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;
- (void)centralManagerDidUpdateState:(id)arg1;
- (id)_defaultPairedDeviceBluetoothIdentifier;
- (void)_frameHandler:(unsigned char)arg1 data:(id)arg2;
- (void)_setupIfNeeded;
- (void)_sendFrameType:(unsigned char)arg1 payload:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendFrameType:(unsigned char)arg1 payload:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeFrameHandlerForType:(unsigned char)arg1;
- (void)addFrameHandlerForType:(unsigned char)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_invalidate;
- (void)invalidate;
- (void)_activate;
- (void)activate;
@property(readonly, nonatomic) long long connectionState;
- (id)description;
- (void)dealloc;
- (id)init;

@end

