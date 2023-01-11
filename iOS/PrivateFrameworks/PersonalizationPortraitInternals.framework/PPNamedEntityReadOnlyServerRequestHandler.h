//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PersonalizationPortraitInternals/PPNamedEntityReadOnlyServerProtocol-Protocol.h>

@class NSString, PPBundleIdResolver, PPXPCServerPipelinedBatchQueryManager;
@protocol PPNamedEntityClientProtocol;

@interface PPNamedEntityReadOnlyServerRequestHandler : NSObject <PPNamedEntityReadOnlyServerProtocol>
{
    id <PPNamedEntityClientProtocol> _clientProxy;
    PPXPCServerPipelinedBatchQueryManager *_queryManager;
    NSString *_clientProcessName;
    PPBundleIdResolver *_bundleIdResolver;
}

@property(retain, nonatomic) PPBundleIdResolver *bundleIdResolver; // @synthesize bundleIdResolver=_bundleIdResolver;
@property(copy, nonatomic) NSString *clientProcessName; // @synthesize clientProcessName=_clientProcessName;
- (void).cxx_destruct;
- (void)mapItemForPlaceName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)feedbackNamedEntitiesOverallEngagement:(id)arg1;
- (void)feedbackEngagedNamedEntities:(id)arg1;
- (void)feedbackUsedNamedEntities:(id)arg1;
- (void)namedEntityRecordsWithQuery:(id)arg1 queryId:(unsigned long long)arg2;
- (void)rankedNamedEntitiesWithQuery:(id)arg1 queryId:(unsigned long long)arg2;
- (void)setRemoteObjectProxy:(id)arg1;
- (void)unblockPendingQueries;
- (id)init;

@end
