//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Vision/NSCopying-Protocol.h>

@class VNVideoProcessorCadence;

@interface VNVideoProcessorRequestProcessingOptions : NSObject <NSCopying>
{
    VNVideoProcessorCadence *_cadence;
}

- (void).cxx_destruct;
@property(copy) VNVideoProcessorCadence *cadence; // @synthesize cadence=_cadence;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_createVCPVideoProcessorRequestConfiguration;

@end
