//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthRecordServices/NSCopying-Protocol.h>
#import <HealthRecordServices/NSSecureCoding-Protocol.h>

@class NSArray, NSNumber;

@interface HDClinicalDataCollectionExtractionResult : NSObject <NSCopying, NSSecureCoding>
{
    NSArray *_redactedResources;
    NSNumber *_rulesVersion;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSNumber *rulesVersion; // @synthesize rulesVersion=_rulesVersion;
@property(readonly, copy, nonatomic) NSArray *redactedResources; // @synthesize redactedResources=_redactedResources;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRedactedResources:(id)arg1 rulesVersion:(id)arg2;

@end
