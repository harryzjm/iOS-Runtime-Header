//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface TXRAssetCatalogSet : NSObject
{
    unsigned long long _interpretation;
    unsigned long long _origin;
    NSString *_name;
    _Bool _cubemap;
    NSMutableArray *_configs;
}

@property(readonly, nonatomic) _Bool cubemap; // @synthesize cubemap=_cubemap;
@property(readonly) NSArray *configs; // @synthesize configs=_configs;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long origin; // @synthesize origin=_origin;
@property(nonatomic) unsigned long long interpretation; // @synthesize interpretation=_interpretation;
- (void).cxx_destruct;
- (_Bool)addConfig:(id)arg1 error:(id *)arg2;
- (id)exportAtLocation:(id)arg1 error:(id *)arg2;
- (id)initWithName:(id)arg1;
- (id)init;

@end

