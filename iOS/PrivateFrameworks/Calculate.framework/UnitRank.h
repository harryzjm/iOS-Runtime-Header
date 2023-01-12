//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLocale;

__attribute__((visibility("hidden")))
@interface UnitRank : NSObject
{
    int _unitID;
    float _rank;
    NSLocale *_locale;
    id _context;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id context; // @synthesize context=_context;
@property(retain, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(nonatomic) float rank; // @synthesize rank=_rank;
@property(nonatomic) int unitID; // @synthesize unitID=_unitID;
- (id)description;
- (unsigned long long)hash;
- (long long)compare:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithUnitID:(int)arg1 rank:(float)arg2 locale:(id)arg3 context:(id)arg4;
- (id)initWithUnitID:(int)arg1 rank:(float)arg2 locale:(id)arg3;

@end

