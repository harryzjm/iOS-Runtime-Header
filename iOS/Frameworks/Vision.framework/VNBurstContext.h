//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BurstImageSetInternal;

__attribute__((visibility("hidden")))
@interface VNBurstContext : NSObject
{
    BurstImageSetInternal *_burstSet;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType loggingCallback;
- (_Bool)isPortrait;
- (_Bool)isAction;
- (id)allImageStats;
- (id)coverImageIdentifier;
- (id)allClusters;
- (id)allImageIdentifiers;
- (id)bestImageIdentifiers;
- (_Bool)addBurstFrameWithIdentifier:(id)arg1 fromImageBuffer:(id)arg2 withProperties:(id)arg3 error:(id *)arg4;
- (void)dealloc;
- (id)initWithOptions:(id)arg1 error:(id *)arg2;

@end

