//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSAttributedString;

__attribute__((visibility("hidden")))
@interface _TVStarBar : NSObject
{
    unsigned long long _numStars;
    double _value;
    NSAttributedString *_countStr;
    double _barWidth;
    double _height;
    struct UIEdgeInsets _barMargin;
}

@property(nonatomic) struct UIEdgeInsets barMargin; // @synthesize barMargin=_barMargin;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double barWidth; // @synthesize barWidth=_barWidth;
@property(retain, nonatomic) NSAttributedString *countStr; // @synthesize countStr=_countStr;
@property(nonatomic) double value; // @synthesize value=_value;
@property(nonatomic) unsigned long long numStars; // @synthesize numStars=_numStars;
- (void).cxx_destruct;

@end
