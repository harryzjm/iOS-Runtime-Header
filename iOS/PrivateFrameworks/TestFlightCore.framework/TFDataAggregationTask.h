//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface TFDataAggregationTask : NSObject
{
    CDUnknownBlockType _loadDataBlock;
    CDUnknownBlockType _extractValuesBlock;
    NSString *_name;
    NSString *_logKey;
    NSArray *_providedEntryIdentifiers;
}

+ (id)deviceInfoTask;
+ (id)_readableNetworkConnectionTypStringFromNWPath:(id)arg1;
+ (id)_readableRATStringFromCTRadioAccessTechnology:(id)arg1;
+ (id)networkInfoTask;
+ (id)sessionInfoTaskForIdentifier:(id)arg1;
+ (id)anytimeTasksForSession:(id)arg1;
+ (id)snapshotTasksForSession:(id)arg1;
+ (id)regionInfoTask;
+ (id)watchInfoTask;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *providedEntryIdentifiers; // @synthesize providedEntryIdentifiers=_providedEntryIdentifiers;
@property(readonly, copy, nonatomic) NSString *logKey; // @synthesize logKey=_logKey;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) CDUnknownBlockType extractValuesBlock; // @synthesize extractValuesBlock=_extractValuesBlock;
@property(copy, nonatomic) CDUnknownBlockType loadDataBlock; // @synthesize loadDataBlock=_loadDataBlock;
- (void)extractDataPropertiesFromData:(id)arg1 intoDataContainer:(id)arg2;
- (void)loadDataOnQueue:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)description;
- (id)initWithName:(id)arg1 providedEntryIdentifiers:(id)arg2;

@end
