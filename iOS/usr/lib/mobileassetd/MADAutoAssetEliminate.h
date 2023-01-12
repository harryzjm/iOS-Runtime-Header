//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MAAutoAssetSelector, MADAutoAssetClientRequest, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface MADAutoAssetEliminate : NSObject
{
    _Bool _awaitingSchedulerAck;
    _Bool _awaitingStagerAck;
    MADAutoAssetClientRequest *_clientRequest;
    MAAutoAssetSelector *_assetSelector;
    NSMutableDictionary *_activeJobsByUUID;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *activeJobsByUUID; // @synthesize activeJobsByUUID=_activeJobsByUUID;
@property(nonatomic) _Bool awaitingStagerAck; // @synthesize awaitingStagerAck=_awaitingStagerAck;
@property(nonatomic) _Bool awaitingSchedulerAck; // @synthesize awaitingSchedulerAck=_awaitingSchedulerAck;
@property(readonly, retain, nonatomic) MAAutoAssetSelector *assetSelector; // @synthesize assetSelector=_assetSelector;
@property(readonly, retain, nonatomic) MADAutoAssetClientRequest *clientRequest; // @synthesize clientRequest=_clientRequest;
- (id)summary;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithClientRequest:(id)arg1 withAssetSelector:(id)arg2;
- (id)initWithAssetSelector:(id)arg1;
- (id)initWithClientRequest:(id)arg1;

@end

