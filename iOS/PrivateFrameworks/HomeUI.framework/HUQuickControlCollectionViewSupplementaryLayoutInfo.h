//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HUQuickControlCollectionViewLayoutSupplementarySectionSettings;

@interface HUQuickControlCollectionViewSupplementaryLayoutInfo : NSObject
{
    unsigned long long _itemSize;
    HUQuickControlCollectionViewLayoutSupplementarySectionSettings *_settings;
    struct CGRect _contentFrame;
    struct UIEdgeInsets _preferredLayoutAreaInset;
}

@property(retain, nonatomic) HUQuickControlCollectionViewLayoutSupplementarySectionSettings *settings; // @synthesize settings=_settings;
@property(nonatomic) struct UIEdgeInsets preferredLayoutAreaInset; // @synthesize preferredLayoutAreaInset=_preferredLayoutAreaInset;
@property(nonatomic) unsigned long long itemSize; // @synthesize itemSize=_itemSize;
@property(nonatomic) struct CGRect contentFrame; // @synthesize contentFrame=_contentFrame;
- (void).cxx_destruct;

@end
