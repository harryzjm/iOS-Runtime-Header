//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ShazamKit/NSCopying-Protocol.h>
#import <ShazamKit/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface SHSignatureMetrics : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_audioSource;
    NSDate *_sessionStartDate;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *sessionStartDate; // @synthesize sessionStartDate=_sessionStartDate;
@property(copy, nonatomic) NSString *audioSource; // @synthesize audioSource=_audioSource;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) double sessionDuration;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionStartDate:(id)arg1;

@end
