//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, WKBrowsingContextHandle;

@interface WBSBundleWebExtensionBrowsingContext : NSObject
{
    WKBrowsingContextHandle *_browsingContextHandle;
    NSNumber *_tabID;
    NSNumber *_windowID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *windowID; // @synthesize windowID=_windowID;
@property(readonly, nonatomic) NSNumber *tabID; // @synthesize tabID=_tabID;
@property(readonly, nonatomic) WKBrowsingContextHandle *browsingContextHandle; // @synthesize browsingContextHandle=_browsingContextHandle;
- (id)initWithBrowingContextHandle:(id)arg1 tabID:(id)arg2 windowID:(id)arg3;

@end
