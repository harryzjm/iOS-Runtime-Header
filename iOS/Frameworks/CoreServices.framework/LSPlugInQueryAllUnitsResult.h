//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_LSQueryResult.h"

@class NSArray, NSUUID;

__attribute__((visibility("hidden")))
@interface LSPlugInQueryAllUnitsResult : _LSQueryResult
{
    NSArray *_pluginUnits;
    NSUUID *_dbUUID;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSUUID *dbUUID; // @synthesize dbUUID=_dbUUID;
@property(readonly, nonatomic) NSArray *pluginUnits; // @synthesize pluginUnits=_pluginUnits;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlugInUnits:(id)arg1 forDatabaseWithUUID:(id)arg2;

@end

