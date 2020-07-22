//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@interface TSDSwatchRenderingResult : NSObject
{
    struct CGImage *foreground;
    struct CGImage *background;
}

+ (id)renderingResultWithForeground:(struct CGImage *)arg1 background:(struct CGImage *)arg2;
@property(readonly, nonatomic) struct CGImage *background; // @synthesize background;
@property(readonly, nonatomic) struct CGImage *foreground; // @synthesize foreground;
- (void)dealloc;

@end

