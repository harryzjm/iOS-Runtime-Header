//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSWPTextWrapper : NSObject
{
}

+ (double)p_skipHintForRect:(struct CGRect)arg1 wrapSegments:(id)arg2 type:(int)arg3;
+ (double)unobstructedSpanForWrapSegments:(id)arg1 startingSpan:(struct CGRect)arg2 columnBounds:(struct CGRect)arg3;
+ (unsigned int)splitLine:(struct CGRect)arg1 lineSegmentRects:(struct CGRect [128])arg2 wrapSegments:(id)arg3 type:(int)arg4 skipHint:(double *)arg5;

@end

