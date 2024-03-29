//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface HMDCapabilityFlags : HMFObject
{
    NSData *_bytesData;
}

+ (id)shortDescription;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) NSData *bytesData; // @synthesize bytesData=_bytesData;
- (_Bool)hasCapabilities:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithCapabilities:(id)arg1;
- (id)initWithCapabilityOptions:(unsigned long long)arg1;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

