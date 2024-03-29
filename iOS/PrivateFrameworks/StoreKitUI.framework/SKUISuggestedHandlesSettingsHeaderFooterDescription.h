//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, SKUIClientContext;
@protocol SKUISuggestedHandlesSettingsHeaderFooterDescriptionDelegate;

__attribute__((visibility("hidden")))
@interface SKUISuggestedHandlesSettingsHeaderFooterDescription
{
    SKUIClientContext *_clientContext;
    NSArray *_suggestedHandles;
    id <SKUISuggestedHandlesSettingsHeaderFooterDescriptionDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SKUISuggestedHandlesSettingsHeaderFooterDescriptionDelegate> delegate; // @synthesize delegate=_delegate;
- (Class)_viewClassForSettingsHeaderFooterDescription:(id)arg1;
- (id)suggestedHandles;
- (void)selectedHandleAtIndex:(unsigned long long)arg1;
- (id)helpText;
- (id)initWithSuggestedHandles:(id)arg1 clientContext:(id)arg2 delegate:(id)arg3;

@end

