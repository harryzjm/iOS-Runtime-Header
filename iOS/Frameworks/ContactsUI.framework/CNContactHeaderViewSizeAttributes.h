//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNContactHeaderViewSizeAttributes : NSObject
{
    double _photoMinHeight;
    double _photoMinTopMargin;
    double _photoMinBottomMargin;
    double _minNavbarTitleOffset;
    double _maxNavbarTitleOffset;
    double __minHeight;
    double __maxHeight;
    double _photoMaxHeight;
    double _photoMaxTopMargin;
    double _photoMaxBottomMargin;
}

+ (id)editingAttributesWithNavBar;
+ (id)editingAttributes;
+ (id)displayAttributes;
+ (id)defaultAttributes;
@property(nonatomic) double photoMaxBottomMargin; // @synthesize photoMaxBottomMargin=_photoMaxBottomMargin;
@property(nonatomic) double photoMaxTopMargin; // @synthesize photoMaxTopMargin=_photoMaxTopMargin;
@property(nonatomic) double photoMaxHeight; // @synthesize photoMaxHeight=_photoMaxHeight;
@property(nonatomic) double _maxHeight; // @synthesize _maxHeight=__maxHeight;
@property(nonatomic) double _minHeight; // @synthesize _minHeight=__minHeight;
@property(nonatomic) double maxNavbarTitleOffset; // @synthesize maxNavbarTitleOffset=_maxNavbarTitleOffset;
@property(nonatomic) double minNavbarTitleOffset; // @synthesize minNavbarTitleOffset=_minNavbarTitleOffset;
@property(nonatomic) double photoMinBottomMargin; // @synthesize photoMinBottomMargin=_photoMinBottomMargin;
@property(nonatomic) double photoMinTopMargin; // @synthesize photoMinTopMargin=_photoMinTopMargin;
@property(nonatomic) double photoMinHeight; // @synthesize photoMinHeight=_photoMinHeight;
- (double)navbarTitleOffsetWithPercentMax:(double)arg1;
- (double)photoBottomMarginWithPercentMax:(double)arg1;
- (double)photoTopMarginWithPercentMax:(double)arg1;
- (double)photoHeightWithPercentMax:(double)arg1;
- (double)valueBetweenMin:(double)arg1 max:(double)arg2 percentMax:(double)arg3;
- (double)maxHeight;
- (double)minHeight;
- (id)init;

@end
