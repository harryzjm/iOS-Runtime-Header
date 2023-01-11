//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@class NSDictionary;

@interface GEORequestCounterLogInfo : NSObject <NSSecureCoding>
{
    NSDictionary *_dict;
}

+ (_Bool)supportsSecureCoding;
+ (id)counterLogInfoWithDictionary:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)_formattedCSVString;
- (id)_formattedString;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) unsigned char requestType;
- (unsigned long long)recvBytesForMode:(unsigned char)arg1;
- (unsigned long long)recvBytes;
- (unsigned long long)xmitBytesForMode:(unsigned char)arg1;
- (unsigned long long)xmitBytes;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

