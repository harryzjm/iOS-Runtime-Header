//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WKAccessibilityWebPageObjectBase : NSObject
{
    NakedPtr_895bc996 m_page;
    struct ObjectIdentifierGeneric<WebCore::PageIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> m_pageID;
    struct RetainPtr<id> m_parent;
    _Bool m_hasMainFramePlugin;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)accessibilityFocusedUIElement;
- (void)setRemoteParent:(id)arg1;
- (void)setHasMainFramePlugin:(_Bool)arg1;
- (void)setWebPage:(NakedPtr_895bc996)arg1;
- (id)accessibilityRootObjectWrapper;
- (id)accessibilityPluginObject;
- (NakedPtr_8c2573e4)axObjectCache;

@end

