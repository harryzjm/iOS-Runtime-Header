//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UILabel, _UIKBRTFingerDetectionFingerCircleView;

__attribute__((visibility("hidden")))
@interface _UIKBRTFingerDetectionFingerFeedbackView
{
    struct CGPoint _framelocation;
    double _radiusInt;
    _Bool _unknownSeen;
    UILabel *_fingerLabel;
    _UIKBRTFingerDetectionFingerCircleView *_fingerDot;
}

@property(nonatomic) _Bool unknownSeen; // @synthesize unknownSeen=_unknownSeen;
@property(retain, nonatomic) _UIKBRTFingerDetectionFingerCircleView *fingerDot; // @synthesize fingerDot=_fingerDot;
@property(retain, nonatomic) UILabel *fingerLabel; // @synthesize fingerLabel=_fingerLabel;
- (void).cxx_destruct;
- (void)setNeedsDisplay;
- (void)centerOn:(struct CGPoint)arg1 withRadius:(double)arg2 andIdentifier:(unsigned long long)arg3;
- (void)layoutSubviews;
- (double)radius;
- (id)initWithFrame:(struct CGRect)arg1;

@end
