//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMCore/IMPluginPayload.h>

@class CKMediaObject, NSDictionary, NSURL, UIViewController;
@protocol CKPluginEntryViewController;

@interface CKBrowserItemPayload : IMPluginPayload
{
    _Bool _requiresValidation;
    _Bool _useDirectSend;
    NSURL *_videoComplementFileURL;
    UIViewController<CKPluginEntryViewController> *_photoShelfViewController;
    NSURL *_fileURL;
    NSDictionary *_attributionInfo;
    CKMediaObject *_mediaObject;
}

+ (_Bool)supportsSecureCoding;
+ (id)browserItemPayloadFromIMPluginPayload:(id)arg1;
+ (id)browserItemFromSticker:(id)arg1;
@property(retain, nonatomic) CKMediaObject *mediaObject; // @synthesize mediaObject=_mediaObject;
@property(retain, nonatomic) NSDictionary *attributionInfo; // @synthesize attributionInfo=_attributionInfo;
@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(retain, nonatomic) UIViewController<CKPluginEntryViewController> *photoShelfViewController; // @synthesize photoShelfViewController=_photoShelfViewController;
@property(retain, nonatomic) NSURL *videoComplementFileURL; // @synthesize videoComplementFileURL=_videoComplementFileURL;
@property(nonatomic) _Bool useDirectSend; // @synthesize useDirectSend=_useDirectSend;
@property(nonatomic) _Bool requiresValidation; // @synthesize requiresValidation=_requiresValidation;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToPluginPayload:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)__ck_urlFromTextBodyForRichLink;
- (id)mediaObjectFromPayload;
- (id)transcoderUserInfo;
- (_Bool)shouldSendAsRichLink;
- (_Bool)shouldSendAsText;
- (_Bool)shouldSendAsMediaObject;

@end

