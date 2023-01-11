//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface ILMessageCommunication
{
    NSString *_messageBody;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *messageBody; // @synthesize messageBody=_messageBody;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToMessageCommunication:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithSender:(id)arg1 dateReceived:(id)arg2 messageBody:(id)arg3;

@end
