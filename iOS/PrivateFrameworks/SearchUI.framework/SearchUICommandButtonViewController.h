//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchUI/CNActionViewDelegate-Protocol.h>

@class NSString, SearchUIActionView;

@interface SearchUICommandButtonViewController <CNActionViewDelegate>
{
}

- (void)didPressActionView:(id)arg1 longPress:(_Bool)arg2;
- (void)setCompact:(_Bool)arg1;
- (void)updateTitle;
- (void)disableAndHideButton:(_Bool)arg1;
- (void)setButtonItem:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SearchUIActionView *view; // @dynamic view;

@end
