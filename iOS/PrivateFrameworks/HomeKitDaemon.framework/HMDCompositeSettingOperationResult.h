//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDCompositeSetting, HMDCompositeSettingMetadata, NSError, NSString;

__attribute__((visibility("hidden")))
@interface HMDCompositeSettingOperationResult : HMFObject
{
    HMDCompositeSettingMetadata *_metadata;
    HMDCompositeSetting *_setting;
    NSError *_error;
    NSString *_keyPath;
}

+ (id)frameWorkFetchResultsWithOperationResults:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(readonly, copy) NSError *error; // @synthesize error=_error;
@property(readonly) HMDCompositeSetting *setting; // @synthesize setting=_setting;
@property(readonly) HMDCompositeSettingMetadata *metadata; // @synthesize metadata=_metadata;
- (id)attributeDescriptions;
- (id)initWithKeyPath:(id)arg1 setting:(id)arg2 metadata:(id)arg3 error:(id)arg4;

@end

