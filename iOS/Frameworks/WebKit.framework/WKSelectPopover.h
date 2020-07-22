//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebKit/WKFormControl-Protocol.h>

__attribute__((visibility("hidden")))
@interface WKSelectPopover <WKFormControl>
{
    struct RetainPtr<WKSelectTableViewController> _tableViewController;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_userActionDismissedPopover:(id)arg1;
- (void)controlEndEditing;
- (void)controlBeginEditing;
- (id)controlView;
- (void)dealloc;
- (id)initWithView:(id)arg1 hasGroups:(_Bool)arg2;
- (void)selectRow:(long long)arg1 inComponent:(long long)arg2 extendingSelection:(_Bool)arg3;

@end
