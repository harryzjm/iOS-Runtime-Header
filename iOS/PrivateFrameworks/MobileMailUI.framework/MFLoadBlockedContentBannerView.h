//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol MFLoadBlockedContentBannerViewDelegate;

@interface MFLoadBlockedContentBannerView
{
    long long _blockingReason;
    id <MFLoadBlockedContentBannerViewDelegate> _delegate;
    unsigned long long _blockedContentTypes;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long blockedContentTypes; // @synthesize blockedContentTypes=_blockedContentTypes;
@property(nonatomic) __weak id <MFLoadBlockedContentBannerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_titleControlTapped:(id)arg1;
- (void)_updateBannerText;
- (id)initWithFrame:(struct CGRect)arg1 blockedContentTypes:(unsigned long long)arg2 blockingReason:(long long)arg3;

@end
