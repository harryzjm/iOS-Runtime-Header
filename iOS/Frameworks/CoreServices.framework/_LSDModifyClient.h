//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface _LSDModifyClient
{
}

- (void)forceSaveForTestingWithCompletion:(CDUnknownBlockType)arg1;
- (void)performUpdateOfPersonasOfBundleID:(id)arg1 toPersonaUniqueStrings:(id)arg2 operationUUID:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)performPostUninstallationUnregistrationOfBundleID:(id)arg1 operationUUID:(id)arg2 unregisterType:(unsigned int)arg3 precondition:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)performPostInstallationRegistration:(id)arg1 personaUniqueStrings:(id)arg2 operationUUID:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (_Bool)clientIsEntitledForPostInstallationOperations;
- (void)performShimmedUninstallOfApplicationWithIdentifier:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)performShimmedInstallOfArtifact:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setPreferenceValueForCallingApplication:(id)arg1 forKey:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setPreferenceValue:(id)arg1 forKey:(id)arg2 forApplicationAtURL:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)garbageCollectDatabaseWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setUpdateAvailabilities:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)refreshContentInFrameworkAtURL:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)unregisterApplicationAtURL:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)unregisterApplicationsAtMountPoint:(id)arg1 operationUUID:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)uninstallApplication:(id)arg1 withOptions:(id)arg2 uninstallType:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;
- (void)installApplication:(id)arg1 atURL:(id)arg2 withOptions:(id)arg3 installType:(unsigned long long)arg4 reply:(CDUnknownBlockType)arg5;
- (void)rebuildApplicationDatabasesForSystem:(_Bool)arg1 internal:(_Bool)arg2 user:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)synchronizeWithMobileInstallation;
- (void)updateRecordForApp:(id)arg1 withSINF:(id)arg2 iTunesMetadata:(id)arg3 placeholderMetadata:(id)arg4 sendNotification:(int)arg5 operationUUID:(id)arg6 returnSaveToken:(_Bool)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (_Bool)clientHasMIEntitlement:(id)arg1;
- (void)resetServerStoreWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)relaxApplicationTypeRequirements:(_Bool)arg1 forBundleIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removeAllHandlerPrefsForBundleID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeAllHandlersWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeHandlerForURLScheme:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setHandler:(id)arg1 version:(struct LSVersionNumber)arg2 forURLScheme:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)removeHandlerForContentType:(id)arg1 roles:(unsigned int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setHandler:(id)arg1 version:(struct LSVersionNumber)arg2 roles:(unsigned int)arg3 forContentType:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)unregisterExtensionPoint:(id)arg1 platform:(unsigned int)arg2 withVersion:(id)arg3 parentBundleUnit:(unsigned int)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)registerExtensionPoint:(id)arg1 platform:(unsigned int)arg2 declaringURL:(id)arg3 withInfo:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)updateContainerUnit:(unsigned int)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)registerContainerURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)unregisterBundleUnit:(unsigned int)arg1 options:(unsigned int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)registerItemInfo:(id)arg1 alias:(id)arg2 diskImageAlias:(id)arg3 bundleURL:(id)arg4 installationPlist:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)setDatabaseIsSeeded:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)willHandleInvocation:(id)arg1 isReply:(_Bool)arg2;
- (_Bool)canRegisterWithOptions:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

