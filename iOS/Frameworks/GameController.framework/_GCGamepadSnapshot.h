//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameController/_GCSnapshot-Protocol.h>

@class GCMotion, NSData, NSString;

@interface _GCGamepadSnapshot <_GCSnapshot>
{
    NSData *_snapshotData;
    GCMotion *_motion;
}

- (void).cxx_destruct;
- (void)set_motion:(id)arg1;
- (id)motion;
- (id)initWithController:(id)arg1 snapshotData:(id)arg2;
- (id)initWithSnapshotData:(id)arg1;
@property(copy, nonatomic) NSData *snapshotData; // @synthesize snapshotData=_snapshotData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
