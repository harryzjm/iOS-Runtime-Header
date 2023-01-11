//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSReading/TSWPStorage.h>

@class NSCache, NSLocale, NSMutableArray, NSSet;

@interface SXTextTangierStorage : TSWPStorage
{
    _Bool _isSelectable;
    _Bool _shouldHyphenate;
    struct os_unfair_lock_s _unfairLock;
    NSLocale *_locale;
    NSSet *_rangedExclusionPaths;
    NSMutableArray *_attachments;
    NSCache *_tokenizersCache;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct os_unfair_lock_s unfairLock; // @synthesize unfairLock=_unfairLock;
@property(retain, nonatomic) NSCache *tokenizersCache; // @synthesize tokenizersCache=_tokenizersCache;
@property(retain, nonatomic) NSMutableArray *attachments; // @synthesize attachments=_attachments;
@property(retain, nonatomic) NSSet *rangedExclusionPaths; // @synthesize rangedExclusionPaths=_rangedExclusionPaths;
@property(nonatomic) _Bool shouldHyphenate; // @synthesize shouldHyphenate=_shouldHyphenate;
@property(nonatomic) _Bool isSelectable; // @synthesize isSelectable=_isSelectable;
@property(readonly, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
- (void)dealloc;
- (struct _NSRange)wordAtCharIndex:(unsigned long long)arg1 includePreviousWord:(_Bool)arg2;
- (struct _NSRange)insertAttachmentOrFootnote:(id)arg1 range:(struct _NSRange)arg2;
- (_Bool)supportsSections;
- (id)initWithContext:(id)arg1 stylesheet:(id)arg2 storageKind:(int)arg3 string:(id)arg4 locale:(id)arg5;

@end
