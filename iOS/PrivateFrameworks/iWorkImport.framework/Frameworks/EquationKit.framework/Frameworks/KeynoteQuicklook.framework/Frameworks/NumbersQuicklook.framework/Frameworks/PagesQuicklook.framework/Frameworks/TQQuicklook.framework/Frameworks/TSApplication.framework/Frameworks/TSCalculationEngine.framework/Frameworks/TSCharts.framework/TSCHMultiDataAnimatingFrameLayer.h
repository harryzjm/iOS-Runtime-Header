//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@interface TSCHMultiDataAnimatingFrameLayer : CALayer
{
    struct CGRect _presentationBounds;
    struct CGPoint _presentationPosition;
}

@property(nonatomic) struct CGPoint presentationPosition; // @synthesize presentationPosition=_presentationPosition;
@property(nonatomic) struct CGRect presentationBounds; // @synthesize presentationBounds=_presentationBounds;
- (struct CGRect)currentFrame;
- (void)setPosition:(struct CGPoint)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithLayer:(id)arg1;
- (id)init;

@end

