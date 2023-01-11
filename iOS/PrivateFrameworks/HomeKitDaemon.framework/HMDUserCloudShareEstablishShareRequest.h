//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDUser, NSData;

@interface HMDUserCloudShareEstablishShareRequest
{
    HMDUser *_fromUser;
    HMDUser *_toUser;
    NSData *_encodedShareURL;
    NSData *_shareToken;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
@property(readonly, copy) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly) NSData *shareToken; // @synthesize shareToken=_shareToken;
@property(readonly) NSData *encodedShareURL; // @synthesize encodedShareURL=_encodedShareURL;
@property(readonly) __weak HMDUser *toUser; // @synthesize toUser=_toUser;
@property(readonly) __weak HMDUser *fromUser; // @synthesize fromUser=_fromUser;
- (id)description;
- (id)initWithHome:(id)arg1 fromUser:(id)arg2 toUser:(id)arg3 encodedShareURL:(id)arg4 shareToken:(id)arg5 containerID:(id)arg6 currentDate:(id)arg7 completion:(CDUnknownBlockType)arg8;

@end
