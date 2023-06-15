//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface LSBundleRecordUpdater
{
    struct LSContext _context;
    _Bool _hasContext;
    unsigned int _bundleID;
    struct LSBundleData _bundleData;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)checkNeedsUpdateForiTunesMetadata:(id)arg1 SINFo:(id)arg2 placeholderMetadata:(id)arg3;
- (_Bool)updateBundleRecord:(id *)arg1;
- (void)parsePlaceholderMetadata:(id)arg1;
- (void)parseSINFDictionary:(id)arg1;
- (void)parseiTunesMetadata:(id)arg1;
- (void)dealloc;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 preferPlaceholder:(_Bool)arg2;
- (id)initWithDatabase:(id)arg1 bundleUnit:(unsigned int)arg2 bundleData:(const struct LSBundleData *)arg3;

@end

