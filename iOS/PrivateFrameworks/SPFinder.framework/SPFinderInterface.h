//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SPAdvertisementCache;

@interface SPFinderInterface : NSObject
{
    SPAdvertisementCache *_advertisementCache;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPAdvertisementCache *advertisementCache; // @synthesize advertisementCache=_advertisementCache;
- (id)stateManager;
- (id)finderStateManager;
- (id)beaconPayloadCache;

@end
