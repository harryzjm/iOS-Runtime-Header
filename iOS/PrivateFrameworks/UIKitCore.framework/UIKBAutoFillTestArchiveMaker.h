//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIKBAutoFillTestArchive, UIViewController;

__attribute__((visibility("hidden")))
@interface UIKBAutoFillTestArchiveMaker : NSObject
{
    UIKBAutoFillTestArchive *_testArchive;
    UIViewController *_viewControllerToSnapshot;
    long long _currentTableViewTag;
    long long _currentTextFieldTag;
}

+ (id)archiveMakerWithViewControllerToSnapshot:(id)arg1;
- (void).cxx_destruct;
- (id)archiver:(id)arg1 willEncodeObject:(id)arg2;
- (id)_makeCopyOfObject:(id)arg1;
- (id)_cloneNavigationItem:(id)arg1;
- (id)_cloneBarButtonItem:(id)arg1;
- (id)_cloneViewHierarchyFromRootView:(id)arg1;
- (id)_cloneTableView:(id)arg1;
- (id)_cloneGenericView:(id)arg1;
- (id)_cloneButton:(id)arg1;
- (id)_cloneTextView:(id)arg1;
- (id)_cloneTextField:(id)arg1;
- (id)_cloneLabel:(id)arg1;
- (void)_applyPropertiesFromLabel:(id)arg1 toLabel:(id)arg2;
- (void)_applyPropertiesFromView:(id)arg1 toView:(id)arg2;
- (id)_cloneView:(id)arg1;
- (id)makeArchive;
- (id)initWithViewControllerToSnapshot:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

