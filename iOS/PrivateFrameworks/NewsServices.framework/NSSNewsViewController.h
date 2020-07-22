//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSArray, _UIResilientRemoteViewContainerViewController;

@interface NSSNewsViewController : UIViewController
{
    _Bool _linkPreviewing;
    NSArray *_articleIDs;
    _UIResilientRemoteViewContainerViewController *_remoteViewContainerViewController;
}

+ (_Bool)canOpenURL:(id)arg1;
@property(retain, nonatomic) _UIResilientRemoteViewContainerViewController *remoteViewContainerViewController; // @synthesize remoteViewContainerViewController=_remoteViewContainerViewController;
@property(copy, nonatomic) NSArray *articleIDs; // @synthesize articleIDs=_articleIDs;
@property(nonatomic, getter=isLinkPreviewing) _Bool linkPreviewing; // @synthesize linkPreviewing=_linkPreviewing;
- (void).cxx_destruct;
- (void)setupRemoteViewController:(id)arg1;
- (void)requestRemoteViewController;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)initWithArticleIDs:(id)arg1;
- (id)initWithArticleID:(id)arg1;

@end
