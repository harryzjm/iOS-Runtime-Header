//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface IPAPerspectiveOperator
{
    double _xAngle;
    double _yAngle;
    double _dx;
    double _dy;
}

+ (id)operatorWithIdentifier:(id)arg1 angleX:(double)arg2 Y:(double)arg3 dx:(double)arg4 dy:(double)arg5;
+ (id)operatorWithAngleX:(double)arg1 Y:(double)arg2 dx:(double)arg3 dy:(double)arg4;
- (id)description;
- (id)transformForGeometry:(id)arg1;

@end
