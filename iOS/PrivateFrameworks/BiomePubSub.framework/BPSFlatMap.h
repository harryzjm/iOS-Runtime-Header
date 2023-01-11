//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BPSPublisher;

@interface BPSFlatMap
{
    long long _maxPublishers;
    CDUnknownBlockType _transform;
    BPSPublisher *_upstream;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BPSPublisher *upstream; // @synthesize upstream=_upstream;
@property(readonly, nonatomic) CDUnknownBlockType transform; // @synthesize transform=_transform;
@property(readonly, nonatomic) long long maxPublishers; // @synthesize maxPublishers=_maxPublishers;
- (void)subscribe:(id)arg1;
- (id)initWithUpstream:(id)arg1 maxPublishers:(long long)arg2 transform:(CDUnknownBlockType)arg3;

@end
