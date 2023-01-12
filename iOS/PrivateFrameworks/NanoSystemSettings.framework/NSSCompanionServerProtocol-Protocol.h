//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoSystemSettings/NSSServerProtocol-Protocol.h>

@class NSData, NSDictionary, NSNumber, NSString, NSUUID;

@protocol NSSCompanionServerProtocol <NSSServerProtocol>
- (void)setWatchFaceIdentifier:(NSUUID *)arg1 forFocusModeIdentifier:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)getWatchFaces:(void (^)(NSArray *, NSError *))arg1;
- (void)recordSoftwareUpdateSpaceFailure:(NSNumber *)arg1 osBeingUpdatedTo:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)getLocalesInfo:(void (^)(NSDictionary *, NSError *))arg1;
- (void)getLegalDocuments:(void (^)(NSDictionary *, NSError *))arg1;
- (void)rebootDevice;
- (void)removeProfileWithIdentifier:(NSString *)arg1 replyHandler:(void (^)(NSError *))arg2;
- (void)installProfile:(NSData *)arg1 replyHandler:(void (^)(NSError *))arg2;
- (void)getProfileWithIdentifier:(NSString *)arg1 replyHandler:(void (^)(NSData *, NSError *))arg2;
- (void)getProfilesInfo:(void (^)(NSDictionary *, NSError *))arg1;
- (void)getAccountsInfoForAccountType:(NSString *)arg1 completionHandler:(void (^)(NSDictionary *, NSError *))arg2;
- (void)obliterateGizmoPreservingeSIM:(_Bool)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)getAboutInfo:(void (^)(NSDictionary *, NSError *))arg1;
- (void)deleteDiagnosticLogFile:(NSString *)arg1 withResult:(void (^)(NSError *))arg2;
- (void)cancelActiveLogFileTranfers;
- (void)cancelDiagnosticLogTranfer:(NSString *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)retrieveDiagnosticLogTransferProgress:(NSString *)arg1 withProgress:(void (^)(unsigned long long, NSError *))arg2;
- (void)setAirplaneModeSettings:(NSDictionary *)arg1 withCompletionHandler:(void (^)(NSDictionary *, NSError *))arg2;
- (void)retrieveAirplaneModeSettingsWithCompletionHandler:(void (^)(NSDictionary *, NSError *))arg1;
- (void)getDiagnosticLogsInfo:(void (^)(NSArray *, NSError *))arg1;
- (void)getDiagnosticLogFileFromGizmo:(NSString *)arg1 withResults:(void (^)(NSURL *, NSError *))arg2;
- (void)purgeUsageBundle:(NSString *)arg1 replyHandler:(void (^)(NSError *))arg2;
- (void)getUsage:(void (^)(NSDictionary *, NSError *))arg1;
- (void)setDeviceName:(NSString *)arg1;
@end

