//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UISearchBar.h>

@protocol MusicSearchBarDelegate;

@interface MusicSearchBar : UISearchBar
{
}

- (_Bool)_isInBar;
- (void)layoutSubviews;
@property(readonly, nonatomic) struct UIEdgeInsets searchBarContentEdgeInsets;

// Remaining properties
@property(nonatomic) id <MusicSearchBarDelegate> delegate; // @dynamic delegate;

@end
