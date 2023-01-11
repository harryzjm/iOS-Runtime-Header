//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface MTLComputePassDescriptorInternal
{
    struct MTLComputePassDescriptorPrivate _private;
    unsigned int _substreamCount;
}

+ (id)computePassDescriptor;
@property(nonatomic) unsigned int substreamCount; // @synthesize substreamCount=_substreamCount;
- (void)setDispatchType:(unsigned long long)arg1;
- (unsigned long long)dispatchType;
- (id)sampleBufferAttachments;
- (const struct MTLComputePassDescriptorPrivate *)_descriptorPrivate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)init;

@end
