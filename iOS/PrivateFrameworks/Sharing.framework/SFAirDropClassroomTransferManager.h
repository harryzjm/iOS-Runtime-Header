//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Sharing/SFAirDropClassroomTransferManagerProtocol-Protocol.h>

@class NSString;
@protocol SFAirDropClassroomTransferDelegate;

@interface SFAirDropClassroomTransferManager <SFAirDropClassroomTransferManagerProtocol>
{
    id <SFAirDropClassroomTransferDelegate> _delegate;
}

@property(nonatomic) __weak id <SFAirDropClassroomTransferDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)shouldEscapeXpcTryCatch;
- (id)remoteObjectInterface;
- (id)exportedInterface;
- (id)machServiceName;
- (void)transferWithIdentifierWasDeclined:(id)arg1 withFailureReason:(unsigned long long)arg2;
- (void)transferWithIdentifierWasAccepted:(id)arg1;
- (void)updateTransferWithIdentifier:(id)arg1 withState:(long long)arg2 information:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_getRemoteObjectProxyOnQueue:(CDUnknownBlockType)arg1;
- (void)invalidate;
- (void)activate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

