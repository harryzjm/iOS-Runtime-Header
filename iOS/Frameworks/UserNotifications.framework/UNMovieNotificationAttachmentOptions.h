//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserNotifications/UNNotificationAttachmentThumbnailOptions-Protocol.h>

@class NSString;

@interface UNMovieNotificationAttachmentOptions <UNNotificationAttachmentThumbnailOptions>
{
    _Bool _thumbnailHidden;
    CDStruct_1b6d18a9 _thumbnailTimestamp;
    struct CGRect _thumbnailClippingRect;
}

+ (_Bool)supportsSecureCoding;
+ (id)optionsFromOptionsDictionary:(id)arg1;
@property(readonly, nonatomic) CDStruct_1b6d18a9 thumbnailTimestamp; // @synthesize thumbnailTimestamp=_thumbnailTimestamp;
@property(readonly, nonatomic) struct CGRect thumbnailClippingRect; // @synthesize thumbnailClippingRect=_thumbnailClippingRect;
@property(readonly, nonatomic) _Bool thumbnailHidden; // @synthesize thumbnailHidden=_thumbnailHidden;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithThumbnailHidden:(_Bool)arg1 thumbnailClippingRect:(struct CGRect)arg2 thumbnailTimestamp:(CDStruct_1b6d18a9)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
