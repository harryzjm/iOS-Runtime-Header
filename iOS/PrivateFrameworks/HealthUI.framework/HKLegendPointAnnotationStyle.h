//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthUI/NSCopying-Protocol.h>

@class HKAxisLabelStyle, NSString;

@interface HKLegendPointAnnotationStyle : NSObject <NSCopying>
{
    _Bool _leftOfSeries;
    HKAxisLabelStyle *_labelStyle;
    NSString *_localizedLabelKey;
}

+ (id)annotationStyleWithLabelStyle:(id)arg1 localizedLabelKey:(id)arg2 leftOfSeries:(_Bool)arg3;
@property(nonatomic) _Bool leftOfSeries; // @synthesize leftOfSeries=_leftOfSeries;
@property(copy, nonatomic) NSString *localizedLabelKey; // @synthesize localizedLabelKey=_localizedLabelKey;
@property(copy, nonatomic) HKAxisLabelStyle *labelStyle; // @synthesize labelStyle=_labelStyle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
