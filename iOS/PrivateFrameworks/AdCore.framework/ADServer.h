//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AdCore/NSURLSessionDelegate-Protocol.h>

@class NSDictionary, NSString, NSURLSession;

@interface ADServer <NSURLSessionDelegate>
{
    NSDictionary *_configurations;
    double _configurationExpirationTime;
    NSURLSession *_session;
}

+ (id)workQueue;
+ (void)initialize;
+ (id)sharedInstance;
@property(retain) NSURLSession *session; // @synthesize session=_session;
@property double configurationExpirationTime; // @synthesize configurationExpirationTime=_configurationExpirationTime;
@property(retain) NSDictionary *configurations; // @synthesize configurations=_configurations;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)handleRequest:(id)arg1 serverURL:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (id)serverURLForMessageClass:(Class)arg1 serverURL:(id)arg2;
- (id)routingHeaderForClass:(Class)arg1 serverURL:(id)arg2;
- (id)serializeMessage:(id)arg1;
- (void)restoreConfiguration;
- (void)buildConfigurationDictionary:(id)arg1;
- (_Bool)shouldRestoreConfiguration;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
