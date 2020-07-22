//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

@class SearchUIAppIconImage;

@interface SearchUIAppIconButton : UIButton
{
    SearchUIAppIconImage *_image;
}

@property(retain) SearchUIAppIconImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)appIconImageDidChange:(id)arg1;
- (void)updateWithBundleID:(id)arg1 webClipID:(id)arg2;
- (void)updateWithBundleID:(id)arg1;
- (void)dealloc;
- (id)init;

@end
