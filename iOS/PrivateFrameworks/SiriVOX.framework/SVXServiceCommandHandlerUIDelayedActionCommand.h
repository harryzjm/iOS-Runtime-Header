//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriVOX/SVXServiceCommandHandling-Protocol.h>

@class NSString, SVXServiceCommandDelayedActionStore, SVXSessionManager;
@protocol SVXPerforming;

__attribute__((visibility("hidden")))
@interface SVXServiceCommandHandlerUIDelayedActionCommand : NSObject <SVXServiceCommandHandling>
{
    SVXServiceCommandDelayedActionStore *_delayedActionStore;
    SVXSessionManager *_sessionManager;
    id <SVXPerforming> _performer;
    NSString *_identifier;
}

+ (Class)supportedCommandClass;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)_performDelayedAction:(id)arg1;
- (void)handleCommand:(id)arg1 withContext:(id)arg2 taskTracker:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)isCommandUUFR:(id)arg1;
- (id)initWithDelayedActionStore:(id)arg1 sessionManager:(id)arg2 performer:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
