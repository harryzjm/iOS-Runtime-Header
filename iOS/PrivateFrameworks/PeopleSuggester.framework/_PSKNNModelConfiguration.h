//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface _PSKNNModelConfiguration : NSObject
{
    NSArray *_interactionCountMaxDepths;
    NSArray *_interactionMechanisms;
    NSArray *_interactionHistoryRelativeStartDates;
    NSArray *_bundleIds;
    long long _modelType;
    NSString *_modelName;
    unsigned long long _clusterPruneThreshold;
    CDUnknownBlockType _shouldExcludeInteractionBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType shouldExcludeInteractionBlock; // @synthesize shouldExcludeInteractionBlock=_shouldExcludeInteractionBlock;
@property(readonly, nonatomic) unsigned long long clusterPruneThreshold; // @synthesize clusterPruneThreshold=_clusterPruneThreshold;
@property(retain, nonatomic) NSString *modelName; // @synthesize modelName=_modelName;
@property(nonatomic) long long modelType; // @synthesize modelType=_modelType;
@property(retain, nonatomic) NSArray *bundleIds; // @synthesize bundleIds=_bundleIds;
@property(retain, nonatomic) NSArray *interactionHistoryRelativeStartDates; // @synthesize interactionHistoryRelativeStartDates=_interactionHistoryRelativeStartDates;
@property(retain, nonatomic) NSArray *interactionMechanisms; // @synthesize interactionMechanisms=_interactionMechanisms;
@property(retain, nonatomic) NSArray *interactionCountMaxDepths; // @synthesize interactionCountMaxDepths=_interactionCountMaxDepths;
- (id)initWithInteractionMechanisms:(id)arg1 interactionCountMaxDepths:(id)arg2 interactionHistoryRelativeStartDates:(id)arg3 bundleIds:(id)arg4 modelType:(long long)arg5 clusterPruneThreshold:(unsigned long long)arg6 modelName:(id)arg7 shouldExcludeInteractionBlock:(CDUnknownBlockType)arg8;
- (id)initWithInteractionMechanisms:(id)arg1 interactionCountMaxDepths:(id)arg2 interactionHistoryRelativeStartDates:(id)arg3 bundleIds:(id)arg4 modelType:(long long)arg5 clusterPruneThreshold:(unsigned long long)arg6 modelName:(id)arg7;

@end
