//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableSet;

@interface CoreDAVMkcolResponseItem
{
    NSMutableSet *_propStats;
}

+ (id)copyParseRules;
@property(retain, nonatomic) NSMutableSet *propStats; // @synthesize propStats=_propStats;
- (void).cxx_destruct;
- (_Bool)hasPropertyError;
- (void)addPropStat:(id)arg1;
- (id)description;
- (id)init;

@end

