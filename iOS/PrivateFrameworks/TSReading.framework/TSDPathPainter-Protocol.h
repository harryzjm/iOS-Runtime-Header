//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSReading/NSObject-Protocol.h>

@protocol TSDPathPainter <NSObject>
- (void)drawSwatchInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (void)paintPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;

@optional
- (void)drawSwatchInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2 forImage:(struct CGImage *)arg3 swatchRect:(struct CGRect)arg4 wantsStroke:(_Bool)arg5;
@end

