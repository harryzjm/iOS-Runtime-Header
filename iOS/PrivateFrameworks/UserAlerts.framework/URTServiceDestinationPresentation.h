//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UserAlerts/URTAlertServerToClientInterface-Protocol.h>
#import <UserAlerts/URTDestinationPresenting-Protocol.h>

@class BSServiceConnection, NSString, URTAlert;
@protocol OS_dispatch_queue, URTDestinationPresentationDelegate;

__attribute__((visibility("hidden")))
@interface URTServiceDestinationPresentation : NSObject <URTAlertServerToClientInterface, URTDestinationPresenting>
{
    URTAlert *_alert;
    long long _destination;
    id <URTDestinationPresentationDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_remoteTargetQueue;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    BSServiceConnection *_connection;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BSServiceConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // @synthesize connectionQueue=_connectionQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *remoteTargetQueue; // @synthesize remoteTargetQueue=_remoteTargetQueue;
@property(nonatomic) __weak id <URTDestinationPresentationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long destination; // @synthesize destination=_destination;
@property(readonly, nonatomic) URTAlert *alert; // @synthesize alert=_alert;
- (void)_handleConnectionInterrupted;
- (void)_handleConnectionActivated;
- (oneway void)handleOtherAction;
- (oneway void)handleDefaultAction;
- (oneway void)handleCancelAction;
@property(readonly, copy) NSString *description;
- (void)invalidate;
- (void)dismiss;
- (void)present;
- (id)initWithAlert:(id)arg1 forDestination:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
