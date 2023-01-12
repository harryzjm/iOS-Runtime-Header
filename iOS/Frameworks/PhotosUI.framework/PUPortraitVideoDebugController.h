//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PhotosUI/UITableViewDataSource-Protocol.h>
#import <PhotosUI/UITableViewDelegate-Protocol.h>

@class NSArray, NSString, PICompositionController;

__attribute__((visibility("hidden")))
@interface PUPortraitVideoDebugController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    PICompositionController *_compositionController;
    NSArray *_debugModes;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *debugModes; // @synthesize debugModes=_debugModes;
@property(retain, nonatomic) PICompositionController *compositionController; // @synthesize compositionController=_compositionController;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
