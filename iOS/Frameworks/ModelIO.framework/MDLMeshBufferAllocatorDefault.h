//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ModelIO/MDLMeshBufferAllocator-Protocol.h>

@class NSString;

@interface MDLMeshBufferAllocatorDefault : NSObject <MDLMeshBufferAllocator>
{
}

- (id)newZoneForBuffersWithSize:(id)arg1 andType:(id)arg2;
- (id)newBufferFromZone:(id)arg1 data:(id)arg2 type:(unsigned long long)arg3;
- (id)newBufferFromZone:(id)arg1 length:(unsigned long long)arg2 type:(unsigned long long)arg3;
- (id)newBufferWithData:(id)arg1 type:(unsigned long long)arg2;
- (id)newBuffer:(unsigned long long)arg1 type:(unsigned long long)arg2;
- (id)newZone:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

