//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSUUID;

@interface CXSendMMIOrUSSDCodeAction
{
    NSString *_code;
    long long _ttyType;
    NSUUID *_senderIdentityUUID;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSUUID *senderIdentityUUID; // @synthesize senderIdentityUUID=_senderIdentityUUID;
@property(nonatomic) long long ttyType; // @synthesize ttyType=_ttyType;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (id)sanitizedCopyWithZone:(struct _NSZone *)arg1;
- (id)customDescription;

@end
