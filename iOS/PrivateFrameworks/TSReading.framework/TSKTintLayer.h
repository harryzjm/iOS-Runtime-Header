//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CAReplicatorLayer.h>

@class CALayer;

@interface TSKTintLayer : CAReplicatorLayer
{
    CALayer *_contentsLayer;
}

@property(retain, nonatomic) CALayer *contentsLayer; // @synthesize contentsLayer=_contentsLayer;
- (void)layoutSublayers;
@property struct CGColor *tintColor;
- (void)setNeedsDisplay;
- (void)setContents:(id)arg1;
- (id)contents;
- (void)dealloc;

@end
