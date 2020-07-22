//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCoding-Protocol.h>
#import <NewsCore/NSCopying-Protocol.h>

@class NSDate;

@interface FCFeedCursor : NSObject <NSCopying, NSCoding>
{
    unsigned long long _order;
}

+ (id)cursorForTopOfFeed;
+ (id)cursorForBottomOfFeed;
+ (id)cursorForCurrentDate;
+ (id)cursorForDate:(id)arg1;
+ (id)cursorForOrder:(unsigned long long)arg1;
@property(nonatomic) unsigned long long order; // @synthesize order=_order;
- (id)description;
- (id)bottommostCursor:(id)arg1;
- (id)topmostCursor:(id)arg1;
- (_Bool)hasReachedCursor:(id)arg1;
@property(readonly, copy, nonatomic) NSDate *date;
@property(readonly, nonatomic) _Bool isBottomOfFeed;
@property(readonly, nonatomic) _Bool isTopOfFeed;
- (long long)compareToCursor:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToCursor:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

