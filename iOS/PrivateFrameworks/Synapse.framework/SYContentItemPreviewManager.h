//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SYContentItemPreviewManager : NSObject
{
}

+ (void)_loadPreviewForAppContentItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)_loadPreviewUsingLPForItem:(id)arg1 fullDetail:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)_loadPreviewMetadataForItem:(id)arg1 fullDetail:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)loadPreviewDataForItems:(id)arg1 fullDetail:(_Bool)arg2 didFinishLoadingPreviewHandler:(CDUnknownBlockType)arg3;

@end

