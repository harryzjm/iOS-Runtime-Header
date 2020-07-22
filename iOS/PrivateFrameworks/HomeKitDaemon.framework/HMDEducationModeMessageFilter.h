//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HMDEducationModeMessageFilter
{
    _Bool _ephemeralMultiUser;
    _Bool _managedAppleID;
}

@property(nonatomic, getter=isManagedAppleID) _Bool managedAppleID; // @synthesize managedAppleID=_managedAppleID;
@property(nonatomic, getter=isEphemeralMultiUser) _Bool ephemeralMultiUser; // @synthesize ephemeralMultiUser=_ephemeralMultiUser;
- (_Bool)acceptMessage:(id)arg1 target:(id)arg2 errorReason:(id *)arg3;
- (void)handleActiveAccountChanged:(id)arg1;
- (void)_update;
- (void)dealloc;
- (id)initWithName:(id)arg1;

@end

