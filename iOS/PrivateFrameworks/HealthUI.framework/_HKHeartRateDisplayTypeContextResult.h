//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKStatistics;

@interface _HKHeartRateDisplayTypeContextResult : NSObject
{
    long long _context;
    HKStatistics *_statistics;
}

+ (id)emptyResultForContext:(long long)arg1;
@property(retain, nonatomic) HKStatistics *statistics; // @synthesize statistics=_statistics;
@property(nonatomic) long long context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithContext:(long long)arg1 statistics:(id)arg2;

@end

