//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ECMessageFlagChange;

@interface EMMessageFlagChangeAction
{
    ECMessageFlagChange *_flagChange;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) ECMessageFlagChange *flagChange; // @synthesize flagChange=_flagChange;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)signpostType;
- (id)initWithMessageListItems:(id)arg1 flagChange:(id)arg2;

@end
