//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MTLCounterSampleBufferDescriptor;

@interface MTLDebugCounterSampleBuffer
{
    MTLCounterSampleBufferDescriptor *_descriptor;
    unsigned long long _storageMode;
}

@property(readonly, nonatomic) unsigned long long storageMode; // @synthesize storageMode=_storageMode;
@property(readonly, nonatomic) MTLCounterSampleBufferDescriptor *descriptor; // @synthesize descriptor=_descriptor;
- (id)resolveCounterRange:(struct _NSRange)arg1;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithCounterSampleBuffer:(id)arg1 device:(id)arg2 descriptor:(id)arg3;

@end
