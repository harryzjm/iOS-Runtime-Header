//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/NSCopying-Protocol.h>

@class NSString;

@interface HDSQLitePropertyPredicate <NSCopying>
{
    NSString *_property;
}

@property(readonly, nonatomic) NSString *property; // @synthesize property=_property;
- (void).cxx_destruct;
- (_Bool)isCompatibleWithPredicate:(id)arg1;
- (id)SQLJoinClausesForEntityClass:(Class)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

