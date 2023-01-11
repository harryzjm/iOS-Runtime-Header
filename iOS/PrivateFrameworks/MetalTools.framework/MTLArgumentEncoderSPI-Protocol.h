//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MetalTools/MTLArgumentEncoder-Protocol.h>

@class _MTLIndirectArgumentBufferLayout;
@protocol MTLFunctionPointerHandleSPI;

@protocol MTLArgumentEncoderSPI <MTLArgumentEncoder>
@property(readonly, nonatomic) _MTLIndirectArgumentBufferLayout *layout;
- (void)setFunctionPointers:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setFunctionPointer:(id <MTLFunctionPointerHandleSPI>)arg1 atIndex:(unsigned long long)arg2;
@end
