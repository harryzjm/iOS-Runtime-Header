//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Vision/VNImageIdealImageSizeProviding-Protocol.h>

@class NSArray, NSString;

@interface VN5kJNH3eYuyaLxNpZr5Z7zi <VNImageIdealImageSizeProviding>
{
}

+ (id)defaultProcessingDeviceForRevision:(unsigned long long)arg1;
+ (id)descriptionForPrivateRevision:(unsigned long long)arg1;
+ (_Bool)supportsPrivateRevision:(unsigned long long)arg1;
+ (Class)configurationClass;
+ (id)knownClassificationsForRevision:(unsigned long long)arg1 error:(id *)arg2;
- (CDUnknownBlockType)resultsSortingComparator;
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
- (_Bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;
- (void)applyConfigurationOfRequest:(id)arg1;
- (_Bool)warmUpSession:(id)arg1 error:(id *)arg2;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2;
@property(readonly) NSArray *supportedImageSizeSet;
@property unsigned long long imageCropAndScaleOption;
- (id)_applicableDetectorLoadedInSession:(id)arg1 appliedConfigurationOptions:(id *)arg2 error:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
