//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface IBEdgeInsetsWrapper : NSObject
{
    double _top;
    double _left;
    double _bottom;
    double _right;
}

+ (id)edgeInsetsWrapperWithIBEdgeInsets:(struct UIEdgeInsets)arg1;
+ (id)zeroEdgeInsets;
@property(readonly, nonatomic) double right; // @synthesize right=_right;
@property(readonly, nonatomic) double bottom; // @synthesize bottom=_bottom;
@property(readonly, nonatomic) double left; // @synthesize left=_left;
@property(readonly, nonatomic) double top; // @synthesize top=_top;
@property(readonly, copy) NSString *description;
- (struct UIEdgeInsets)edgeInsetsValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTop:(double)arg1 left:(double)arg2 bottom:(double)arg3 right:(double)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

