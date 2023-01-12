//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NetworkServiceProxy/NSCopying-Protocol.h>
#import <NetworkServiceProxy/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary;

@interface PrivacyProxyServiceStatus : NSObject <NSSecureCoding, NSCopying>
{
    unsigned long long _serviceStatus;
    NSArray *_networkStatuses;
    NSDictionary *_details;
}

+ (_Bool)supportsSecureCoding;
+ (id)serviceStatusString:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(retain) NSDictionary *details; // @synthesize details=_details;
@property(retain) NSArray *networkStatuses; // @synthesize networkStatuses=_networkStatuses;
@property unsigned long long serviceStatus; // @synthesize serviceStatus=_serviceStatus;
- (id)initWithData:(id)arg1;
- (id)serialize;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;

@end
