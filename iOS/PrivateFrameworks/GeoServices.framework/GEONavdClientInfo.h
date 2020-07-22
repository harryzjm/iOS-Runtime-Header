//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/NSCopying-Protocol.h>
#import <GeoServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface GEONavdClientInfo : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_canonicalName;
    NSString *_uniqueClientId;
}

+ (id)clientInfoForNavdPredictions;
+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *uniqueClientId; // @synthesize uniqueClientId=_uniqueClientId;
@property(copy, nonatomic) NSString *canonicalName; // @synthesize canonicalName=_canonicalName;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isNavdClientInfo;
- (_Bool)isCalendarClientInfo;
- (id)initWithCanonicalName:(id)arg1 instanceId:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

