//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileStoreUI/NSObject-Protocol.h>

@class SUUIMenuBarViewElementConfiguration, SUUIMenuItemViewElement;
@protocol NSCopying;

@protocol SUUIMenuBarViewElementConfigurationDelegate <NSObject>

@optional
- (void)menuBarViewElementConfiguration:(SUUIMenuBarViewElementConfiguration *)arg1 selectMenuItemViewElement:(SUUIMenuItemViewElement *)arg2 animated:(_Bool)arg3;
- (void)menuBarViewElementConfiguration:(SUUIMenuBarViewElementConfiguration *)arg1 didReplaceDocumentForEntityUniqueIdentifier:(id <NSCopying>)arg2;
- (void)menuBarViewElementConfiguration:(SUUIMenuBarViewElementConfiguration *)arg1 didReplaceDocumentForMenuItemAtIndex:(unsigned long long)arg2;
@end

