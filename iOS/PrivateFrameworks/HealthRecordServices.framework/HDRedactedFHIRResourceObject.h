//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface HDRedactedFHIRResourceObject
{
    NSString *_resourceType;
}

+ (_Bool)supportsSecureCoding;
+ (id)resourceObjectWithFHIRJSONObject:(id)arg1 redactedJSONObject:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *resourceType; // @synthesize resourceType=_resourceType;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_initWithResourceType:(id)arg1 sourceURL:(id)arg2 FHIRVersion:(id)arg3 JSONObject:(id)arg4;

@end
