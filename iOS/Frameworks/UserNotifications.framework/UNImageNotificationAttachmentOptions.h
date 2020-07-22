//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserNotifications/UNNotificationAttachmentThumbnailOptions-Protocol.h>

@class NSNumber, NSString;

@interface UNImageNotificationAttachmentOptions <UNNotificationAttachmentThumbnailOptions>
{
    _Bool _thumbnailHidden;
    NSNumber *_thumbnailFrameNumber;
    struct CGRect _thumbnailClippingRect;
}

+ (_Bool)supportsSecureCoding;
+ (id)optionsFromOptionsDictionary:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *thumbnailFrameNumber; // @synthesize thumbnailFrameNumber=_thumbnailFrameNumber;
@property(readonly, nonatomic) struct CGRect thumbnailClippingRect; // @synthesize thumbnailClippingRect=_thumbnailClippingRect;
@property(readonly, nonatomic) _Bool thumbnailHidden; // @synthesize thumbnailHidden=_thumbnailHidden;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithThumbnailHidden:(_Bool)arg1 thumbnailClippingRect:(struct CGRect)arg2 thumbnailFrameNumber:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

