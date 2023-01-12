//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUINamedTexture, NSString;
@protocol TXRBufferAllocator;

__attribute__((visibility("hidden")))
@interface _CUTextureLink : NSObject
{
    CUINamedTexture *_namedTexture;
    id <TXRBufferAllocator> _bufferAllocator;
}

- (id)provideImageInfoAtLevel:(unsigned long long)arg1 element:(unsigned long long)arg2 face:(unsigned long long)arg3;
- (id)provideTextureInfo;
- (void)dealloc;
- (void)setBufferAllocator:(id)arg1;
- (id)bufferAllocator;
- (id)namedTexture;
- (void)setNamedTexture:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

