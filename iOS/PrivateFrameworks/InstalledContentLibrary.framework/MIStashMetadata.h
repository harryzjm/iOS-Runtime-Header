//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface MIStashMetadata : NSObject
{
    NSDate *_dateStashed;
    NSDate *_dateOriginallyInstalled;
}

+ (id)metadataFromURL:(id)arg1 error:(id *)arg2;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *dateOriginallyInstalled; // @synthesize dateOriginallyInstalled=_dateOriginallyInstalled;
@property(retain, nonatomic) NSDate *dateStashed; // @synthesize dateStashed=_dateStashed;
- (_Bool)serializeToURL:(id)arg1 error:(id *)arg2;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;

@end

