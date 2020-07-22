//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface HKOAuth2TokenSession : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_code;
    NSString *_query;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(readonly, copy, nonatomic) NSString *code; // @synthesize code=_code;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCode:(id)arg1 query:(id)arg2;
- (id)init;

@end
