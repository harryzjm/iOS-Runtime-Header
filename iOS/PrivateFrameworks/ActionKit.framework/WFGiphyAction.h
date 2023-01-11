//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFAction.h>

@class WFGiphySessionManager;

@interface WFGiphyAction : WFAction
{
    WFGiphySessionManager *_sessionManager;
}

+ (id)userInterfaceXPCInterface;
+ (id)userInterfaceProtocol;
- (void).cxx_destruct;
- (id)targetContentAttribution;
- (void)runWithNoUserInterface;
- (void)runWithRemoteUserInterface:(id)arg1 input:(id)arg2;
- (void)runAsynchronouslyWithInput:(id)arg1;
@property(readonly, nonatomic) WFGiphySessionManager *sessionManager; // @synthesize sessionManager=_sessionManager;

@end
