//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/NSSecureCoding-Protocol.h>

@class NSDate, NSDictionary, NSString, NSURL;

@interface CKDTrafficMetadata : NSObject <NSSecureCoding>
{
    NSDate *_timestamp;
    NSURL *_url;
    NSString *_method;
    long long _status;
    NSDictionary *_headers;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *method; // @synthesize method=_method;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
