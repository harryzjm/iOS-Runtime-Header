//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthRecordServices/NSCopying-Protocol.h>
#import <HealthRecordServices/NSSecureCoding-Protocol.h>

@class NSData, NSDictionary, NSString, NSURL;

@interface HDFHIRJSONObject : NSObject <NSSecureCoding, NSCopying>
{
    NSDictionary *_JSONObject;
    NSString *_FHIRVersion;
    NSURL *_sourceURL;
}

+ (id)resourceTypeOfJSONObject:(id)arg1 error:(id *)arg2;
+ (id)objectWithResourceData:(id)arg1 error:(id *)arg2;
+ (_Bool)supportsSecureCoding;
+ (id)_dataFromJSONObject:(id)arg1 JSONOptions:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
@property(readonly, copy, nonatomic) NSString *FHIRVersion; // @synthesize FHIRVersion=_FHIRVersion;
@property(readonly, copy, nonatomic) NSDictionary *JSONObject; // @synthesize JSONObject=_JSONObject;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSString *sourceString;
@property(readonly, copy, nonatomic) NSData *data;
- (id)_dataWithJSONOptions:(unsigned long long)arg1;
@property(readonly, copy, nonatomic) NSString *detectedResourceType;
- (id)initWithJSONObject:(id)arg1 sourceURL:(id)arg2 FHIRVersion:(id)arg3;

@end

