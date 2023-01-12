//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface FMFMapCacheImage : NSObject
{
    long long _count;
    NSString *_path;
    NSDate *_timestamp;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(nonatomic) long long count; // @synthesize count=_count;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)boostPriority;
- (id)initWithCoder:(id)arg1;
- (id)initWithPath:(id)arg1;

@end

