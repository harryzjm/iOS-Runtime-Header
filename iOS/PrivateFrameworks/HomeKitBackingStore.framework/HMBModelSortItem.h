//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMBModel, NSMutableSet, NSUUID;

__attribute__((visibility("hidden")))
@interface HMBModelSortItem : HMFObject
{
    HMBModel *_model;
    NSUUID *_modelID;
    NSUUID *_parentModelID;
    NSMutableSet *_dependentModels;
    unsigned long long _mark;
}

@property(nonatomic) unsigned long long mark; // @synthesize mark=_mark;
@property(retain, nonatomic) NSMutableSet *dependentModels; // @synthesize dependentModels=_dependentModels;
@property(retain, nonatomic) NSUUID *parentModelID; // @synthesize parentModelID=_parentModelID;
@property(retain, nonatomic) NSUUID *modelID; // @synthesize modelID=_modelID;
@property(retain, nonatomic) HMBModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (id)initWithModel:(id)arg1;

@end
