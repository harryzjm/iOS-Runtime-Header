//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface IBNibReplayEncoderObjectRecord
{
    _Bool _isConditional;
    id _value;
}

+ (id)recordValue:(id)arg1 isConditional:(_Bool)arg2 forKey:(id)arg3;
- (void).cxx_destruct;
@property(readonly) _Bool isConditional; // @synthesize isConditional=_isConditional;
@property(readonly) id value; // @synthesize value=_value;
- (id)recordWithValue:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
