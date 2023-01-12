//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NetworkServiceProxy/NSCopying-Protocol.h>
#import <NetworkServiceProxy/NSSecureCoding-Protocol.h>

@class NSDate;

@interface PrivacyProxyServiceStatusTime : NSObject <NSSecureCoding, NSCopying>
{
    unsigned long long _serviceStatus;
    NSDate *_serviceStatusStartTime;
    NSDate *_serviceStatusEndTime;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain) NSDate *serviceStatusEndTime; // @synthesize serviceStatusEndTime=_serviceStatusEndTime;
@property(retain) NSDate *serviceStatusStartTime; // @synthesize serviceStatusStartTime=_serviceStatusStartTime;
@property unsigned long long serviceStatus; // @synthesize serviceStatus=_serviceStatus;
- (id)diagnostics;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;

@end
