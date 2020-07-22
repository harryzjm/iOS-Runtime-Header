//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUIUserActionURLOpener-Protocol.h>

@class NSExtensionContext, NSString;

@interface CNUIUserActionExtensionURLOpener : NSObject <CNUIUserActionURLOpener>
{
    NSExtensionContext *_extensionContext;
}

@property(readonly, nonatomic) NSExtensionContext *extensionContext; // @synthesize extensionContext=_extensionContext;
- (void).cxx_destruct;
- (id)openURL:(id)arg1 isSensitive:(_Bool)arg2 withScheduler:(id)arg3;
- (id)openURL:(id)arg1 withScheduler:(id)arg2;
- (id)initWithExtensionContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

