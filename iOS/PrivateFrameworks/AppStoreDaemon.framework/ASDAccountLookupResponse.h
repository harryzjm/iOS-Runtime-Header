//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError, NSNumber;

@interface ASDAccountLookupResponse
{
    _Bool _askToBuyEnabled;
    NSNumber *_accountID;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property _Bool askToBuyEnabled; // @synthesize askToBuyEnabled=_askToBuyEnabled;
@property(copy) NSNumber *accountID; // @synthesize accountID=_accountID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAccountID:(id)arg1;
- (id)init;

// Remaining properties
@property(copy) NSError *error; // @dynamic error;

@end
