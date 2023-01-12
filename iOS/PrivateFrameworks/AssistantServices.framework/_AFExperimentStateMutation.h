//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFExperimentStateMutating-Protocol.h>

@class AFExperimentState, NSDate, NSString;

@interface _AFExperimentStateMutation : NSObject <AFExperimentStateMutating>
{
    AFExperimentState *_baseModel;
    NSDate *_lastSyncDate;
    _Bool _didEnd;
    NSString *_endingGroupIdentifier;
    NSString *_version;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasLastSyncDate:1;
        unsigned int hasDidEnd:1;
        unsigned int hasEndingGroupIdentifier:1;
        unsigned int hasVersion:1;
    } _mutationFlags;
}

- (void).cxx_destruct;
- (id)generate;
- (void)setVersion:(id)arg1;
- (void)setEndingGroupIdentifier:(id)arg1;
- (void)setDidEnd:(_Bool)arg1;
- (void)setLastSyncDate:(id)arg1;
- (id)initWithBaseModel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
