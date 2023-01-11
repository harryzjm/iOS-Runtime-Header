//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SetupAssistant/BYClientMigrationSourceProtocol-Protocol.h>

@class NSString, NSXPCConnection;
@protocol BYDeviceMigrationDelegate;

@interface BYBuddyDaemonMigrationSourceClient : NSObject <BYClientMigrationSourceProtocol>
{
    id <BYDeviceMigrationDelegate> _delegate;
    NSXPCConnection *_connection;
}

+ (id)clientInterface;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) __weak id <BYDeviceMigrationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didChangeConnectionInformation:(id)arg1;
- (void)didFinishWithError:(id)arg1;
- (void)didUpdateProgress:(id)arg1;
- (void)_connectToDaemon;
- (void)setFileTransferTemplate:(id)arg1;
- (void)launchSetupForMigration;
- (void)registerAsUserInterfaceHost:(CDUnknownBlockType)arg1;
- (void)cancel;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
