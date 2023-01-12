//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _LTHotfixManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSURL *_hotfixURL;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)_decompressArchive:(id)arg1 to:(id)arg2 error:(id *)arg3;
- (void)_downloadHotfix:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_downloadMappingPlist:(CDUnknownBlockType)arg1;
- (id)_CDNURL:(id)arg1;
- (void)_downloadWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteHotfix:(CDUnknownBlockType)arg1;
- (void)updateHotfix:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSURL *hotfixURL; // @synthesize hotfixURL=_hotfixURL;
- (id)init;

@end
