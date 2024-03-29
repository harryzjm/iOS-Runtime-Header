//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FontAssetDownloadManager : NSObject
{
    struct TCFRef<const __CFArray *> fDescriptors;
    struct TCFRef<const __CFSet *> fMandatoryAttributes;
    CDUnknownBlockType fProgressCallbackBlock;
    NSMutableDictionary *fProgressParams;
    NSMutableDictionary *fDownloadOptions;
    NSMutableDictionary *fAssetToDescriptors;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;

@end

