//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class MFLock;

@interface MFWebKitMainThread : NSObject
{
    struct __CFDictionary *_visibleDict;
    MFLock *_visibleDictLock;
}

+ (id)sharedInstance;
- (int)dictValueForMimeType:(id)arg1;
- (void)_mainThreadPopulateDictForMimeType:(id)arg1;
- (void)dealloc;
- (id)init;

@end
