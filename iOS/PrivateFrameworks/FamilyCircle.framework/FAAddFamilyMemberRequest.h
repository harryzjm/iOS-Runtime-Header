//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface FAAddFamilyMemberRequest
{
    _Bool _memberIsUnder13;
    NSString *_memberAppleID;
    NSString *_memberPassword;
}

@property(readonly) _Bool memberIsUnder13; // @synthesize memberIsUnder13=_memberIsUnder13;
@property(readonly, copy) NSString *memberPassword; // @synthesize memberPassword=_memberPassword;
@property(readonly, copy) NSString *memberAppleID; // @synthesize memberAppleID=_memberAppleID;
- (void).cxx_destruct;
- (void)startRequestWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithFamilyMemberAppleID:(id)arg1 password:(id)arg2 isUnder13:(_Bool)arg3;

@end

