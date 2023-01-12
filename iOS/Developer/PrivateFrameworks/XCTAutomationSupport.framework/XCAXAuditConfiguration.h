//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <XCTAutomationSupport/NSCopying-Protocol.h>
#import <XCTAutomationSupport/NSSecureCoding-Protocol.h>

@class NSArray;

@interface XCAXAuditConfiguration : NSObject <NSSecureCoding, NSCopying>
{
    NSArray *_auditTypes;
    long long _timeout;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) long long timeout; // @synthesize timeout=_timeout;
@property(copy, nonatomic) NSArray *auditTypes; // @synthesize auditTypes=_auditTypes;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
