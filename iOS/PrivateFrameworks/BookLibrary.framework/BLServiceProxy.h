//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BookLibrary/BLServiceProtocol-Protocol.h>

@class NSXPCConnection;
@protocol BLServiceProtocol;

@interface BLServiceProxy : NSObject <BLServiceProtocol>
{
    NSXPCConnection *_connection;
    id <BLServiceProtocol> _remoteObject;
}

@property(retain, nonatomic) id <BLServiceProtocol> remoteObject; // @synthesize remoteObject=_remoteObject;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)getValueSimulateDeviceOutOfSpaceWithReply:(CDUnknownBlockType)arg1;
- (void)setValueSimulateDeviceOutOfSpace:(_Bool)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)resetAllCrashSimulationOverridesWithReply:(CDUnknownBlockType)arg1;
- (void)getCrashSimulationOverrideValuesWithReply:(CDUnknownBlockType)arg1;
- (void)setValueSimulateCrashAtInstallDuringFinish:(_Bool)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)setValueSimulateCrashAtInstallDuringUnzip:(_Bool)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)setValueSimulateCrashAtInstallDuringDecrypt:(_Bool)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)setValueSimulateCrashAtInstallStart:(_Bool)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)requestDownloadsWithMetadata:(id)arg1 areRestore:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestDownloadWithMetadata:(id)arg1 isRestore:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestDownloadWithParameters:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)downloadWithPermlink:(id)arg1 title:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)purchaseWithBuyParameters:(id)arg1 storeID:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)cancelAllActiveDownloadsWithReply:(CDUnknownBlockType)arg1;
- (void)cancelDownloadWithID:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)resumeDownloadWithID:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)pauseDownloadWithID:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)fetchDownloadFromDownloadID:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)fetchDownloadListWithReply:(CDUnknownBlockType)arg1;
- (void)shutdown;
- (id)initWithError:(out id *)arg1;

@end
