//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache;

@interface WBUFormAutoFillWhiteList : NSObject
{
    NSCache *_cache;
}

+ (id)sharedAutoFillWhiteList;
- (void).cxx_destruct;
- (_Bool)allowsURL:(id)arg1;
- (void)_whiteListSettingsChanged:(id)arg1;
- (void)dealloc;
- (id)init;

@end

