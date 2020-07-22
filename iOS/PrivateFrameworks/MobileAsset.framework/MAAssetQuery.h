//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSMutableArray, NSString;

@interface MAAssetQuery : NSObject
{
    _Bool _augmentState;
    NSMutableArray *_queryParams;
    NSString *_assetType;
    NSArray *_results;
    long long _returnTypes;
    NSDate *_lastFetchDate;
}

@property(readonly, nonatomic) NSDate *lastFetchDate; // @synthesize lastFetchDate=_lastFetchDate;
@property(readonly, nonatomic) long long returnTypes; // @synthesize returnTypes=_returnTypes;
@property(readonly, nonatomic) NSArray *results; // @synthesize results=_results;
@property(readonly, nonatomic) NSString *assetType; // @synthesize assetType=_assetType;
@property(readonly, nonatomic) _Bool augmentState; // @synthesize augmentState=_augmentState;
@property(readonly, nonatomic) NSMutableArray *queryParams; // @synthesize queryParams=_queryParams;
- (long long)queryMetaDataSync;
- (void)queryMetaData:(CDUnknownBlockType)arg1;
- (void)getResultsFromMessage:(id)arg1;
- (long long)addKeyValuePair:(id)arg1 with:(id)arg2;
- (void)returnTypes:(long long)arg1;
- (void)augmentResultsWithState:(_Bool)arg1;
- (void)dealloc;
- (id)initWithType:(id)arg1;

@end
