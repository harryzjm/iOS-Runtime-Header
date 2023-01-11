//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ShazamKit/SHMatcherDelegate-Protocol.h>
#import <ShazamKit/SHSessionDriverDelegate-Protocol.h>

@class NSString, SHStore;
@protocol SHMatcher, SHSessionDelegate, SHSessionDriver;

@interface SHSession : NSObject <SHMatcherDelegate, SHSessionDriverDelegate>
{
    id <SHSessionDelegate> _delegate;
    SHStore *_store;
    id <SHMatcher> _matcher;
    id <SHSessionDriver> _sessionDriver;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SHSessionDriver> sessionDriver; // @synthesize sessionDriver=_sessionDriver;
@property(retain, nonatomic) id <SHMatcher> matcher; // @synthesize matcher=_matcher;
@property(readonly, nonatomic) SHStore *store; // @synthesize store=_store;
@property(nonatomic) __weak id <SHSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (id)configuration;
- (_Bool)isSessionDriverSignature:(id)arg1;
- (void)didFinishForMatcher:(id)arg1;
- (void)matcher:(id)arg1 didNotFindMatchForSignature:(id)arg2 matcherResponse:(id)arg3;
- (void)matcher:(id)arg1 didFindMatchingResponse:(id)arg2;
- (void)matcher:(id)arg1 didFailForSignature:(id)arg2 matcherResponse:(id)arg3 withError:(id)arg4;
- (void)matchStreamingBuffer:(id)arg1 atTime:(id)arg2;
- (void)matchSignature:(id)arg1;
- (id)matcherForStore:(id)arg1;
- (id)initWithStore:(id)arg1 matcher:(id)arg2;
- (id)initWithStore:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
