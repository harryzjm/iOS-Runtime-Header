//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PLPhotoEditMutableModel;
@protocol PUEditableAsset;

__attribute__((visibility("hidden")))
@interface _PUAdjustmentsLoadResult : NSObject
{
    PLPhotoEditMutableModel *_editModel;
    long long _penultimateState;
    long long _resolvedVersion;
    id <PUEditableAsset> _asset;
}

@property(readonly, nonatomic) id <PUEditableAsset> asset; // @synthesize asset=_asset;
@property(readonly, nonatomic) long long resolvedVersion; // @synthesize resolvedVersion=_resolvedVersion;
@property(readonly, nonatomic) long long penultimateState; // @synthesize penultimateState=_penultimateState;
@property(readonly, nonatomic) PLPhotoEditMutableModel *editModel; // @synthesize editModel=_editModel;
- (void).cxx_destruct;
- (id)initWithEditModel:(id)arg1 penultimateState:(long long)arg2 resolvedVersion:(long long)arg3 asset:(id)arg4;

@end

