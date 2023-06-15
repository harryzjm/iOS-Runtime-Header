//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LPBackgroundColorView, LPCaptionBarView, LPComponentView, LPContactsBadgeView, LPDomainNameIndicator, LPImageView, LPQuoteView;

__attribute__((visibility("hidden")))
@interface LPLinkViewComponents : NSObject
{
    LPCaptionBarView *_captionBar;
    LPComponentView *_media;
    LPBackgroundColorView *_mediaBackground;
    LPCaptionBarView *_mediaTopCaptionBar;
    LPCaptionBarView *_mediaBottomCaptionBar;
    LPQuoteView *_quote;
    LPImageView *_backgroundImage;
    LPDomainNameIndicator *_domainNameIndicator;
    LPContactsBadgeView *_contactsBadge;
}

- (void).cxx_destruct;
@property(retain, nonatomic) LPContactsBadgeView *contactsBadge; // @synthesize contactsBadge=_contactsBadge;
@property(retain, nonatomic) LPDomainNameIndicator *domainNameIndicator; // @synthesize domainNameIndicator=_domainNameIndicator;
@property(retain, nonatomic) LPImageView *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) LPQuoteView *quote; // @synthesize quote=_quote;
@property(retain, nonatomic) LPCaptionBarView *mediaBottomCaptionBar; // @synthesize mediaBottomCaptionBar=_mediaBottomCaptionBar;
@property(retain, nonatomic) LPCaptionBarView *mediaTopCaptionBar; // @synthesize mediaTopCaptionBar=_mediaTopCaptionBar;
@property(retain, nonatomic) LPBackgroundColorView *mediaBackground; // @synthesize mediaBackground=_mediaBackground;
@property(retain, nonatomic) LPComponentView *media; // @synthesize media=_media;
@property(retain, nonatomic) LPCaptionBarView *captionBar; // @synthesize captionBar=_captionBar;
- (void)applyToAllViews:(CDUnknownBlockType)arg1;

@end

