//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, NSHashTable, UILabel;

__attribute__((visibility("hidden")))
@interface _UIDatePickerLinkedLabelStorage : NSObject
{
    UILabel *_sizingLabel;
    NSHashTable *_attachedLabels;
    unsigned long long _currentPriority;
    NSCache *_sizeCache;
}

- (void).cxx_destruct;
- (void)_setCachedSize:(struct CGSize)arg1 forKey:(id)arg2;
- (_Bool)_cachedSizeForKey:(id)arg1 size:(struct CGSize *)arg2;
- (struct CGSize)_sizeForText:(id)arg1 font:(id)arg2 height:(double)arg3 overrideAttributes:(id)arg4;
- (unsigned long long)_currentPriority;
- (void)_setPriority:(long long)arg1 label:(id)arg2;
- (void)_resetPriority;
- (void)_notifyAllLabelsExcept:(id)arg1;
- (void)_detachLabel:(id)arg1;
- (void)_attachLabel:(id)arg1;
- (id)init;

@end

