//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKit/NSSecureCoding-Protocol.h>

@class NSData, NSDate;

@interface HMCacheEntry : HMFObject <NSSecureCoding>
{
    NSData *_data;
    NSDate *_lastModificationDate;
}

+ (id)shortDescription;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy) NSDate *lastModificationDate; // @synthesize lastModificationDate=_lastModificationDate;
@property(readonly, copy) NSData *data; // @synthesize data=_data;
- (id)initWithData:(id)arg1 lastModificationDate:(id)arg2;
@property(readonly) _Bool isExpired;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
