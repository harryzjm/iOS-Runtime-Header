//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, NSURL, UILabel, UIView;

@interface DDParsecNoDataViewController : UIViewController
{
    UIView *_container;
    UILabel *_errorLabel;
    _Bool _inPlatter;
    NSString *_reason;
    NSString *_searchWebQuery;
    NSURL *_altURL;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool inPlatter; // @synthesize inPlatter=_inPlatter;
@property(retain) NSURL *altURL; // @synthesize altURL=_altURL;
@property(retain) NSString *searchWebQuery; // @synthesize searchWebQuery=_searchWebQuery;
@property(retain, nonatomic) NSString *reason; // @synthesize reason=_reason;
- (_Bool)_canShowWhileLocked;
- (void)manageDictionaries:(id)arg1;
- (id)manageDictionariesURL;
- (void)searchWeb:(id)arg1;
- (void)loadView;

@end
