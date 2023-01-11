//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CATTaskResultObject.h"

@class NSData, NSString;

@interface CRKFetchMDMIdentityResultObject : CATTaskResultObject
{
    NSData *_mdmIdentityPersistentID;
    NSString *_mdmIdentityCommonName;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSString *mdmIdentityCommonName; // @synthesize mdmIdentityCommonName=_mdmIdentityCommonName;
@property(retain, nonatomic) NSData *mdmIdentityPersistentID; // @synthesize mdmIdentityPersistentID=_mdmIdentityPersistentID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
