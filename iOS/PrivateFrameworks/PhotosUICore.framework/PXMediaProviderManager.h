//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface PXMediaProviderManager : NSObject
{
    NSMapTable *_imageProviderByClass;
}

+ (id)defaultManager;
- (void).cxx_destruct;
- (id)imageProviderForAsset:(id)arg1;
- (id)init;

@end
