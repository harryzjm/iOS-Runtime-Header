//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface IBUISimulatedDeviceContextMetricChain
{
    long long _idiom;
    long long _orientation;
    long long _interfaceStyle;
    struct CGSize _screenSize;
}

+ (_Bool)canBeRootOfMetricChain;
@property(readonly, nonatomic) long long interfaceStyle; // @synthesize interfaceStyle=_interfaceStyle;
@property(readonly, nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(readonly, nonatomic) long long idiom; // @synthesize idiom=_idiom;
@property(readonly, nonatomic) struct CGSize screenSize; // @synthesize screenSize=_screenSize;
- (id)explicitWindowSize;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithScreenSize:(struct CGSize)arg1 idiom:(long long)arg2 orientation:(long long)arg3 interfaceStyle:(long long)arg4;
- (id)createWindowForViewController:(id)arg1 initialSize:(id)arg2 inContext:(id)arg3;

@end
