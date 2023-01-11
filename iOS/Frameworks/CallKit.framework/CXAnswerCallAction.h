//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate;

@interface CXAnswerCallAction
{
    _Bool _downgradeToAudio;
    NSDate *_dateConnected;
    struct CGSize _localPortraitAspectRatio;
    struct CGSize _localLandscapeAspectRatio;
}

+ (_Bool)supportsSecureCoding;
+ (double)timeout;
@property(copy, nonatomic) NSDate *dateConnected; // @synthesize dateConnected=_dateConnected;
@property(nonatomic) _Bool downgradeToAudio; // @synthesize downgradeToAudio=_downgradeToAudio;
- (void)setLocalLandscapeAspectRatio:(struct CGSize)arg1;
- (struct CGSize)localLandscapeAspectRatio;
- (void)setLocalPortraitAspectRatio:(struct CGSize)arg1;
- (struct CGSize)localPortraitAspectRatio;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (void)updateAsFulfilledWithDateConnected:(id)arg1;
- (void)fulfillWithDateConnected:(id)arg1;
- (void)fulfill;
- (id)customDescription;

@end

