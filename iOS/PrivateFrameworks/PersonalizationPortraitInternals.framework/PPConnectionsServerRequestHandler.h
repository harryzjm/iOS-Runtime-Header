//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PersonalizationPortraitInternals/PPConnectionsServerProtocol-Protocol.h>

@class NSString, PPXPCServerPipelinedBatchQueryManager;
@protocol PPConnectionsClientProtocol;

@interface PPConnectionsServerRequestHandler : NSObject <PPConnectionsServerProtocol>
{
    id <PPConnectionsClientProtocol> _clientProxy;
    PPXPCServerPipelinedBatchQueryManager *_queryManager;
    NSString *_clientProcessName;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *clientProcessName; // @synthesize clientProcessName=_clientProcessName;
- (void)registerFeedback:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)recentLocationsForConsumer:(unsigned long long)arg1 criteria:(id)arg2 limit:(unsigned long long)arg3 explanationSet:(id)arg4 client:(id)arg5 queryId:(unsigned long long)arg6;
- (void)recentLocationDonationsSinceDate:(id)arg1 client:(id)arg2 queryId:(unsigned long long)arg3;
- (void)unblockPendingQueries;
- (void)setRemoteObjectProxy:(id)arg1;
- (id)init;

@end
