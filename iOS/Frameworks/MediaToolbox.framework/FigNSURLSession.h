//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSString, NSURLSession, NSURLSessionConfiguration;
@protocol NSURLSessionDataDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FigNSURLSession : NSObject
{
    NSURLSessionConfiguration *_configuration;
    NSURLSession *_session;
    id <NSURLSessionDataDelegate> _dataDelegate;
    NSOperationQueue *_opQueue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_clientBundleIdentifier;
    NSString *_clientPersonaIdentifier;
    struct OpaqueFigCFWeakReferenceHolder *_weakAssertion;
    long long _doomTime;
    _Bool _doomCheckScheduled;
    int _assertionCount;
}

@property(nonatomic) int assertionCount; // @synthesize assertionCount=_assertionCount;
@property(nonatomic) _Bool doomCheckScheduled; // @synthesize doomCheckScheduled=_doomCheckScheduled;
@property(nonatomic) long long doomTime; // @synthesize doomTime=_doomTime;
@property(readonly, nonatomic) NSString *clientPersonaIdentifier; // @synthesize clientPersonaIdentifier=_clientPersonaIdentifier;
@property(readonly, nonatomic) NSString *clientBundleIdentifier; // @synthesize clientBundleIdentifier=_clientBundleIdentifier;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(readonly, nonatomic) NSOperationQueue *opQueue; // @synthesize opQueue=_opQueue;
@property(readonly, nonatomic) id <NSURLSessionDataDelegate> dataDelegate; // @synthesize dataDelegate=_dataDelegate;
@property(readonly, nonatomic) NSURLSession *session; // @synthesize session=_session;
- (void)dealloc;
- (id)initWithClientBundleIdentifier:(id)arg1 clientPersonaIdentifier:(id)arg2 dispatchQueue:(id)arg3;
- (void)debug;
- (struct FigOpaqueAssertion *)acquireAssertion;

@end

