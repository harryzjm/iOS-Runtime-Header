//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IBUIMetricRepresentation;

@interface IBUISimulatedNavigationControllerMetricChain
{
    _Bool _navigationBarHidden;
    _Bool _toolbarHidden;
    IBUIMetricRepresentation *_navigationBar;
    IBUIMetricRepresentation *_toolbar;
}

@property(readonly, nonatomic) IBUIMetricRepresentation *toolbar; // @synthesize toolbar=_toolbar;
@property(readonly, nonatomic) IBUIMetricRepresentation *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(readonly, nonatomic) _Bool toolbarHidden; // @synthesize toolbarHidden=_toolbarHidden;
@property(readonly, nonatomic) _Bool navigationBarHidden; // @synthesize navigationBarHidden=_navigationBarHidden;
- (void).cxx_destruct;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithNavigationBarHidden:(_Bool)arg1 toolbarHidden:(_Bool)arg2 navigationBar:(id)arg3 toolbar:(id)arg4 precedingMetric:(id)arg5;
- (id)createWindowForViewController:(id)arg1 initialSize:(id)arg2 inContext:(id)arg3;

@end

