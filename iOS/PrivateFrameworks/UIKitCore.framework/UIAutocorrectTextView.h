//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIFont;

__attribute__((visibility("hidden")))
@interface UIAutocorrectTextView
{
    NSString *m_string;
    int m_type;
    int m_edgeType;
    UIFont *m_textFont;
    _Bool m_animating;
    _Bool m_isLongString;
}

@property(nonatomic) _Bool isLongString; // @synthesize isLongString=m_isLongString;
@property(nonatomic) _Bool animating; // @synthesize animating=m_animating;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;
- (struct CGRect)_calculateRectForExpandedHitRegion;
- (void)drawRect:(struct CGRect)arg1;
- (void)setEdgeType:(int)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 string:(id)arg2 type:(int)arg3 edgeType:(int)arg4;

@end
