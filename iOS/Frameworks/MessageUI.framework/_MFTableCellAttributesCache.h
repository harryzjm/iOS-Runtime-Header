//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSCache;

@interface _MFTableCellAttributesCache : NSObject
{
    NSCache *_attributesCache;
}

+ (id)sharedInstance;
- (id)cachedAttributesForIdentifier:(id)arg1 constructionBlock:(CDUnknownBlockType)arg2;
- (void)_didReceiveFontSizeChangeNotification:(id)arg1;
- (void)dealloc;
- (id)init;

@end
