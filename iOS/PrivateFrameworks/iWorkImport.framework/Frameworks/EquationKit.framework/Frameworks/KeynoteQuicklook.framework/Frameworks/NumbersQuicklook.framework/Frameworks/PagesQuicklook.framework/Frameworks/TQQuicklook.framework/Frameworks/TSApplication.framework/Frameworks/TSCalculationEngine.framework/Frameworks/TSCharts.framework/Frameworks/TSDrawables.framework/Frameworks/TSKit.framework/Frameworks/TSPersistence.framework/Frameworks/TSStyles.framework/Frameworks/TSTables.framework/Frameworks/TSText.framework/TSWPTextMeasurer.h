//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TSWPTextMeasurer : NSObject
{
}

+ (double)widthForString:(id)arg1 textMeasurerBundle:(id)arg2;
+ (double)heightForString:(id)arg1 textMeasurerBundle:(id)arg2 width:(double)arg3 outFitWidth:(inout double *)arg4;
+ (id)textMeasurerBundleForParagraphStyle:(id)arg1;
+ (_Bool)canQuicklyMeasureString:(id)arg1 textMeasurerBundle:(id)arg2;
+ (_Bool)canQuicklyMeasureParagraphStyle:(id)arg1;

@end
