//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SUUIViewController.h"

@class SUUIDeveloperInfo, SUUIDeveloperInfoView, UIScrollView;

__attribute__((visibility("hidden")))
@interface SUUIDeveloperInfoViewController : SUUIViewController
{
    SUUIDeveloperInfo *_developerInfo;
    SUUIDeveloperInfoView *_infoView;
    UIScrollView *_scrollView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SUUIDeveloperInfo *developerInfo; // @synthesize developerInfo=_developerInfo;
- (void)loadView;
- (id)initWithDeveloperInfo:(id)arg1;

@end

