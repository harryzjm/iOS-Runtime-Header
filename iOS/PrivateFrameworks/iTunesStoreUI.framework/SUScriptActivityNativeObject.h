//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStoreUI/SUActivityDelegate-Protocol.h>

@class NSString;

@interface SUScriptActivityNativeObject <SUActivityDelegate>
{
}

- (void)performActionForActivity:(id)arg1;
- (void)activity:(id)arg1 prepareWithActivityItems:(id)arg2;
- (_Bool)activity:(id)arg1 canPerformWithActivityItems:(id)arg2;
- (void)setupNativeObject;
- (void)destroyNativeObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

