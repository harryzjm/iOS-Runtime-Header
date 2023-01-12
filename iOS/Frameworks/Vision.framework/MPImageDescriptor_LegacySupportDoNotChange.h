//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface MPImageDescriptor_LegacySupportDoNotChange : NSObject
{
    float _quality;
    float _nextLeafDescriptorDistance;
    float _previousLeafDescriptorDistance;
    float _nextLeafTotalDistance;
    float _previousLeafTotalDistance;
    long long _descriptorId;
    NSString *_externalImageId;
    long long _exifTimestamp;
    void *_colorGaborDescriptor;
    void *_sceneClassifierDescriptor;
    void *_imageRegistrationDescriptor;
    long long _previousLeafId;
    long long _nextLeafId;
    long long _nextLeafTimestampDistance;
    long long _previousLeafTimestampDistance;
    NSData *_rawColorGaborDescriptor;
    NSString *_imageFilePath;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) NSString *imageFilePath; // @synthesize imageFilePath=_imageFilePath;
@property(readonly) NSData *rawColorGaborDescriptor; // @synthesize rawColorGaborDescriptor=_rawColorGaborDescriptor;
@property float previousLeafTotalDistance; // @synthesize previousLeafTotalDistance=_previousLeafTotalDistance;
@property float nextLeafTotalDistance; // @synthesize nextLeafTotalDistance=_nextLeafTotalDistance;
@property long long previousLeafTimestampDistance; // @synthesize previousLeafTimestampDistance=_previousLeafTimestampDistance;
@property long long nextLeafTimestampDistance; // @synthesize nextLeafTimestampDistance=_nextLeafTimestampDistance;
@property float previousLeafDescriptorDistance; // @synthesize previousLeafDescriptorDistance=_previousLeafDescriptorDistance;
@property float nextLeafDescriptorDistance; // @synthesize nextLeafDescriptorDistance=_nextLeafDescriptorDistance;
@property long long nextLeafId; // @synthesize nextLeafId=_nextLeafId;
@property long long previousLeafId; // @synthesize previousLeafId=_previousLeafId;
@property(readonly) void *imageRegistrationDescriptor; // @synthesize imageRegistrationDescriptor=_imageRegistrationDescriptor;
@property(readonly) void *sceneClassifierDescriptor; // @synthesize sceneClassifierDescriptor=_sceneClassifierDescriptor;
@property(readonly) void *colorGaborDescriptor; // @synthesize colorGaborDescriptor=_colorGaborDescriptor;
@property(readonly) float quality; // @synthesize quality=_quality;
@property(readonly) long long exifTimestamp; // @synthesize exifTimestamp=_exifTimestamp;
@property(readonly) NSString *externalImageId; // @synthesize externalImageId=_externalImageId;
@property(readonly) long long descriptorId; // @synthesize descriptorId=_descriptorId;
- (void)dealloc;
- (unsigned long long)serializeStateIntoData:(id)arg1 startingAtByteOffset:(unsigned long long)arg2 error:(id *)arg3;
- (unsigned long long)serializedLength;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

