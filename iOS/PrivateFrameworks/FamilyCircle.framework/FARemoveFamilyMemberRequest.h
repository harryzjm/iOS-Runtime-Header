//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber;

@interface FARemoveFamilyMemberRequest
{
    NSNumber *_memberDSID;
}

@property(readonly, copy) NSNumber *memberDSID; // @synthesize memberDSID=_memberDSID;
- (void).cxx_destruct;
- (void)startRequestWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithFamilyMemberDSID:(id)arg1;

@end
