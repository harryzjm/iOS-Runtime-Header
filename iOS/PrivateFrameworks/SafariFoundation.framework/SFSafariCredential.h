//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SafariFoundation/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface SFSafariCredential : NSObject <NSSecureCoding>
{
    NSString *_user;
    NSString *_password;
    NSString *_site;
    NSDate *_creationDate;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, nonatomic) NSString *site; // @synthesize site=_site;
@property(readonly, nonatomic) NSString *password; // @synthesize password=_password;
@property(readonly, nonatomic) NSString *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithUser:(id)arg1 password:(id)arg2 site:(id)arg3 creationDate:(id)arg4;

@end

