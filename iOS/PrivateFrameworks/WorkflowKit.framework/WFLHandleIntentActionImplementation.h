//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class INCExtensionConnection;

@interface WFLHandleIntentActionImplementation
{
    INCExtensionConnection *_connection;
}

+ (void)continueActionInApp:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)initialize;
@property(retain, nonatomic) INCExtensionConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (id)errorWithCode:(long long)arg1 localizedDescription:(id)arg2 localizedTitle:(id)arg3 underlyingError:(id)arg4 intentResponse:(id)arg5;
- (id)appNotInstalledErrorForIntent:(id)arg1 underlyingError:(id)arg2;
- (void)launchAppWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cancelRunning;
- (void)handleIntent:(id)arg1 inBackgroundAppWithBundleIdentifier:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)finishRunningByContinuingInApp;
- (void)handleIntent:(id)arg1 withExtensionProxy:(id)arg2;
- (void)confirmIntent:(id)arg1 withExtensionProxy:(id)arg2;
- (void)resolveIntent:(id)arg1 withExtensionProxy:(id)arg2;
- (id)createExtensionConnectionForIntent:(id)arg1;
- (void)run;
- (void)logDebugInformation:(id)arg1;

@end
