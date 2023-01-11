//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TimeSync/NSCopying-Protocol.h>

@class NSDate, NSDictionary;

@interface TSTAIUTCValue : NSObject <NSCopying>
{
    NSDate *_utcDate;
    NSDate *_taiDate;
    unsigned long long _modifiedJulianDay;
    double _constant;
    double _coefficient;
    unsigned long long _offset;
}

@property(nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(nonatomic) double coefficient; // @synthesize coefficient=_coefficient;
@property(nonatomic) double constant; // @synthesize constant=_constant;
@property(nonatomic) unsigned long long modifiedJulianDay; // @synthesize modifiedJulianDay=_modifiedJulianDay;
@property(retain, nonatomic) NSDate *taiDate; // @synthesize taiDate=_taiDate;
@property(retain, nonatomic) NSDate *utcDate; // @synthesize utcDate=_utcDate;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSDictionary *dictionary; // @dynamic dictionary;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end
