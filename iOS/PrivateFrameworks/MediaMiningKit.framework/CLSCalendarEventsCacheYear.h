//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface CLSCalendarEventsCacheYear : NSObject
{
    long long _year;
    NSMutableSet *_months;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableSet *months; // @synthesize months=_months;
@property(nonatomic) long long year; // @synthesize year=_year;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)initWithYear:(long long)arg1;

@end
