//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIImageView, UIView;

__attribute__((visibility("hidden")))
@interface _UIBarBackgroundImageView
{
    UIView *_topStripView;
    UIImageView *_customImageContainer;
    _Bool _translucent;
}

@property(nonatomic, getter=isTranslucent) _Bool translucent; // @synthesize translucent=_translucent;
- (void).cxx_destruct;
- (id)image;
- (void)setImage:(id)arg1;
- (void)removeTopStripView;
- (void)updateTopStripViewCreateIfNecessary;
- (id)topStripView;

@end
