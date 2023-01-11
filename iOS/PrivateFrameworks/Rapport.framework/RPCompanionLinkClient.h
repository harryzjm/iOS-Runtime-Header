//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Rapport/NSSecureCoding-Protocol.h>
#import <Rapport/RPCompanionLinkXPCClientInterface-Protocol.h>
#import <Rapport/RPMessageable-Protocol.h>

@class NSArray, NSDictionary, NSMutableOrderedSet, NSString, NSXPCConnection, RPCompanionLinkDevice;
@protocol OS_dispatch_queue;

@interface RPCompanionLinkClient : NSObject <NSSecureCoding, RPCompanionLinkXPCClientInterface, RPMessageable>
{
    _Bool _activateCalled;
    struct NSMutableSet *_assertions;
    struct NSMutableDictionary *_deviceDictionary;
    struct NSMutableDictionary *_eventRegistrations;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    NSMutableOrderedSet *_registeredProfileIDs;
    struct NSMutableDictionary *_requestRegistrations;
    NSXPCConnection *_xpcCnx;
    unsigned int _flags;
    unsigned long long _controlFlags;
    RPCompanionLinkDevice *_destinationDevice;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    NSString *_password;
    CDUnknownBlockType _promptForPasswordHandler;
    CDUnknownBlockType _deviceFoundHandler;
    CDUnknownBlockType _deviceLostHandler;
    CDUnknownBlockType _deviceChangedHandler;
    RPCompanionLinkDevice *_localDevice;
    CDUnknownBlockType _localDeviceUpdatedHandler;
    NSDictionary *_siriInfo;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSDictionary *siriInfo; // @synthesize siriInfo=_siriInfo;
@property(copy, nonatomic) CDUnknownBlockType localDeviceUpdatedHandler; // @synthesize localDeviceUpdatedHandler=_localDeviceUpdatedHandler;
@property(retain) RPCompanionLinkDevice *localDevice; // @synthesize localDevice=_localDevice;
@property(copy, nonatomic) CDUnknownBlockType deviceChangedHandler; // @synthesize deviceChangedHandler=_deviceChangedHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceLostHandler; // @synthesize deviceLostHandler=_deviceLostHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceFoundHandler; // @synthesize deviceFoundHandler=_deviceFoundHandler;
@property(copy, nonatomic) CDUnknownBlockType promptForPasswordHandler; // @synthesize promptForPasswordHandler=_promptForPasswordHandler;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(retain, nonatomic) RPCompanionLinkDevice *destinationDevice; // @synthesize destinationDevice=_destinationDevice;
@property(nonatomic) unsigned long long controlFlags; // @synthesize controlFlags=_controlFlags;
- (void).cxx_destruct;
- (void)deregisterProfileID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_reregisterProfileIDs;
- (void)_registerProfileID:(id)arg1 reregister:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)registerProfileID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)companionLinkReceivedRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;
- (void)sendRequestID:(id)arg1 request:(id)arg2 destinationID:(id)arg3 options:(id)arg4 responseHandler:(CDUnknownBlockType)arg5;
- (void)deregisterRequestID:(id)arg1;
- (void)_reregisterRequests;
- (void)_registerRequestID:(id)arg1 options:(id)arg2 reregister:(_Bool)arg3;
- (void)registerRequestID:(id)arg1 options:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)companionLinkReceivedEventID:(id)arg1 event:(id)arg2 options:(id)arg3;
- (void)sendEventID:(id)arg1 event:(id)arg2 destinationID:(id)arg3 options:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)deregisterEventID:(id)arg1;
- (void)_reregisterEvents;
- (void)_registerEventID:(id)arg1 options:(id)arg2 reregister:(_Bool)arg3;
- (void)registerEventID:(id)arg1 options:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (_Bool)shouldReportDevice:(id)arg1;
- (void)_lostAllDevices;
- (void)companionLinkLocalDeviceUpdated:(id)arg1;
- (void)companionLinkChangedDevice:(id)arg1 changes:(unsigned int)arg2;
- (void)companionLinkLostDevice:(id)arg1;
- (void)companionLinkFoundDevice:(id)arg1;
@property(readonly) RPCompanionLinkDevice *activePersonalCompanion;
@property(readonly, copy) NSArray *activeDevices;
- (void)_reregisterAssertions;
- (void)_invalidateAssertion:(id)arg1;
- (id)activateAssertionID:(id)arg1 destinationID:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)tryPassword:(id)arg1;
- (void)_invalidated;
- (void)invalidate;
- (void)_interrupted;
- (void)_invokeBlockActivateSafe:(CDUnknownBlockType)arg1;
- (void)_ensureXPCStarted;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1 reactivate:(_Bool)arg2;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

