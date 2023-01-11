//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSCH3DAxisLabelPositioner-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSCH3DGenericAxisLabelPositioner : NSObject <TSCH3DAxisLabelPositioner>
{
    tvec2_84d5962d mRange;
    unsigned long long mAxis;
    float mOffset;
    unsigned int mAlignment;
}

+ (id)verticalWithRange:(tvec2_84d5962d *)arg1 offset:(float)arg2;
+ (id)horizontalWithRange:(tvec2_84d5962d *)arg1 offset:(float)arg2;
+ (id)verticalWithRange:(tvec2_84d5962d *)arg1;
+ (id)horizontalWithRange:(tvec2_84d5962d *)arg1;
+ (id)vertical;
+ (id)horizontal;
- (id).cxx_construct;
- (float)labelGapForCount:(unsigned long long)arg1;
- (tvec3_17f03ce0)positionForValue:(double)arg1 count:(unsigned long long)arg2 chartDirection:(const tvec3_17f03ce0 *)arg3;
- (unsigned int)alignmentForChartDirection:(const tvec3_17f03ce0 *)arg1;
- (id)initWithAxis:(long long)arg1 alignment:(unsigned int)arg2 offset:(float)arg3 range:(tvec2_84d5962d *)arg4;
- (_Bool)isHorizontal;
- (_Bool)hasOffset;
- (id)init;

@end

