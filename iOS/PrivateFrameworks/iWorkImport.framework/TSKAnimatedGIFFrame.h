//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSKAnimatedGIFFrame : NSObject
{
    struct CGImage *mImage;
    double mTime;
}

@property(readonly, nonatomic) struct CGImage *image; // @synthesize image=mImage;
@property(readonly, nonatomic) double time; // @synthesize time=mTime;
- (id)description;
- (void)dealloc;
- (id)initWithCGImage:(struct CGImage *)arg1 time:(double)arg2;

@end

