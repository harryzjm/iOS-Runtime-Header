//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CUIPattern : NSObject
{
    struct CGImage *_patternImage;
    struct CGPattern *_pattern;
    double _alpha;
}

@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
- (struct CGImage *)patternImageRef;
- (id)description;
- (void)setPatternInContext:(struct CGContext *)arg1;
- (struct CGPattern *)pattern;
- (struct CGPattern *)_newPattern;
- (void)dealloc;
- (id)initWithImageRef:(struct CGImage *)arg1;

@end

