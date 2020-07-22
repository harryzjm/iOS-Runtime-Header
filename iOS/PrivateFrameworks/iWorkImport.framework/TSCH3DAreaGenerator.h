//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSCH3DAreaGenerator : NSObject
{
    vector_45b393db mTop;
    vector_45b393db mBottom;
    tvec2_84d5962d mYLimits;
    float mZeroValue;
}

+ (id)generatorWithYLimits:(tvec2_84d5962d)arg1 zeroValue:(float)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clipLine:(const vector_45b393db *)arg1 into:(vector_45b393db *)arg2;
- (id)createGeometry:(const vector_ec52ae8c *)arg1;
- (void)addRow:(const vector_ec52ae8c *)arg1;
- (float)clampedZero;
- (void)dealloc;
- (id)initWithYLimits:(tvec2_84d5962d)arg1 zeroValue:(float)arg2;

@end

