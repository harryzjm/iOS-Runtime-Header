//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class WBSRemotePlistController;

@interface _SFRequestDesktopSiteQuirksManager : NSObject
{
    WBSRemotePlistController *_remotePlistController;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)getAllQuirkValuesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)quirksValueForDomain:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;

@end
