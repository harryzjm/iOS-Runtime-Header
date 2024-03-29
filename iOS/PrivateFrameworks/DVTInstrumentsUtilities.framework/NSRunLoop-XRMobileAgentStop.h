//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSRunLoop.h>

@class NSString;

@interface NSRunLoop (XRMobileAgentStop)
- (void)receiveMobileAgent:(id)arg1;
- (void)_scheduleAgentVisit:(id)arg1;
- (id)xr_exitRunLoopTicket;
- (id)xr_waitForGroupTicket:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) int agentStopDiagnosticsTypeCode;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

