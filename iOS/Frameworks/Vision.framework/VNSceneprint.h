//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <Vision/NSSecureCoding-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface VNSceneprint : NSObject <NSSecureCoding>
{
    NSDictionary *_softmaxLabelsAndConfidence;
    NSData *_descriptorData;
    unsigned long long _elementCount;
    unsigned long long _lengthInBytes;
    NSString *_version;
    long long _distanceMode;
}

+ (_Bool)supportsSecureCoding;
+ (id)currentVersion;
@property long long distanceMode; // @synthesize distanceMode=_distanceMode;
@property(readonly) NSString *version; // @synthesize version=_version;
@property(retain) NSDictionary *softmaxLabelsAndConfidence; // @synthesize softmaxLabelsAndConfidence=_softmaxLabelsAndConfidence;
@property unsigned long long lengthInBytes; // @synthesize lengthInBytes=_lengthInBytes;
@property unsigned long long elementCount; // @synthesize elementCount=_elementCount;
@property(retain) NSData *descriptorData; // @synthesize descriptorData=_descriptorData;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(char *)arg1 elementCount:(unsigned long long)arg2 lengthInBytes:(unsigned long long)arg3 distanceMode:(long long)arg4 softmaxLabelsAndConfidence:(map_fdb8d0b1 *)arg5;

@end
