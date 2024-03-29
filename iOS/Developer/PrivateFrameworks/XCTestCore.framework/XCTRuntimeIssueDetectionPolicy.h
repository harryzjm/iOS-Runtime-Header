//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <XCTestCore/NSSecureCoding-Protocol.h>

@interface XCTRuntimeIssueDetectionPolicy : NSObject <NSSecureCoding>
{
    _Bool _detectionEnabled;
    long long _severity;
}

+ (_Bool)supportsSecureCoding;
+ (id)stringFromSeverity:(long long)arg1;
+ (id)defaultRuntimeIssueDetectionPolicy;
@property(readonly) long long severity; // @synthesize severity=_severity;
@property(readonly, getter=isDetectionEnabled) _Bool detectionEnabled; // @synthesize detectionEnabled=_detectionEnabled;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqualToPolicy:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithDetectionEnabled:(_Bool)arg1;
- (id)initWithDetectionEnabled:(_Bool)arg1 severity:(long long)arg2;

@end

