//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardServices/BSInvalidatable-Protocol.h>
#import <SpringBoardServices/SBSSystemNotesPresentationClientToServerInterface-Protocol.h>

@class BSServiceConnection, NSString, SBSSystemNotesPresentationConfiguration;
@protocol OS_dispatch_queue, SBSSystemNotesPresentationServerToClientInterface;

@interface SBSSystemNotesPresentationClientToServerProxy : NSObject <SBSSystemNotesPresentationClientToServerInterface, BSInvalidatable>
{
    BSServiceConnection *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    SBSSystemNotesPresentationConfiguration *_requestedConfiguration;
    id <SBSSystemNotesPresentationServerToClientInterface> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SBSSystemNotesPresentationServerToClientInterface> delegate; // @synthesize delegate=_delegate;
- (void)_setupAndActivateConnection;
- (oneway void)presentWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)activateConfiguration:(id)arg1;
- (void)invalidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
