//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsToday/NSCopying-Protocol.h>
#import <NewsToday/NSSecureCoding-Protocol.h>

@class NSDate, NSOrderedSet;

@interface NTTodayResults : NSObject <NSCopying, NSSecureCoding>
{
    NSOrderedSet *_sections;
    NSDate *_expirationDate;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy, nonatomic) NSOrderedSet *sections; // @synthesize sections=_sections;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)itemCount;
- (id)initWithSections:(id)arg1 expirationDate:(id)arg2;
- (id)init;

@end

