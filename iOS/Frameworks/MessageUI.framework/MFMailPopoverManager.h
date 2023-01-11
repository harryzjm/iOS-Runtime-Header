//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MessageUI/UIAdaptivePresentationControllerDelegate-Protocol.h>

@class NSMutableArray, NSString;

@interface MFMailPopoverManager : NSObject <UIAdaptivePresentationControllerDelegate>
{
    NSMutableArray *_passThroughProviders;
}

+ (void)enumerateManagersUsingBlock:(CDUnknownBlockType)arg1;
+ (id)managerForWindow:(id)arg1 createIfNeeded:(_Bool)arg2;
- (id)allPassThroughViews;
- (void)removePassthroughViewProvider:(id)arg1;
- (void)addPassthroughViewProvider:(id)arg1;
- (void)dealloc;
- (id)_init;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

