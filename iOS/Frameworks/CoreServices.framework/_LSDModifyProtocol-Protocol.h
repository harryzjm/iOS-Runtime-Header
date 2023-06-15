//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreServices/LSInstallationServiceProtocol-Protocol.h>

@class LSPrecondition, LSRegistrationInfo, NSArray, NSData, NSDictionary, NSSet, NSString, NSURL, NSUUID;

@protocol _LSDModifyProtocol <LSInstallationServiceProtocol>
- (void)forceSaveForTestingWithCompletion:(void (^)(NSError *))arg1;
- (void)performUpdateOfPersonasOfBundleID:(NSString *)arg1 toPersonaUniqueStrings:(NSSet *)arg2 operationUUID:(NSUUID *)arg3 reply:(void (^)(id <_LSPendingSaveToken>, NSError *))arg4;
- (void)performPostUninstallationUnregistrationOfBundleID:(NSString *)arg1 operationUUID:(NSUUID *)arg2 unregisterType:(unsigned int)arg3 precondition:(LSPrecondition *)arg4 reply:(void (^)(id <_LSPendingSaveToken>, NSError *))arg5;
- (void)performPostInstallationRegistration:(NSArray *)arg1 personaUniqueStrings:(NSArray *)arg2 operationUUID:(NSUUID *)arg3 reply:(void (^)(LSRecordPromise *, id <_LSPendingSaveToken>, NSError *))arg4;
- (void)setPreferenceValueForCallingApplication:(id)arg1 forKey:(NSString *)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)setPreferenceValue:(id)arg1 forKey:(NSString *)arg2 forApplicationAtURL:(NSURL *)arg3 completionHandler:(void (^)(_Bool, NSError *))arg4;
- (void)garbageCollectDatabaseWithCompletionHandler:(void (^)(_Bool, NSError *))arg1;
- (void)setUpdateAvailabilities:(NSDictionary *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)unregisterApplicationsAtMountPoint:(NSURL *)arg1 operationUUID:(NSUUID *)arg2 reply:(void (^)(id <_LSPendingSaveToken>, NSError *))arg3;
- (void)refreshContentInFrameworkAtURL:(NSURL *)arg1 reply:(void (^)(NSError *))arg2;
- (void)unregisterApplicationAtURL:(NSURL *)arg1 reply:(void (^)(NSError *))arg2;
- (void)uninstallApplication:(NSString *)arg1 withOptions:(NSDictionary *)arg2 uninstallType:(unsigned long long)arg3 reply:(void (^)(NSArray *, NSError *))arg4;
- (void)installApplication:(NSString *)arg1 atURL:(NSURL *)arg2 withOptions:(NSDictionary *)arg3 installType:(unsigned long long)arg4 reply:(void (^)(NSArray *, NSError *))arg5;
- (void)rebuildApplicationDatabasesForSystem:(_Bool)arg1 internal:(_Bool)arg2 user:(_Bool)arg3 completionHandler:(void (^)(_Bool, NSError *))arg4;
- (void)synchronizeWithMobileInstallation;
- (void)updateRecordForApp:(NSString *)arg1 withSINF:(NSDictionary *)arg2 iTunesMetadata:(NSDictionary *)arg3 placeholderMetadata:(NSDictionary *)arg4 sendNotification:(int)arg5 operationUUID:(NSUUID *)arg6 returnSaveToken:(_Bool)arg7 completionHandler:(void (^)(_Bool, id <_LSPendingSaveToken>, NSError *))arg8;
- (void)resetServerStoreWithCompletionHandler:(void (^)(_Bool, NSError *))arg1;
- (void)relaxApplicationTypeRequirements:(_Bool)arg1 forBundleIdentifier:(NSString *)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)removeAllHandlerPrefsForBundleID:(NSString *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)removeAllHandlersWithCompletionHandler:(void (^)(_Bool, NSError *))arg1;
- (void)removeHandlerForURLScheme:(NSString *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)setHandler:(NSString *)arg1 version:(struct LSVersionNumber)arg2 forURLScheme:(NSString *)arg3 completionHandler:(void (^)(_Bool, NSError *))arg4;
- (void)removeHandlerForContentType:(NSString *)arg1 roles:(unsigned int)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)setHandler:(NSString *)arg1 version:(struct LSVersionNumber)arg2 roles:(unsigned int)arg3 forContentType:(NSString *)arg4 completionHandler:(void (^)(_Bool, NSError *))arg5;
- (void)unregisterExtensionPoint:(NSString *)arg1 platform:(unsigned int)arg2 withVersion:(NSString *)arg3 parentBundleUnit:(unsigned int)arg4 completionHandler:(void (^)(_Bool, NSError *))arg5;
- (void)registerExtensionPoint:(NSString *)arg1 platform:(unsigned int)arg2 declaringURL:(NSURL *)arg3 withInfo:(NSDictionary *)arg4 completionHandler:(void (^)(_Bool, NSError *))arg5;
- (void)updateContainerUnit:(unsigned int)arg1 completionHandler:(void (^)(NSData *, NSError *))arg2;
- (void)registerContainerURL:(NSURL *)arg1 completionHandler:(void (^)(unsigned int, NSError *))arg2;
- (void)unregisterBundleUnit:(unsigned int)arg1 options:(unsigned int)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)registerItemInfo:(LSRegistrationInfo *)arg1 alias:(NSData *)arg2 diskImageAlias:(NSData *)arg3 bundleURL:(NSURL *)arg4 installationPlist:(NSDictionary *)arg5 completionHandler:(void (^)(_Bool, unsigned int, NSArray *, _Bool, NSError *))arg6;
- (void)setDatabaseIsSeeded:(_Bool)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
@end

