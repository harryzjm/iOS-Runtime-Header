//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol DADAgentStopStartControllerDelegate
- (void)enableMonitoringAgentsWithToken:(unsigned long long)arg1;
- (unsigned long long)disableMonitoringAgents;
- (void)scheduleAgentStartOrStopBlock:(void (^)(void))arg1;
@end

