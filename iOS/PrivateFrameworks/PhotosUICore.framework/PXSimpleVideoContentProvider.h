//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVPlayerItem, NSError, NSString;

@interface PXSimpleVideoContentProvider
{
    AVPlayerItem *_playerItem;
    NSString *_contentIdentifier;
    NSError *_error;
    double _loadingProgress;
}

- (double)loadingProgress;
- (id)error;
- (id)contentIdentifier;
- (id)playerItem;
- (void).cxx_destruct;
- (id)description;
- (void)beginLoadingWithPriority:(long long)arg1;
- (id)initWithPlayerItem:(id)arg1 contentIdentifier:(id)arg2;
- (id)init;

@end
