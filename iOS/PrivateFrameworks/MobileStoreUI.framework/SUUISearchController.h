//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UISearchController.h>

@class NSMutableString, SUUISearchBar, UILabel;
@protocol SUUISearchControllerDelegate;

__attribute__((visibility("hidden")))
@interface SUUISearchController : UISearchController
{
    UILabel *_suffixLabel;
    NSMutableString *_paddingString;
    SUUISearchBar *_searchBar;
}

- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
@property(readonly, nonatomic) SUUISearchBar *searchBar;
- (void)setActive:(_Bool)arg1;
- (void)_setSuffix:(id)arg1;

// Remaining properties
@property(nonatomic) __weak id <SUUISearchControllerDelegate> delegate; // @dynamic delegate;

@end

