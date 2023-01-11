//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDLogEventObserver-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSArray, NSString;
@protocol HMDLogEventAnalyzerContext;

@interface HMDLogEventAnalyzer : HMFObject <HMFLogging, HMDLogEventObserver>
{
    id <HMDLogEventAnalyzerContext> _context;
    NSArray *_supportedEventTypes;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly) NSArray *supportedEventTypes; // @synthesize supportedEventTypes=_supportedEventTypes;
@property(readonly) id <HMDLogEventAnalyzerContext> context; // @synthesize context=_context;
- (void)didReceiveEventFromDispatcher:(id)arg1 withLogContext:(id)arg2;
- (void)processLogEvent:(id)arg1;
- (id)initWithSupportedEventTypes:(id)arg1 context:(id)arg2;
- (_Bool)isSupportedEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
