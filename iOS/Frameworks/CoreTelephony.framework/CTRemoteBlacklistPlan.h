//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CTRemoteBlacklistPlan
{
    NSString *_key;
    NSString *_blacklistIMEI;
    NSString *_blacklistEID;
    NSString *_blacklistICCID;
    NSString *_uploaderIMEI;
    NSString *_uploaderEID;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *uploaderEID; // @synthesize uploaderEID=_uploaderEID;
@property(readonly, nonatomic) NSString *uploaderIMEI; // @synthesize uploaderIMEI=_uploaderIMEI;
@property(readonly, nonatomic) NSString *blacklistICCID; // @synthesize blacklistICCID=_blacklistICCID;
@property(readonly, nonatomic) NSString *blacklistEID; // @synthesize blacklistEID=_blacklistEID;
@property(readonly, nonatomic) NSString *blacklistIMEI; // @synthesize blacklistIMEI=_blacklistIMEI;
@property(readonly, nonatomic) NSString *key; // @synthesize key=_key;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithkey:(id)arg1 blacklistIMEI:(id)arg2 blacklistEID:(id)arg3 blacklistICCID:(id)arg4 uploaderIMEI:(id)arg5 uploaderEID:(id)arg6;

@end
