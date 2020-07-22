//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSMutableString, NSString;

@interface CMDictArchiveManager
{
    NSMutableDictionary *mResources;
    NSString *mPrefix;
    NSString *mResourceUrlProtocol;
    NSMutableString *mMainHtml;
    NSString *mName;
    _Bool mIsFrameset;
}

- (void).cxx_destruct;
- (void)pushCssToPath:(id)arg1;
- (id)resourceUrlProtocol;
- (unsigned long long)resourceCount;
- (id)copyDictionaryWithSizeInfos:(_Bool)arg1;
- (void)pushText:(id)arg1 toPath:(id)arg2;
- (void)pushData:(id)arg1 toPath:(id)arg2;
- (id)copyResourceWithName:(id)arg1 type:(int)arg2;
- (id)name;
- (void)setIsFrameset;
- (id)initWithName:(id)arg1 resourcePathPrefix:(id)arg2;

@end

