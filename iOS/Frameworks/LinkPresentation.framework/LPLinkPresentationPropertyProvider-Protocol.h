//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LinkPresentation/NSObject-Protocol.h>

@class LPAudio, LPCaptionBarPresentationProperties, LPImage, LPImagePresentationProperties, LPInlineMediaPlaybackInformation, LPVideo, NSArray, NSNumber, NSString, UIColor;

@protocol LPLinkPresentationPropertyProvider <NSObject>

@optional
- (LPInlineMediaPlaybackInformation *)inlinePlaybackInformation;
- (NSNumber *)minimumHeight;
- (UIColor *)backgroundColor;
- (LPAudio *)audio;
- (LPVideo *)video;
- (NSArray *)alternateImages;
- (LPImagePresentationProperties *)imageProperties;
- (LPImage *)image;
- (NSString *)quotedText;
- (LPCaptionBarPresentationProperties *)mediaBottomCaptionBar;
- (LPCaptionBarPresentationProperties *)mediaTopCaptionBar;
- (LPCaptionBarPresentationProperties *)captionBar;
- (LPImage *)icon;
- (NSString *)mediaBottomCaption;
- (NSString *)mediaTopCaption;
- (NSString *)trailingBottomCaption;
- (NSString *)trailingTopCaption;
- (NSString *)bottomCaption;
- (NSString *)topCaption;
- (long long)style;
- (_Bool)isPreliminary;
@end
