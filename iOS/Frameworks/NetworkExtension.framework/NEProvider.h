//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NSExtensionRequestHandling-Protocol.h>

@class NEExtensionProviderContext, NSString, NWPath, NWPathEvaluator;

@interface NEProvider : NSObject <NSExtensionRequestHandling>
{
    NWPath *_defaultPath;
    NWPathEvaluator *_defaultPathEvaluator;
    NEExtensionProviderContext *_context;
    NSString *_appName;
}

+ (_Bool)isNEProviderBundle:(id)arg1 forExtensionPoint:(id)arg2;
+ (_Bool)isRunningInProvider;
+ (void)startSystemExtensionMode;
- (void).cxx_destruct;
@property(retain) NSString *appName; // @synthesize appName=_appName;
@property(retain) NEExtensionProviderContext *context; // @synthesize context=_context;
@property(retain) NWPathEvaluator *defaultPathEvaluator; // @synthesize defaultPathEvaluator=_defaultPathEvaluator;
@property(retain) NWPath *defaultPath; // @synthesize defaultPath=_defaultPath;
- (void)displayMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)createUDPSessionToEndpoint:(id)arg1 fromEndpoint:(id)arg2;
- (id)createTCPConnectionToEndpoint:(id)arg1 enableTFO:(_Bool)arg2 initialData:(id)arg3 enableMultipath:(_Bool)arg4 enableTLS:(_Bool)arg5 TLSParameters:(id)arg6 delegate:(id)arg7 URL:(id)arg8;
- (id)createTCPConnectionToEndpoint:(id)arg1 enableTFO:(_Bool)arg2 initialData:(id)arg3 enableMultipath:(_Bool)arg4 enableTLS:(_Bool)arg5 TLSParameters:(id)arg6 delegate:(id)arg7;
- (id)createTCPConnectionToEndpoint:(id)arg1 enableTLS:(_Bool)arg2 TLSParameters:(id)arg3 delegate:(id)arg4;
- (void)wake;
- (void)sleepWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)observerHelperHandler:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setdefaultPathObserver:(id)arg1;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (void)dealloc;
- (id)initAllowUnentitled:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
