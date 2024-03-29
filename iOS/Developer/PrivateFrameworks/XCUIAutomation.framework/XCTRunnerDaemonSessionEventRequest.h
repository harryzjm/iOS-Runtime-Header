//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <XCUIAutomation/XCUIEventSynthesisRequest-Protocol.h>

@class NSString, XCSynthesizedEventRecord;

__attribute__((visibility("hidden")))
@interface XCTRunnerDaemonSessionEventRequest : NSObject <XCUIEventSynthesisRequest>
{
    XCSynthesizedEventRecord *_event;
    double _upperBoundOnDuration;
}

- (void).cxx_destruct;
@property double upperBoundOnDuration; // @synthesize upperBoundOnDuration=_upperBoundOnDuration;
@property(readonly) XCSynthesizedEventRecord *event; // @synthesize event=_event;
- (void)invalidate;
- (id)initWithEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

