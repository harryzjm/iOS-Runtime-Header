//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface SGEmailAddress
{
    NSString *_emailAddress;
}

+ (id)emailAddress:(id)arg1 label:(id)arg2 extractionType:(unsigned long long)arg3 withRecordId:(id)arg4;
+ (id)emailAddress:(id)arg1 label:(id)arg2 extractionType:(unsigned long long)arg3 withRecordId:(id)arg4 origin:(id)arg5;
+ (id)emailAddress:(id)arg1 label:(id)arg2 extractionInfo:(id)arg3 withRecordId:(id)arg4;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqualToEmailAddress:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEmailAddress:(id)arg1 label:(id)arg2 extractionInfo:(id)arg3 recordId:(id)arg4;

@end
