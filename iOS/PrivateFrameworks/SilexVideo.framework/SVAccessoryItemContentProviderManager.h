//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVAccessoryItemContentManager-Protocol.h>
#import <SilexVideo/SVAccessoryItemContentProviderManager-Protocol.h>

@class NSMapTable, NSString;

@interface SVAccessoryItemContentProviderManager : NSObject <SVAccessoryItemContentProviderManager, SVAccessoryItemContentManager>
{
    NSMapTable *_contentProviders;
}

@property(readonly, nonatomic) NSMapTable *contentProviders; // @synthesize contentProviders=_contentProviders;
- (void).cxx_destruct;
- (void)updateAccessoryItem:(id)arg1 forVideo:(id)arg2 animated:(_Bool)arg3;
- (void)registerAccessoryItem:(id)arg1 withContentProvider:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

