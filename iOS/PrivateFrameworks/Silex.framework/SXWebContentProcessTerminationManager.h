//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXWebContentProcessTerminationManager-Protocol.h>

@class NSMutableArray, NSString;
@protocol SXWebContentErrorReporting, SXWebContentProcessTerminationPolicyDecider;

@interface SXWebContentProcessTerminationManager : NSObject <SXWebContentProcessTerminationManager>
{
    id <SXWebContentProcessTerminationPolicyDecider> _throttler;
    id <SXWebContentErrorReporting> _errorReporter;
    NSMutableArray *_onRetryBlocks;
}

@property(readonly, nonatomic) NSMutableArray *onRetryBlocks; // @synthesize onRetryBlocks=_onRetryBlocks;
@property(readonly, nonatomic) id <SXWebContentErrorReporting> errorReporter; // @synthesize errorReporter=_errorReporter;
@property(readonly, nonatomic) id <SXWebContentProcessTerminationPolicyDecider> throttler; // @synthesize throttler=_throttler;
- (void).cxx_destruct;
- (void)onRetry:(CDUnknownBlockType)arg1;
- (void)webContentProcessTerminated;
- (id)initWithTerminationThrottler:(id)arg1 errorReporter:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
