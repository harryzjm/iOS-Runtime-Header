//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface IBNibReplayEncoderUIOffsetRecord
{
    struct UIOffset _value;
}

+ (id)recordValue:(struct UIOffset)arg1 forKey:(id)arg2;
@property(readonly) struct UIOffset value; // @synthesize value=_value;
- (id)recordWithValue:(struct UIOffset)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
