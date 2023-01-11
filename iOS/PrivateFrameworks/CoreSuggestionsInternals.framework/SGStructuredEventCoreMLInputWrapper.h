//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/MLFeatureProvider-Protocol.h>

@class MLMultiArray, NSSet;

__attribute__((visibility("hidden")))
@interface SGStructuredEventCoreMLInputWrapper : NSObject <MLFeatureProvider>
{
    MLMultiArray *_L;
    MLMultiArray *_D;
    MLMultiArray *_I;
    MLMultiArray *_N;
    MLMultiArray *_W;
    MLMultiArray *_bi_lstm_0_h_in;
    MLMultiArray *_bi_lstm_0_c_in;
    MLMultiArray *_bi_lstm_0_h_in_rev;
    MLMultiArray *_bi_lstm_0_c_in_rev;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MLMultiArray *bi_lstm_0_c_in_rev; // @synthesize bi_lstm_0_c_in_rev=_bi_lstm_0_c_in_rev;
@property(retain, nonatomic) MLMultiArray *bi_lstm_0_h_in_rev; // @synthesize bi_lstm_0_h_in_rev=_bi_lstm_0_h_in_rev;
@property(retain, nonatomic) MLMultiArray *bi_lstm_0_c_in; // @synthesize bi_lstm_0_c_in=_bi_lstm_0_c_in;
@property(retain, nonatomic) MLMultiArray *bi_lstm_0_h_in; // @synthesize bi_lstm_0_h_in=_bi_lstm_0_h_in;
@property(retain, nonatomic) MLMultiArray *W; // @synthesize W=_W;
@property(retain, nonatomic) MLMultiArray *N; // @synthesize N=_N;
@property(retain, nonatomic) MLMultiArray *I; // @synthesize I=_I;
@property(retain, nonatomic) MLMultiArray *D; // @synthesize D=_D;
@property(retain, nonatomic) MLMultiArray *L; // @synthesize L=_L;
- (id)featureValueForName:(id)arg1;
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithL:(id)arg1 D:(id)arg2 I:(id)arg3 N:(id)arg4 W:(id)arg5 bi_lstm_0_h_in:(id)arg6 bi_lstm_0_c_in:(id)arg7 bi_lstm_0_h_in_rev:(id)arg8 bi_lstm_0_c_in_rev:(id)arg9;
- (id)initWithL:(id)arg1 D:(id)arg2 I:(id)arg3 N:(id)arg4 W:(id)arg5;

@end
