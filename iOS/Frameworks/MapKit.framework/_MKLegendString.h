//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@class NSAttributedString;

__attribute__((visibility("hidden")))
@interface _MKLegendString : CALayer
{
    struct __CTLine *_line;
    double _baselineDistanceFromBottom;
    NSAttributedString *_string;
}

@property(readonly, nonatomic) double baselineDistanceFromBottom; // @synthesize baselineDistanceFromBottom=_baselineDistanceFromBottom;
@property(retain, nonatomic) NSAttributedString *string; // @synthesize string=_string;
- (void).cxx_destruct;
- (id)actionForKey:(id)arg1;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)sizeToFit;
- (void)dealloc;
- (id)init;

@end
