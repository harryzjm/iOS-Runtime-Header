//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PosterBoard/BSInvalidatable-Protocol.h>

@class NSArray, NSMapTable, NSSet;

@protocol PBFComplicationSnapshotProviding <BSInvalidatable>
- (NSMapTable *)preparedComplicationSnapshotsForRequests:(NSArray *)arg1;
- (void)fetchComplicationSnapshotsForRequests:(NSArray *)arg1 complicationSnapshotReceivedHandler:(void (^)(PBFComplicationSnapshotRequest *, UIImage *))arg2 errorHandler:(void (^)(PBFComplicationSnapshotRequest *, NSError *))arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)trimCachedSnapshotsToRequests:(NSSet *)arg1;
@end

