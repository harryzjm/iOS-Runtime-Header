//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ModelIO/NSCopying-Protocol.h>
#import <ModelIO/NSObject-Protocol.h>

@class MDLMeshBufferMap, NSData;
@protocol MDLMeshBufferAllocator, MDLMeshBufferZone;

@protocol MDLMeshBuffer <NSObject, NSCopying>
@property(readonly, nonatomic) unsigned long long type;
@property(readonly, retain, nonatomic) id <MDLMeshBufferZone> zone;
@property(readonly, retain, nonatomic) id <MDLMeshBufferAllocator> allocator;
@property(readonly, nonatomic) unsigned long long length;
- (MDLMeshBufferMap *)map;
- (void)fillData:(NSData *)arg1 offset:(unsigned long long)arg2;
@end

