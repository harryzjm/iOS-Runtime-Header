//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PXCMMMomentsInvitationsDataSourceState;

@interface PXCMMMomentsInvitationsDataSource
{
    PXCMMMomentsInvitationsDataSourceState *__state;
}

@property(readonly, nonatomic) PXCMMMomentsInvitationsDataSourceState *_state; // @synthesize _state=__state;
- (void).cxx_destruct;
- (struct PXSimpleIndexPath)indexPathForObjectReference:(id)arg1;
- (id)invitationForObjectID:(id)arg1;
- (id)objectIDAtItemIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)invitationAtItemIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)initWithState:(id)arg1;

@end

