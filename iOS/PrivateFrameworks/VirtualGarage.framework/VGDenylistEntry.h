//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber;

__attribute__((visibility("hidden")))
@interface VGDenylistEntry : NSObject
{
    NSNumber *_modelId;
    NSArray *_firmwareIds;
    NSArray *_years;
    NSArray *_models;
}

- (void).cxx_destruct;
- (id)description;
- (_Bool)isSupersetOfEntry:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithModelId:(id)arg1 firmwareIds:(id)arg2 years:(id)arg3 models:(id)arg4;

@end

