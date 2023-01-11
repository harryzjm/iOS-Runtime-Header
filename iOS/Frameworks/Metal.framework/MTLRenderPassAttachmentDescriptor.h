//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Metal/NSCopying-Protocol.h>

@protocol MTLTexture;

@interface MTLRenderPassAttachmentDescriptor : NSObject <NSCopying>
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(nonatomic) unsigned long long depthPlane; // @dynamic depthPlane;
@property(nonatomic) unsigned long long level; // @dynamic level;
@property(nonatomic) unsigned long long loadAction; // @dynamic loadAction;
@property(nonatomic) unsigned long long resolveDepthPlane; // @dynamic resolveDepthPlane;
@property(nonatomic) unsigned long long resolveLevel; // @dynamic resolveLevel;
@property(nonatomic) unsigned long long resolveSlice; // @dynamic resolveSlice;
@property(retain, nonatomic) id <MTLTexture> resolveTexture; // @dynamic resolveTexture;
@property(nonatomic) unsigned long long slice; // @dynamic slice;
@property(nonatomic) unsigned long long storeAction; // @dynamic storeAction;
@property(nonatomic) unsigned long long storeActionOptions; // @dynamic storeActionOptions;
@property(retain, nonatomic) id <MTLTexture> texture; // @dynamic texture;

@end

