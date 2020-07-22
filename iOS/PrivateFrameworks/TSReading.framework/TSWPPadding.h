//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@interface TSWPPadding : NSObject
{
    double _topInset;
    double _leftInset;
    double _bottomInset;
    double _rightInset;
}

+ (id)paddingWithTopInset:(double)arg1 leftInset:(double)arg2 bottomInset:(double)arg3 rightInset:(double)arg4;
+ (id)padding;
@property(nonatomic) double rightInset; // @synthesize rightInset=_rightInset;
@property(nonatomic) double bottomInset; // @synthesize bottomInset=_bottomInset;
@property(nonatomic) double leftInset; // @synthesize leftInset=_leftInset;
@property(nonatomic) double topInset; // @synthesize topInset=_topInset;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (void)transform:(struct CGAffineTransform)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTopInset:(double)arg1 leftInset:(double)arg2 bottomInset:(double)arg3 rightInset:(double)arg4;
- (id)init;

@end

