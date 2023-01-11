//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ARKit/ARTrackable-Protocol.h>

@class ARReferenceImage, NSString;

@interface ARImageAnchor <ARTrackable>
{
    _Bool _detectionOnly;
    _Bool _isTracked;
    ARReferenceImage *_referenceImage;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool isTracked; // @synthesize isTracked=_isTracked;
@property(nonatomic, getter=isDetectionOnly) _Bool detectionOnly; // @synthesize detectionOnly=_detectionOnly;
@property(readonly, nonatomic) ARReferenceImage *referenceImage; // @synthesize referenceImage=_referenceImage;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAnchor:(id)arg1;
- (id)copyWithTrackedState:(_Bool)arg1;
@property(readonly, copy) NSString *description;
- (id)name;
- (id)initWithReferenceImage:(id)arg1 transform:(CDStruct_14d5dc5e)arg2 detectionOnly:(_Bool)arg3 tracked:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

