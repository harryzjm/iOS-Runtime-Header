//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSUUID, SBHIconLibraryQuery;

@interface SBHIconLibraryQueryContext : NSObject
{
    NSMutableDictionary *_contextStorage;
    unsigned long long _queryContextIdx;
    NSUUID *_UUID;
    SBHIconLibraryQuery *_query;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SBHIconLibraryQuery *query; // @synthesize query=_query;
@property(readonly, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (_Bool)isEqualToQueryContext:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithQuery:(id)arg1;

@end
