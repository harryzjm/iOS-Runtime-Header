//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/_MPCModelRadioPlaybackQueueSection-Protocol.h>

@class MPQueueFeeder, NSString;

@interface _MPCModelRadioPlaybackQueueExternalFeederSection : NSObject <_MPCModelRadioPlaybackQueueSection>
{
    NSString *_itemID;
    MPQueueFeeder *_queueFeeder;
}

+ (id)sectionWithItemWithItemID:(id)arg1 inFeeder:(id)arg2;
- (void).cxx_destruct;
- (id)trackForItemAtIndex:(long long)arg1;
- (long long)removeExplicitItems;
@property(readonly, nonatomic) long long numberOfItems;
- (_Bool)isExplicitItemAtIndex:(long long)arg1;
- (id)AVItemQueueIdentifierAtIndex:(long long)arg1;
- (id)AVItemAtIndex:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

