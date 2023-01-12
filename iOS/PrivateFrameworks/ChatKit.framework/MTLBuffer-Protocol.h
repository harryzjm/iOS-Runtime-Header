//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/MTLResource-Protocol.h>

@class MTLTextureDescriptor, NSString;
@protocol MTLTexture;

@protocol MTLBuffer <MTLResource>
@property(nonatomic, readonly) unsigned long long gpuAddress;
- (void)removeAllDebugMarkers;
- (void)addDebugMarker:(NSString *)arg1 range:(struct _NSRange)arg2;
- (id <MTLTexture>)newTextureWithDescriptor:(MTLTextureDescriptor *)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3;
- (void)didModifyRange:(struct _NSRange)arg1;
- (void *)contents;
@property(nonatomic, readonly) long long length;
@end

