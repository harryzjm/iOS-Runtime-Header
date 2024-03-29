//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSString, UIScene;

__attribute__((visibility("hidden")))
@interface _UISearchActivityManager : NSObject
{
    UIScene *_scene;
    NSMapTable *__activeAssertions;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMapTable *_activeAssertions; // @synthesize _activeAssertions=__activeAssertions;
@property(nonatomic, getter=_scene, setter=_setScene:) __weak UIScene *_scene; // @synthesize _scene;
- (void)_updateClientSettingsIfNecessary;
- (id)windowHostingScene;
- (id)beginTrackingActiveSearchParticipant:(id)arg1;
- (id)initWithScene:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

