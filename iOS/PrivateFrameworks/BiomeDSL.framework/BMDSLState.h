//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BMDSL, NSString;
@protocol BMDSLStateValue;

@interface BMDSLState
{
    BMDSL *_upstream;
    NSString *_key;
    id <BMDSLStateValue> _value;
    id <BMDSLStateValue> _combinedValue;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) id <BMDSLStateValue> combinedValue; // @synthesize combinedValue=_combinedValue;
@property(readonly, nonatomic) id <BMDSLStateValue> value; // @synthesize value=_value;
@property(readonly, nonatomic) NSString *key; // @synthesize key=_key;
@property(readonly, nonatomic) BMDSL *upstream; // @synthesize upstream=_upstream;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)combinedState;
- (id)upstreams;
- (id)initWithUpstream:(id)arg1 key:(id)arg2 value:(id)arg3;
- (id)initWithName:(id)arg1 version:(unsigned int)arg2 upstream:(id)arg3 key:(id)arg4 value:(id)arg5;
- (id)bpsPublisher;

@end
