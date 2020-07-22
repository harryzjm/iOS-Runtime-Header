//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class AVAssetResourceLoadingDataRequestInternal;

@interface AVAssetResourceLoadingDataRequest : NSObject
{
    AVAssetResourceLoadingDataRequestInternal *_dataRequest;
}

- (void)respondWithData:(id)arg1;
- (struct __CFDictionary *)_requestInfo;
- (id)_loadingRequest;
@property(readonly, nonatomic) long long currentOffset;
@property(readonly, nonatomic) _Bool requestsAllDataToEndOfResource;
@property(readonly, nonatomic) long long requestedLength;
@property(readonly, nonatomic) long long requestedOffset;
- (id)description;
- (void)finalize;
- (void)dealloc;
- (id)initWithLoadingRequest:(id)arg1 requestedOffset:(long long)arg2 requestedLength:(long long)arg3 requestsAllDataToEndOfResource:(_Bool)arg4 canSupplyIncrementalDataImmediately:(_Bool)arg5;
- (id)init;

@end
