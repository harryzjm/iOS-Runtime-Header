//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIImage;

@interface CMKVideoCaptureResponse
{
    _Bool _unplayable;
    _Bool _didCompleteUnexpectedly;
    short _assetSubtype;
    int _recordingStoppedReason;
    NSString *_videoCapturePath;
    UIImage *_videoPreviewImage;
    double _duration;
}

+ (double)minimumVideoCaptureDuration;
@property(nonatomic) _Bool didCompleteUnexpectedly; // @synthesize didCompleteUnexpectedly=_didCompleteUnexpectedly;
@property(nonatomic, getter=isUnplayable) _Bool unplayable; // @synthesize unplayable=_unplayable;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) short assetSubtype; // @synthesize assetSubtype=_assetSubtype;
@property(retain, nonatomic) UIImage *videoPreviewImage; // @synthesize videoPreviewImage=_videoPreviewImage;
@property(nonatomic) int recordingStoppedReason; // @synthesize recordingStoppedReason=_recordingStoppedReason;
@property(copy, nonatomic) NSString *videoCapturePath; // @synthesize videoCapturePath=_videoCapturePath;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isSuccessful) _Bool successful;
- (id)init;

@end
