//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface UIFrameAnimation
{
    struct CGRect _startFrame;
    struct CGRect _endFrame;
    int _fieldsToChange;
}

- (void)setProgress:(float)arg1;
- (void)setSignificantRectFields:(int)arg1;
- (struct CGRect)endFrame;
- (void)setEndFrame:(struct CGRect)arg1;
- (void)setStartFrame:(struct CGRect)arg1;
- (id)initWithTarget:(id)arg1;

@end
