//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol GTMTLDiagnosticsServiceObserver;

__attribute__((visibility("hidden")))
@interface GTMTLDiagnosticsServiceReplyStream
{
    id <GTMTLDiagnosticsServiceObserver> _observer;
}

- (void).cxx_destruct;
- (void)notifyDiagnosticsIssue_:(id)arg1 replyConnection:(id)arg2;
- (void)notifyCommandBufferIssue_:(id)arg1 replyConnection:(id)arg2;
- (id)initWithObserver:(id)arg1;

@end

