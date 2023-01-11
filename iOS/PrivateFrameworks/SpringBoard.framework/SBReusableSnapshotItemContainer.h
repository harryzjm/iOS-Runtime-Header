//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/SBReusableView-Protocol.h>

@class NSString, SBAppLayout;

@interface SBReusableSnapshotItemContainer <SBReusableView>
{
    SBAppLayout *_snapshotAppLayout;
}

@property(retain, nonatomic) SBAppLayout *snapshotAppLayout; // @synthesize snapshotAppLayout=_snapshotAppLayout;
- (void).cxx_destruct;
- (id)_snapshotView;
- (void)setContentView:(id)arg1;
- (void)prepareForReuse;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
