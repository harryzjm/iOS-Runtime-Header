//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsSupport/MSPReplicaRecord-Protocol.h>

@class MSPPosition, MSPVectorTimestamp;

@protocol MSPOrderedReplicaRecord <MSPReplicaRecord>
@property(readonly, nonatomic) MSPVectorTimestamp *positionTimestamp;
@property(readonly, nonatomic) MSPPosition *position;
@end

