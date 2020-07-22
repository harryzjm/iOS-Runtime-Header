//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface NCNotificationExtensionCache : NSObject
{
    struct NSMutableDictionary *_extensions;
}

@property(copy, nonatomic) NSMutableDictionary *extensions; // @synthesize extensions=_extensions;
- (void).cxx_destruct;
- (id)_extensionMatchingSection:(id)arg1 category:(id)arg2;
- (id)_customSectionIdentifierForExtension:(id)arg1;
- (id)_categoriesForExtension:(id)arg1;
- (struct NSMutableDictionary *)_sectionDictForSection:(id)arg1;
- (void)_removeAllExtensions;
- (void)_addExtension:(id)arg1;
- (void)registerExtensions:(id)arg1;
- (id)extensionForNotificationRequest:(id)arg1;
- (id)init;

@end

