//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleIDSSOAuthentication/NSCopying-Protocol.h>
#import <AppleIDSSOAuthentication/NSSecureCoding-Protocol.h>

@class NSError, NSString;

@interface AIDAServiceOperationResult : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _success;
    NSError *_error;
    NSString *_type;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) _Bool success; // @synthesize success=_success;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSuccess:(_Bool)arg1 error:(id)arg2 type:(id)arg3;

@end
