//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSExtensionItem;

@interface _SFActivityExtensionItemProvider
{
    NSExtensionItem *_extensionItem;
}

@property(retain, nonatomic) NSExtensionItem *extensionItem; // @synthesize extensionItem=_extensionItem;
- (void).cxx_destruct;
- (id)_itemForActivityType:(id)arg1;
- (id)item;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)initWithExtensionItem:(id)arg1 URL:(id)arg2 pageTitle:(id)arg3;

@end
