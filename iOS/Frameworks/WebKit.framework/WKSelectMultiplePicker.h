//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, WKContentView;

__attribute__((visibility("hidden")))
@interface WKSelectMultiplePicker : NSObject
{
    WKContentView *_view;
    struct RetainPtr<UINavigationController> _navigationController;
    struct RetainPtr<WKSelectPickerTableViewController> _tableViewController;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)selectRow:(long long)arg1 inComponent:(long long)arg2 extendingSelection:(_Bool)arg3;
- (id)_indexPathForRow:(long long)arg1;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)controlEndEditing;
- (void)controlBeginEditing;
- (id)controlView;
- (void)configurePresentation;
- (id)initWithView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

