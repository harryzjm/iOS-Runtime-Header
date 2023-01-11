//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MPSCore/MPSImageAllocator-Protocol.h>

@class NSString;

@interface MPSTemporaryImageDefaultAllocator <MPSImageAllocator>
{
}

+ (_Bool)supportsSecureCoding;
- (id)initWithCoder:(id)arg1;
- (id)imageForCommandBuffer:(id)arg1 imageDescriptor:(id)arg2 kernel:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

