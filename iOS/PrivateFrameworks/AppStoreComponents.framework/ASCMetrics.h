//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ASCPendingPromises;
@protocol ASCServices;

@interface ASCMetrics : NSObject
{
    id <ASCServices> _connection;
    ASCPendingPromises *_pendingProcesses;
}

+ (id)sharedMetrics;
- (void).cxx_destruct;
@property(readonly, nonatomic) ASCPendingPromises *pendingProcesses; // @synthesize pendingProcesses=_pendingProcesses;
@property(readonly, nonatomic) id <ASCServices> connection; // @synthesize connection=_connection;
- (void)logErrorMessage:(id)arg1;
- (id)processViewRenderWithPredicate:(id)arg1;
- (id)processViewMetrics:(id)arg1 atInvocationPoint:(id)arg2 withActivity:(id)arg3;
- (id)processMetricsData:(id)arg1 withActivity:(id)arg2;
- (id)recordCampaignToken:(id)arg1 providerToken:(id)arg2 withLockup:(id)arg3;
- (id)processMetricsData:(id)arg1 pageFields:(id)arg2 activity:(id)arg3;
- (void)daemonConnectionWasLost:(id)arg1;
- (void)dealloc;
- (id)initWithConnection:(id)arg1;

@end
