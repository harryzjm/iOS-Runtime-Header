//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSOperationQueue, NSURL;

__attribute__((visibility("hidden")))
@interface _TtC7VFXCore17MTLLibraryWatcher : NSObject
{
    MISSING_TYPE *libraryURL;
    MISSING_TYPE *watchingFolderQueue;
    MISSING_TYPE *block;
}

- (void).cxx_destruct;
- (id)init;
- (void)presentedItemDidChange;
@property(nonatomic, readonly) NSOperationQueue *presentedItemOperationQueue;
@property(nonatomic, readonly) NSURL *presentedItemURL;

@end
